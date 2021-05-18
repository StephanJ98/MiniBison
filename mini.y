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

programa
    : definicion_programa                                 { printf ("EXITO: programa -> def_prog\n"); }
    ;

definicion_programa
    : PROGRAMA nombre ';' bloque_programa                 { printf ("  def_prog -> PROG nombre bloq_prog\n"); }
    |error ';' {yyerrok;}
    ;

nombres
	:nombre	{ printf ("  nombres -> nombre\n"); }
	|nombres ',' nombre { printf ("  nombres -> nombres ',' nombre\n"); }
	;
    
nombre
    :IDENTIFICADOR                                       { printf ("  nombre -> IDENTIFICADOR\n"); }
    ;

bloque_programa
    : declaracion_tipos
      declaracion_constantes
      declaracion_variables
      bloque_instrucciones            { printf ("  bloq_prog -> declr_cargas declr_tipos declr_cons declr_vars blq_intrs\n"); } 
    ;

/************************/
/* declaracion de tipos */
/************************/

declaracion_tipos
	:	{ printf ("  declaracion_tipos -> \n"); }
	|TIPOS declaraciones_tipos	{ printf ("  declaracion_tipos -> TIPOS declaraciones_tipos\n"); }
	;

declaraciones_tipos
	:declaracion_tipo	{ printf ("  declaraciones_tipos -> declaracion_tipo\n"); }
	|declaraciones_tipos declaracion_tipo	{ printf ("  declaraciones_tipos -> declaraciones_tipos declaracion_tipo\n"); }
	
	;

declaracion_tipo
	:nombre '=' tipo_no_estructurado_o_nombre_tipo ';'	{ printf ("  declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'\n"); }
	|error ';' {yyerrok;}
	;
	
tipo_escalar
	:ENTERO	{ printf ("  tipo_escalar -> ENTERO \n"); }
	|REAL	{ printf ("  tipo_escalar -> REAL \n"); }
	|CARACTER	{ printf ("  tipo_escalar -> CARACTER \n"); }
	|CADENA	{ printf ("  tipo_escalar -> CADENA \n"); }
	|error ';' {yyerrok;}
	;

tipo_fichero
	:FICHERO	{ printf ("  tipo_fichero -> FICHERO \n"); }
	;

tipo_enumerado
	:'(' expresiones_constantes ')'	{ printf ("  tipo_enumerado -> '(' expresiones_constantes ')' \n"); }
	;	

tipo_lista
	:ARRAY DE tipo_no_estructurado_o_nombre_tipo	{ printf ("  tipo_lista -> ARRAY DE tipo_no_estructurado_o_nombre_tipo \n"); }
	|ARRAY '[' rangos ']' DE tipo_no_estructurado_o_nombre_tipo	{ printf ("  tipo_lista -> ARRAY '[' rangos ']' DE tipo_no_estructurado_o_nombre_tipo \n"); }
	;

tipo_conjunto
	:CONJUNTO DE tipo_no_estructurado_o_nombre_tipo	{ printf ("  tipo_conjunto -> CONJUNTO DE tipo_no_estrucutado_o_nombre_tipo \n"); }
	;
	
tipo_no_estructurado_o_nombre_tipo
	:nombre	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> nombre \n"); }
	|tipo_escalar	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_escalar \n"); }
	|tipo_fichero	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_fichero \n"); }
	|tipo_enumerado	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado \n"); }
	|tipo_lista	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista \n"); }
	|tipo_conjunto	{ printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto \n"); }
	;

expresiones_constantes
	:expresion_constante	{ printf ("  expresiones_constantes -> expresion_constante \n"); }
	|expresiones_constantes ',' expresion_constante	{ printf ("  expresiones_constantes -> expresiones_constantes ',' expresion_constante \n"); }
	|error ';' {yyerrok;}
	;

rangos
	:rango	{ printf ("  rangos -> rango \n"); }
	|rangos ',' rango	{ printf ("  rangos -> rangos ',' rango \n"); }
	|error ';' {yyerrok;}
	;
rango
	:expresion ':' expresion	{ printf ("  rango -> expresion ':' expresion \n"); }
	|expresion ':' expresion ':' expresion	{ printf ("  rango -> expresion ':' expresion ':' expresion \n"); }
	;

/*****************************/
/* declaracion de constantes */
/*****************************/

declaracion_constantes
	:	{ printf ("  declaracion_constantes -> \n"); }
	|CONSTANTES declaraciones_constantes	{ printf ("  declaracion_constantes -> CONSTANTES declaraciones_constantes\n"); }
	;
declaraciones_constantes
	:declaracion_constante	{ printf ("  declaraciones_constantes -> declaracion_constante\n"); }
	|declaraciones_constantes declaracion_constante	{ printf ("  declaraciones_constantes -> declaraciones_constantes declaracion_constante\n"); }
	
	;

declaracion_constante
	:nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'		{ printf ("  declaracion_constante -> nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'\n"); }
	|error ';' {yyerrok;}
	;

valor_constante
	:expresion	{ printf ("  valor_constante -> expresion\n"); }
	|'[' valores_constantes ']'	{ printf ("  valor_constante -> '[' valores_constantes ']'\n"); }
	;	

valores_constantes
	:valor_constante	{ printf ("  valores_constantes -> valor_constante\n"); }
	|valores_constantes ',' valor_constante	{ printf ("  valores_constantes -> valores_constantes ',' valor_constante\n"); }
	;

/****************************/
/* declaracion de variables */
/****************************/

declaracion_variables
	:	{ printf ("  declaracion_variables -> \n"); }
	|VARIABLES declaraciones_variables	{ printf ("  declaracion_variables -> VARIABLES declaraciones_variables\n"); }
	;
declaraciones_variables
	:declaracion_variable	{ printf ("  declaracion_variable -> declaracion_variable\n"); }
	|declaraciones_variables declaracion_variable	{ printf ("  declaracion_variable -> declaraciones_variables declaracion_variable\n"); }
	|error ';' {yyerrok;}
	;
declaracion_variable
	:nombres ':' tipo_no_estructurado_o_nombre_tipo ';'	{ printf ("  declaracion_variable -> nombres ':' tipo_no_estructurado_o_nombre_tipo ';'\n"); }
	|nombres ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'	{ printf ("  declaracion_variable -> nombres ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'\n"); }
	;

/****************************/
/* declaracion de funciones */
/****************************/



/*****************/
/* instrucciones */
/*****************/

bloque_instrucciones
	:'{' bloques_instrucciones '}'	 { printf ("  bloque_instrucciones -> '{' bloques_instrucciones '}'\n"); }
	;

bloques_instrucciones
	:instruccion	{ printf ("  bloque_instrucciones -> instruccion\n"); }
	|bloques_instrucciones instruccion	{ printf ("  bloque_instrucciones -> bloques_instrucciones instruccion\n"); }
	;
	

instruccion
	:';'	{ printf ("  instruccion -> ';'\n"); }
	|instruccion_asignacion  { printf ("  instruccion -> instruccion_asignacion\n"); }
	|instruccion_salir	{ printf ("  instruccion -> instruccion_salir\n"); }
	|instruccion_devolver	{ printf ("  instruccion -> instruccion_devolver\n"); }
	|instruccion_si		{ printf ("  instruccion -> instruccion_si\n"); }
	|instruccion_bucle	{ printf ("  instruccion -> instruccion_bucle\n"); }
	|instruccion_lanzar	{ printf ("  instruccion -> instruccion_lanzar\n"); }
	|error ';' {yyerrok;}
	;

instruccion_asignacion
	:objeto '=' expresion ';'	{ printf ("  instruccion_asignacion -> objeto '=' expresion ';'\n"); }
	;

instruccion_salir
	:SALTAR ';'	{ printf ("  instruccion_salir -> SALTAR ';'\n"); }
	|SALTAR SI expresion ';'	{ printf ("  instruccion_salir -> SALTAR SI expresion ';'\n"); }
	;

instruccion_devolver
	: DEVOLVER ';'	{ printf ("  instruccion_salir -> DEVOLVER ';'\n"); }
	| DEVOLVER expresion ';'	{ printf ("  instruccion_salir -> DEVOLVER expresion ';'\n"); }
	;

instruccion_si
	: SI expresion SINO bloque_instrucciones	{ printf ("  instruccion_si -> SI expresion SINO bloque_instrucciones \n"); }	
	| SI expresion SINO bloque_instrucciones SINO bloque_instrucciones	{ printf ("  instruccion_si -> SI expresion SINO bloque_instrucciones SINO bloque_instrucciones \n"); }
	;

instruccion_bucle
	: clausula_iteracion bloque_instrucciones	{ printf ("  instruccion_bucle -> clausula_iteracion bloque_instrucciones \n"); }
	;

clausula_iteracion
	:PARA nombre	{ printf ("  clausula_iteracion -> PARA nombre\n"); }
	|MIENTRAS CONJUNTO nombre { printf ("  clausula_iteracion -> MIENTRAS CONJUNTO nombre\n"); }
	|MIENTRAS expresion	{ printf ("  clausula_iteracion -> MIENTRAS expresion\n"); }
	|MIENTRAS FIN expresion	{ printf ("  clausula_iteracion -> MIENTRAS FIN expresion\n"); }
	|error ';' {yyerrok;}
	;

instruccion_lanzar
	:EJECUTA nombre ';'	{ printf ("  instruccion_lanzar -> EJECUTA nombre ';'\n"); }
	;

/***************/
/* expresiones */
/***************/

expres
    :expresion	{ printf ("  expres -> expresion\n"); }
    |expres ',' expresion	{ printf ("  expres -> expres expresion\n"); }
    ;


expresion
    :expresion1 { printf("  expresion -> expresion1\n"); }
    ;

expresion1
    :expresion1 OR expresion2   { printf("  expresion1 -> expresion1 OR expresion2\n"); }
    |expresion2 { printf("  expresion1 -> expresion2\n"); }
    ;
    
expresion2
    :expresion2 AND expresionNegacion  { printf("  expresion2 -> expresion2 AND expresion3\n"); }
    |expresionNegacion { printf("  expresion2 -> expresion3\n"); }
    ;

expresionNegacion
	:'!' expresion3 { printf("  expresionNegacion -> '!' expresion3 \n"); }
	|expresion3	{ printf("  expresionNegacion -> expresion3 \n"); }
	;

expresion3
    :expresion3 LE expresion4  { printf("  expresion3 -> expresion3 '=>' expresion4\n"); }
    |expresion3 GE expresion4  { printf("  expresion3 -> expresion3 '=<' expresion4\n"); }
    |expresion3 '<' expresion4  { printf("  expresion3 -> expresion3 '<' expresion4\n"); }
    |expresion3 '>' expresion4  { printf("  expresion3 -> expresion3 '>' expresion4\n"); }
    |expresion3 EQ expresion4  { printf("  expresion3 -> expresion3 '==' expresion4\n"); }
    |expresion3 NEQ expresion4  { printf("  expresion3 -> expresion3 '!=' expresion4\n"); }
    |expresion4 { printf("  expresion3 -> expresion4 \n"); }
    ;

expresion4
    :expresion4 '^' expresion5  { printf("  expresion4 -> expresion4 '^' expresion5\n"); }
    |expresion5 { printf("  expresion4 -> expresion5\n"); }
    ;

expresion5
    :expresion5 '@' expresion6  { printf("  expresion5 -> expresion5 '@' expresion6\n"); }
    |expresion6 { printf("  expresion5 -> expresion6\n"); }

    ;

expresion6
    :expresion6 '&' expresion7  { printf("  expresion6 -> expresion6 '&' expresion7\n"); }
    |expresion7 { printf("  expresion6 -> expresion7\n"); }
    ;

expresion7
    :expresion7 FLECHA_IZDA expresion8    { printf("  expresion7 -> expresion7 '<-' expresion8\n"); }
    |expresion7 FLECHA_DCHA expresion8    { printf("  expresion7 -> expresion7 '->' expresion8\n"); }
    |expresion8 { printf("  expresion7 -> expresion8\n"); }
    ;   


expresion8
    :expresion8 '+' expresion9  { printf("  expresion8 -> expresion8 '+' expresion9\n"); }
    |expresion8 '-' expresion9  { printf("  expresion8 -> expresion8 '-' expresion9\n"); }
    |expresion9 { printf("  expresion8 -> expresion9\n"); }
    ;
    
    
expresion9
    :expresion9 '*' expresion10 { printf("  expresion9 -> expresion9 '*' expresion10\n"); }
    |expresion9 '/' expresion10 { printf("  expresion9 -> expresion9 '/' expresion10\n"); }
    |expresion9 '%' expresion10 { printf("  expresion9 -> expresion9 'modulo' expresion10\n"); }
    |expresion10 { printf("  expresion9 -> expresion10 \n"); }
    ;
    
expresion10
    : expresion11 POTENCIA expresion10 { printf("  expresion10 -> expresion11 '**' expresion10\n"); }
    | expresion11 { printf("  expresion10 -> expresion11 \n"); }
    ;

expresion11
    :"-" expresion_primaria { printf("  expresion11 -> '-' expresion_primaria \n"); }
    |expresion_primaria     { printf("  expresion11 -> expresion_primaria \n"); }
    ;

expresion_primaria 
    :expresion_constante	{ printf ("  expresion_primaria -> expresion_constante expresion\n"); }
    |objeto	{ printf ("  expresion_primaria -> objeto\n"); }
    |'(' expresion ')'	{ printf ("  expresion_primaria -> '(' expresion ')'\n"); }
    |error ';' {yyerrok;}
    ;
objeto 
    :nombre	{ printf ("  objeto -> nombre\n"); }
    |objeto '[' expres ']'	{ printf ("  objeto -> objeto '[' expres ']'\n"); }
    |objeto '.' IDENTIFICADOR	{ printf ("  objeto -> objeto '.' IDENTIFICADOR\n"); }	
    ;

expresion_constante 
    :CTC_ENTERA	{ printf ("  expresion_constante -> CTC_ENTERA\n"); }
    |CTC_REAL	{ printf ("  expresion_constante -> CTC_REAL\n"); }
    |CTC_CADENA	{ printf ("  expresion_constante -> CTC_CADENA\n"); }
    |CTC_CARACTER	{ printf ("  expresion_constante -> CTC_CARACTER\n"); }
    ;

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
