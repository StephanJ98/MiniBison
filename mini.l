%{
int lineno = 1;
#include <stdio.h>
#include "tokens.h"

#define DELIMITADOR 325
#define COM_S 326
#define COM_MI 327
#define COM_MF 328
#define FUNC 329
#define OPERADOR 330

#define UNKNOWN 72
#define UNKNOWN_CHAR 73

%}

alpha [A-Za-z]
digit [0-9]
und [_]
space [ ]
line [\n]
at [@]

%%
{space}* {}
\'(.)\' printf("\nlinea %d, constante caracter: %s", lineno, yytext); return (CTC_CARACTER);
\'\#.\' printf("\nlinea %d, constante caracter: %s", lineno, yytext); return (CTC_CARACTER);
\'([a-zA-Z0-9\#]){2,}\' printf("\nlinea %d, constante caracter: %s", lineno, yytext); return (CTC_CARACTER);
\'\' printf("\nlinea %d, constante caracter: %s", lineno, yytext); return (CTC_CARACTER);
\#$ printf("\nlinea %d, constante caracter: %s", lineno, yytext); return (CTC_CARACTER);

{line} {lineno++;};

array printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ARRAY);
cabecera printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CABECERA);
cada printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CADA);
cadena printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CADENA);
caracter printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CARACTER);
conjunto printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CONJUNTO);
constantes printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CONSTANTES);
continuar printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (CONTINUAR);
de printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (DE);
defecto printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (DEFECTO);
devolver printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (DEVOLVER);
ejecuta printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (EJECUTA);
encambio printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ENCAMBIO);
entero printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ENTERO);
es printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ES);
escape printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ESCAPE);
estructura printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ESTRUCTURA);
etiueta printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (ETIQUETA);
excepcion printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (EXCEPCION);
fichero printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (FICHERO);
fin printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (FIN);
funcion printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (FUNCION);
hacer printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (HACER);
hash printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (HASH);
identificador printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (IDENTIFICADOR);
lanza printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (LANZA);
mientras printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (MIENTRAS);
nada printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (NADA);
otra printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (OTRA);
para printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (PARA);
principio printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (PRINCIPIO);
programa printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (PROGRAMA);
real printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (REAL);
ref printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (REF);
ruta printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (RUTA);
saltar printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (SALTAR);
si printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (SI);
sino printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (SINO);
tamano printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (TAMANO);
tipos printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (TIPOS);
union printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (UNION);
variables printf("\nlinea %d, palabra reservada: %s", lineno, yytext); return (VARIABLES);

{alpha}({alpha}|{digit}|{und})* printf("\nlinea %d, identificador: %s", lineno, yytext); return (IDENTIFICADOR);

"\{" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\}" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\[" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\]" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\(" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\)" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\:" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\;" printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);
"\," printf("\nlinea %d, delimitador: %s", lineno, yytext); return (DELIMITADOR);

"##" printf("\nlinea %d, comentario: %s", lineno, yytext); return (COM_S);
"#-" printf("\nlinea %d, comentario: %s", lineno, yytext); return (COM_MI);
"-#" printf("\nlinea %d, comentario: %s", lineno, yytext); return (COM_MF);

"+" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"-" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"*" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"/" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"%" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"=" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"@" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"<" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
">" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"\\" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"~" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);
"!" printf("\nlinea %d, operador: %s", lineno, yytext); return (OPERADOR);

"**" printf("\nlinea %d, operador: %s", lineno, yytext); return (POTENCIA);
"=+" printf("\nlinea %d, operador: %s", lineno, yytext); return (SUMA_ASIG);
"=-" printf("\nlinea %d, operador: %s", lineno, yytext); return (RESTA_ASIG);
"=*" printf("\nlinea %d, operador: %s", lineno, yytext); return (MULT_ASIG);
"=/" printf("\nlinea %d, operador: %s", lineno, yytext); return (DIV_ASIG);
"=%" printf("\nlinea %d, operador: %s", lineno, yytext); return (MOD_ASIG);
"=<-" printf("\nlinea %d, operador: %s", lineno, yytext); return (FI_ASIG);
"=->" printf("\nlinea %d, operador: %s", lineno, yytext); return (FD_ASIG);
"=&" printf("\nlinea %d, operador: %s", lineno, yytext); return (AND_ASIG);
"=@" printf("\nlinea %d, operador: %s", lineno, yytext); return (XOR_ASIG);
"=|" printf("\nlinea %d, operador: %s", lineno, yytext); return (OR_ASIG);
"=**" printf("\nlinea %d, operador: %s", lineno, yytext); return (POT_ASIG);
"=>" printf("\nlinea %d, operador: %s", lineno, yytext); return (GE);
"=<" printf("\nlinea %d, operador: %s", lineno, yytext); return (LE);
"==" printf("\nlinea %d, operador: %s", lineno, yytext); return (EQ);
"!=" printf("\nlinea %d, operador: %s", lineno, yytext); return (NEQ);
"&&" printf("\nlinea %d, operador: %s", lineno, yytext); return (AND);
"||" printf("\nlinea %d, operador: %s", lineno, yytext); return (OR);
"&" printf("\nlinea %d, operador: %s", lineno, yytext); return (AND);
"|" printf("\nlinea %d, operador: %s", lineno, yytext); return (OR);
"<-" printf("\nlinea %d, operador: %s", lineno, yytext); return (FLECHA_IZDA);
"->" printf("\nlinea %d, operador: %s", lineno, yytext); return (FLECHA_DCHA);
"^." printf("\nlinea %d, operador: %s", lineno, yytext); return (INDIRECCION);

{digit}+ printf("\nlinea %d, constante entera: %s", lineno, yytext); return (CTC_ENTERA);
\#({digit}+) printf("\nlinea %d, constante entera: %s", lineno, yytext); return (CTC_ENTERA);
\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante entera: %s", lineno, yytext); return (CTC_ENTERA);
\#([hH])({digit}+) printf("\nlinea %d, constante entera: %s", lineno, yytext); return (CTC_ENTERA);
\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante entera: %s", lineno, yytext); return (CTC_ENTERA);

\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

({digit}+)\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
({digit}+)\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
({digit}+)\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
({digit}+)\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
({digit}+)\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

\#({digit}+)\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#({digit}+)\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#({digit}+)\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#({digit}+)\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#({digit}+)\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

\#([abcdefABCDEF])+({digit}+)\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([abcdefABCDEF])+({digit}+)\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([abcdefABCDEF])+({digit}+)\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([abcdefABCDEF])+({digit}+)\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([abcdefABCDEF])+({digit}+)\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

\#([hH])({digit}+)\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])({digit}+)\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])({digit}+)\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])({digit}+)\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])({digit}+)\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

\#([hH])([abcdefABCDEF]+)\.({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])([abcdefABCDEF]+)\.\#({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])([abcdefABCDEF]+)\.\#([abcdefABCDEF])+({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])([abcdefABCDEF]+)\.\#([hH])({digit}+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);
\#([hH])([abcdefABCDEF]+)\.\#([hH])([abcdefABCDEF]+) printf("\nlinea %d, constante real: %s", lineno, yytext); return (CTC_REAL);

\|(.)+\| printf("\nlinea %d, ruta: %s", lineno, yytext); return (RUTA);
{alpha}({alpha}|{digit}|{und})*\[{digit}*\] printf("\nlinea %d, array: %s", lineno, yytext); return (ARRAY);
{alpha}({alpha}|{digit}|{und})*\(({alpha}|{digit}|{und}|{space})*\) printf("\nlinea %d, funcion: %s", lineno, yytext); return (FUNCION);
([a-zA-z0-9])+\' printf("\nlinea %d, error: %s", lineno, yytext); return (UNKNOWN);
\'([a-zA-z0-9])+ printf("\nlinea %d, error: %s", lineno, yytext); return (UNKNOWN);
([áéíóúàèìòùAâêîôûäëïöüç]) printf("\nlinea %d, caracter invalido: %s", lineno, yytext); return (UNKNOWN_CHAR);
%%