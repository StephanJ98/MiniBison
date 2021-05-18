%{
  #include <stdlib.h>
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();
  extern int yyclearin();
  #define YYDEBUG 1

%}

%token AND AND_ASIG ARRAY CABECERA CADA CADENA CARACTER CONJUNTO CONSTANTES CONTINUAR CTC_CADENA CTC_CARACTER CTC_ENTERA 
%token CTC_REAL DE DEFECTO DIV_ASIG DEVOLVER EJECUTA ENCAMBIO ENTERO EQ ES ESCAPE ESTRUCTURA ETIQUETA EXCEPCION FD_ASIG 
%token FI_ASIG FLECHA_DCHA FLECHA_IZDA FICHERO FIN FUNCION HACER HASH GE IDENTIFICADOR INDIRECCION LANZA LE MIENTRAS 
%token MOD_ASIG MULT_ASIG NADA NEQ OR OTRA OR_ASIG PARA POT_ASIG PRINCIPIO PROGRAMA POTENCIA REAL REF RESTA_ASIG RUTA 
%token SALTAR SI SINO SUMA_ASIG TAMANO TIPOS UNION VARIABLES XOR_ASIG

%%

/************/
/* programa */
/************/

programa ::= inicio_programa bloque_programa
inicio_programa ::= ’programa’ IDENTIFICADOR ’;’ [ ’cabecera’ ( RUTA )+ ’;’ ]*
bloque_programa ::= [ declaraciones_tipos ]?
                    [ declaraciones_constantes ]?
                    [ declaraciones_variables ]?
                    [ declaracion_funcion ]*
                    bloque_instrucciones


/************************/
/* declaracion de tipos */
/************************/

declaraciones_tipos ::= ’tipos’ [ declaracion_tipo ]+ ’fin’
declaracion_tipo ::= IDENTIFICADOR ’es’ especificacion_tipo ’;’
especificacion_tipo ::= [ ’ref’ ]* tipo_basico
tipo_basico ::= IDENTIFICADOR
              | tipo_escalar
              | tipo_enumerado
              | tipo_estructurado
tipo_escalar ::= ENTERO | REAL | CARACTER | CADENA | FICHERO | EXCEPCION
tipo_enumerado ::= ’array’ ’de’ especificacion_tipo
                | ’hash’ ’de’ especificacion_tipo
                | ’conjunto’ ’de’ especificacion_tipo
tipo_estructurado ::= ’estructura’ ’principio’ [ linea_campo ]+ ’fin’
                    | ’union’ ’principio’ [ linea_campo ]+ ’fin’
linea_campo ::= ( IDENTIFICADOR )+ ’es’ especificacion_tipo ’;’

/*****************************/
/* declaracion de constantes */
/*****************************/

declaraciones_constantes ::= ’constantes’ [ declaracion_constante ]+ ’fin’
declaracion_constante ::= IDENTIFICADOR ’es’ tipo_basico ’=’ constante ’;’
constante ::= CTC_ENTERA
            | CTC_REAL
            | CTC_CARACTER
            | CTC_CADENA
            | constante_enumerada
            | constante_estructurada
constante_enumerada ::= ’(’ ( constante )* ’)’
                      | ’(’ ( elemento_hash )* ’)’
elemento_hash::= CTC_CADENA ’->’ constante
constante_estructurada ::= ’{’ (campo_constante )+ ’}’
campo_constante ::= IDENTIFICADOR ’=’ constante

/****************************/
/* declaracion de variables */
/****************************/

declaraciones_variables ::= ’variables’ [ declaracion_variables ]+ ’fin’
declaracion_variables ::= ( IDENTIFICADOR )+ ’:’ especificacion_tipo [ ’=’ ( expresion )+ ]? ’;’

/****************************/
/* declaracion de funciones */
/****************************/

declaracion_funcion ::= ’funcion’ IDENTIFICADOR [ lista_parametros ]? ’->’ tipo_salida 
                      cuerpo_funcion
lista_parametros ::= ’(’ [ parametros ’;’ ]* parametros ’)’
parametros ::= ( IDENTIFICADOR )+ ’:’ especificacion_tipo [ ’=’ ( expresion_constante )+ ]?
tipo_salida ::= especificacion_tipo | ’nada’
cuerpo_funcion ::=  [ declaraciones_constantes ]?
                    [ declaraciones_variables ]?
                    [ declaracion_funcion ]*
                    bloque_instrucciones
bloque_instrucciones ::= ’principio’ [ instruccion ]+ ’fin’

/*****************/
/* instrucciones */
/*****************/

instruccion ::= instruccion_expresion
              | instruccion_bifurcacion
              | instruccion_bucle
              | instruccion_salto
              | instruccion_destino_salto
              | instruccion_devolver
              | instruccion_vacia
              | instruccion_lanzamiento_excepcion
              | instruccion_captura_excepcion
instruccion_expresion ::= expresion_funcional ’;’
                        | asignacion ’;’
asignacion ::= expresion_indexada operador_asignacion expresion
operador_asignacion ::= ’=’ | ’=+’ | ’=-’ | ’=*’ | ’=/’ | ’=%’ | ’=**’ | ’=<-’ | ’=->’ | ’=&’ | ’=@’ | ’=|’
instruccion_bifurcacion ::= ’si’ ’(’ expresion ’)’ accion [ otros_casos ]* [ ’sino’ accion ]?
’fin’
otros_casos ::= ’si’ ’encambio’ ’(’ expresion ’)’ accion
accion ::= instruccion | bloque_instrucciones
instruccion_bucle ::= ’mientras’ ’(’ expresion ’)’ accion
                    | ’hacer’ accion ’mientras’ ’( expresion ’)’ ’;’
                    | ’para’ ’(’ ( asignacion )+ ’;’ expresion ’;’ ( asignacion )+ ’)’ accion
                    | ’para’ ’cada’ IDENTIFICADOR ’(’ expresion ’)’ accion
instruccion_salto ::= ’saltar’ IDENTIFICADOR ’;’ | ’continuar’ ’;’ | ’escape’ ’;’
instruccion_destino_salto ::= ’etiqueta’ IDENTIFICADOR ’;’
instruccion_devolver ::= ’devolver’ [ expresion ]? ’;’
instruccion_vacia ::= ’;’
instruccion_lanzamiento_excepcion ::= ’lanza’ ’excepcion’ IDENTIFICADOR ’;’
instruccion_captura_excepcion ::= ’ejecuta’ bloque_instrucciones clausulas
clausulas ::= clausulas_excepcion [ clausula_defecto ]?
            | clausula_defecto
clausulas_excepcion ::= [ clausula_excepcion_especifica ]* clausula_excepcion_general
clausula_excepcion_especifica ::= ’excepcion’ IDENTIFICADOR bloque_instrucciones
clausula_excepcion_general ::= ’otra’ ’excepcion’ bloque_instrucciones
clausula_defecto ::= ’defecto’ bloque_instrucciones

/***************/
/* expresiones */
/***************/

expresion_constante ::= CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER
expresion_indexada ::= expresion_basica
                    | expresion_indexada ’.’ expresion_basica
                    | expresion_indexada ’^.’ expresion_basica
                    | expresion_indexada [ ’^.’ ]? indice
expresion_basica ::= IDENTIFICADOR
                  | ’(’ expresion ’)’
                  | ’^’ expresion_basica
                  | ’\’ expresion_basica
indice ::= ’[’ expresion ’]’ | ’{’ expresion ’}’
expresion_funcional ::= IDENTIFICADOR ’(’ ( expresion )* ’)’

expresion ::= expresion_logica [ ’si’ expresion ’sino’ expresion ]?
    
%%

int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./mini NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
