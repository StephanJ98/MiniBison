/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini.y" /* yacc.c:337  */

  #include <stdlib.h>
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();
  extern int yyclearin();
  #define YYDEBUG 1


#line 80 "mini.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini.tab.h".  */
#ifndef YY_YY_MINI_TAB_H_INCLUDED
# define YY_YY_MINI_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    AND_ASIG = 259,
    ARRAY = 260,
    CABECERA = 261,
    CADA = 262,
    CADENA = 263,
    CARACTER = 264,
    CONJUNTO = 265,
    CONSTANTES = 266,
    CONTINUAR = 267,
    CTC_CADENA = 268,
    CTC_CARACTER = 269,
    CTC_ENTERA = 270,
    CTC_REAL = 271,
    DE = 272,
    DEFECTO = 273,
    DIV_ASIG = 274,
    DEVOLVER = 275,
    EJECUTA = 276,
    ENCAMBIO = 277,
    ENTERO = 278,
    EQ = 279,
    ES = 280,
    ESCAPE = 281,
    ESTRUCTURA = 282,
    ETIQUETA = 283,
    EXCEPCION = 284,
    FD_ASIG = 285,
    FI_ASIG = 286,
    FLECHA_DCHA = 287,
    FLECHA_IZDA = 288,
    FICHERO = 289,
    FIN = 290,
    FUNCION = 291,
    HACER = 292,
    HASH = 293,
    GE = 294,
    IDENTIFICADOR = 295,
    INDIRECCION = 296,
    LANZA = 297,
    LE = 298,
    MIENTRAS = 299,
    MOD_ASIG = 300,
    MULT_ASIG = 301,
    NADA = 302,
    NEQ = 303,
    OR = 304,
    OTRA = 305,
    OR_ASIG = 306,
    PARA = 307,
    POT_ASIG = 308,
    PRINCIPIO = 309,
    PROGRAMA = 310,
    POTENCIA = 311,
    REAL = 312,
    REF = 313,
    RESTA_ASIG = 314,
    RUTA = 315,
    SALTAR = 316,
    SI = 317,
    SINO = 318,
    SUMA_ASIG = 319,
    TAMANO = 320,
    TIPOS = 321,
    UNION = 322,
    VARIABLES = 323,
    XOR_ASIG = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

#define YYUNDEFTOK  2
#define YYMAXUTOK   325

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    90,    85,     2,
      73,    74,    88,    86,    71,    87,    92,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    70,
      81,    72,    82,     2,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,    79,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    24,    24,    28,    29,    33,    34,    38,    42,    53,
      54,    58,    59,    64,    65,    69,    70,    71,    72,    73,
      77,    81,    85,    86,    90,    94,    95,    96,    97,    98,
      99,   103,   104,   105,   109,   110,   111,   114,   115,   123,
     124,   127,   128,   133,   134,   138,   139,   143,   144,   152,
     153,   156,   157,   158,   161,   162,   176,   180,   181,   186,
     187,   188,   189,   190,   191,   192,   193,   197,   201,   202,
     206,   207,   211,   212,   216,   220,   221,   222,   223,   224,
     228,   236,   237,   242,   246,   247,   251,   252,   256,   257,
     261,   262,   263,   264,   265,   266,   267,   271,   272,   276,
     277,   282,   283,   287,   288,   289,   294,   295,   296,   301,
     302,   303,   304,   308,   309,   313,   314,   318,   319,   320,
     321,   324,   325,   326,   330,   331,   332,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "AND_ASIG", "ARRAY", "CABECERA",
  "CADA", "CADENA", "CARACTER", "CONJUNTO", "CONSTANTES", "CONTINUAR",
  "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "DE", "DEFECTO",
  "DIV_ASIG", "DEVOLVER", "EJECUTA", "ENCAMBIO", "ENTERO", "EQ", "ES",
  "ESCAPE", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG", "FI_ASIG",
  "FLECHA_DCHA", "FLECHA_IZDA", "FICHERO", "FIN", "FUNCION", "HACER",
  "HASH", "GE", "IDENTIFICADOR", "INDIRECCION", "LANZA", "LE", "MIENTRAS",
  "MOD_ASIG", "MULT_ASIG", "NADA", "NEQ", "OR", "OTRA", "OR_ASIG", "PARA",
  "POT_ASIG", "PRINCIPIO", "PROGRAMA", "POTENCIA", "REAL", "REF",
  "RESTA_ASIG", "RUTA", "SALTAR", "SI", "SINO", "SUMA_ASIG", "TAMANO",
  "TIPOS", "UNION", "VARIABLES", "XOR_ASIG", "';'", "','", "'='", "'('",
  "')'", "'['", "']'", "':'", "'{'", "'}'", "'!'", "'<'", "'>'", "'^'",
  "'@'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "\"-\"", "'.'",
  "$accept", "programa", "definicion_programa", "nombres", "nombre",
  "bloque_programa", "declaracion_tipos", "declaraciones_tipos",
  "declaracion_tipo", "tipo_escalar", "tipo_fichero", "tipo_enumerado",
  "tipo_lista", "tipo_conjunto", "tipo_no_estructurado_o_nombre_tipo",
  "expresiones_constantes", "rangos", "rango", "declaracion_constantes",
  "declaraciones_constantes", "declaracion_constante", "valor_constante",
  "valores_constantes", "declaracion_variables", "declaraciones_variables",
  "declaracion_variable", "bloque_instrucciones", "bloques_instrucciones",
  "instruccion", "instruccion_asignacion", "instruccion_salir",
  "instruccion_devolver", "instruccion_si", "instruccion_bucle",
  "clausula_iteracion", "instruccion_lanzar", "expres", "expresion",
  "expresion1", "expresion2", "expresionNegacion", "expresion3",
  "expresion4", "expresion5", "expresion6", "expresion7", "expresion8",
  "expresion9", "expresion10", "expresion11", "expresion_primaria",
  "objeto", "expresion_constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      59,    44,    61,    40,    41,    91,    93,    58,   123,   125,
      33,    60,    62,    94,    64,    38,    43,    45,    42,    47,
      37,   325,    46
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -80

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -61,    25,    51,  -160,  -160,  -160,    75,  -160,    77,
       6,  -160,    84,    82,    94,    97,  -160,    10,    86,  -160,
     182,  -160,    87,    99,    71,  -160,    18,   100,   109,   -15,
    -160,  -160,   163,  -160,  -160,  -160,   111,  -160,  -160,  -160,
    -160,  -160,  -160,   112,  -160,   182,  -160,   116,    29,  -160,
      25,  -160,   206,  -160,  -160,   182,    67,   182,   124,  -160,
    -160,  -160,  -160,     5,  -160,  -160,   113,  -160,    25,   182,
    -160,   126,    24,    25,    19,    25,   -18,   104,  -160,  -160,
     149,  -160,  -160,  -160,  -160,  -160,  -160,   100,  -160,   -30,
    -160,   127,   104,   115,   158,    38,  -160,   122,   151,   200,
    -160,   -12,   119,   120,   123,    89,    48,    13,  -160,   153,
    -160,   -45,  -160,  -160,  -160,   199,  -160,    73,  -160,    -9,
     139,   148,  -160,   150,   154,    25,   104,  -160,  -160,   104,
    -160,   160,  -160,  -160,  -160,   104,   104,   181,    62,   155,
     -12,  -160,   104,   208,   104,   104,   104,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,  -160,    73,   168,  -160,  -160,    73,
    -160,  -160,  -160,  -160,  -160,   170,   100,   175,    65,  -160,
    -160,  -160,  -160,   182,   171,   200,  -160,   119,   119,   119,
     119,   119,   119,   120,   123,    89,    48,    48,    13,    13,
    -160,  -160,  -160,  -160,  -160,    80,  -160,   177,  -160,   167,
    -160,   104,  -160,  -160,   104,    73,  -160,  -160,   100,  -160,
    -160,  -160,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     7,     0,     1,     9,
       0,     3,    39,     0,     0,     0,    11,     0,    49,    14,
       0,    12,     0,     0,     0,    41,     0,     0,     0,     0,
      18,    17,     0,    15,    20,    16,     0,    25,    26,    27,
      28,    29,    30,     0,    44,     0,    42,     0,     0,     5,
      50,    51,     0,     8,    19,     0,     0,     0,     0,   126,
     127,   124,   125,     0,    31,    13,     0,    53,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,    59,   121,
       0,    57,    60,    61,    62,    63,    64,     0,    65,     0,
      22,     0,     0,     0,     0,     0,    34,     0,    83,    85,
      87,    89,    96,    98,   100,   102,   105,   108,   112,   114,
     116,   118,   117,    24,    33,     0,    21,     0,     6,     0,
      66,     0,    70,     0,     0,     0,     0,    77,    75,     0,
      68,     0,    56,    58,    74,     0,     0,     0,   120,     0,
      88,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    45,    54,     0,
     120,    71,    80,    76,    78,     0,     0,     0,     0,    81,
     123,   119,    35,     0,    37,    84,    86,    94,    91,    90,
      95,    92,    93,    97,    99,   101,   104,   103,   106,   107,
     109,   110,   111,   113,    47,     0,    43,     0,    69,    72,
      67,     0,   122,    23,     0,     0,    46,    55,     0,    82,
      38,    48,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,    -2,  -160,  -160,  -160,   234,  -160,
    -160,  -160,  -160,  -160,   -41,  -160,  -160,   110,  -160,  -160,
     227,  -159,  -160,  -160,  -160,   203,   -86,  -160,   174,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,   -51,  -160,   114,
     117,   164,    85,   103,   106,   107,    11,     3,    81,  -160,
     172,    -3,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    48,    79,    11,    12,    15,    16,    38,
      39,    40,    41,    42,    43,    63,    95,    96,    18,    24,
      25,   166,   205,    27,    50,    51,    53,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   178,   167,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   134,    55,     1,    66,    97,   204,    13,    14,     5,
     207,    22,   147,    14,    90,    23,   113,    64,    37,    47,
     121,   123,    23,   127,    49,   121,   131,   148,   119,   125,
     136,   149,    59,    60,    61,    62,   150,    59,    60,    61,
      62,   139,   135,    37,   129,   136,     6,   137,    49,    89,
       6,     8,   130,    37,   126,    37,   221,     2,     6,     6,
      56,   168,   137,   169,     6,     6,   118,    37,    91,   151,
     152,   124,    22,   128,   121,   174,   115,    89,   175,   116,
      59,    60,    61,    62,   177,   179,    59,    60,    61,    62,
     209,    97,    92,   184,   122,    17,   164,    92,    13,    93,
      68,   160,   161,   162,    93,   121,    69,     6,   -10,   142,
      94,     6,    58,     6,   143,    94,   121,    59,    60,    61,
      62,   156,   157,   173,    59,    60,    61,    62,    59,    60,
      61,    62,   222,   -36,   158,   159,   211,     6,   -36,   -40,
      92,   212,   213,    10,     6,     9,    92,    93,   165,   -40,
      71,   215,    19,    93,    26,     6,   216,    44,    94,   121,
     219,   198,   199,   220,    94,   -10,    20,   196,   197,    72,
      73,    59,    60,    61,    62,   -10,    45,    92,    52,    54,
      57,    37,    65,    28,    93,   117,    67,    29,    92,     6,
      30,    31,    32,    74,   114,    94,   120,   138,     6,   144,
     145,    75,   153,   146,   154,    33,    94,    71,   155,   163,
      76,    77,    59,    60,    61,    62,    34,   -79,   170,    78,
     171,   180,     6,   176,   172,   183,    72,    73,   132,   181,
     218,    92,   187,   188,   189,   190,   191,   192,   206,    35,
     208,   200,   201,   202,   203,   210,     6,   217,   214,    21,
      74,    46,   182,    70,   133,    36,   193,   140,    75,   185,
     194,     0,   195,   186,     0,     0,   141,    76,    77,     0,
       0,     0,     0,     0,     0,     0,    78
};

static const yytype_int16 yycheck[] =
{
       2,    87,    17,     1,    45,    56,   165,     1,    10,    70,
     169,     1,    24,    15,    55,    17,    57,    36,    20,     1,
       1,    72,    24,    74,    26,     1,    77,    39,    69,    10,
      75,    43,    13,    14,    15,    16,    48,    13,    14,    15,
      16,    92,    72,    45,    62,    75,    40,    92,    50,    52,
      40,     0,    70,    55,    35,    57,   215,    55,    40,    40,
      75,    70,    92,    72,    40,    40,    68,    69,     1,    81,
      82,    73,     1,    75,     1,   126,    71,    80,   129,    74,
      13,    14,    15,    16,   135,   136,    13,    14,    15,    16,
     176,   142,    73,   144,    70,    11,   115,    73,     1,    80,
      71,    88,    89,    90,    80,     1,    77,    40,    11,    71,
      91,    40,     1,    40,    76,    91,     1,    13,    14,    15,
      16,    32,    33,   125,    13,    14,    15,    16,    13,    14,
      15,    16,   218,    71,    86,    87,    71,    40,    76,    68,
      73,    76,   183,    66,    40,    70,    73,    80,    75,    78,
       1,    71,    70,    80,    68,    40,    76,    70,    91,     1,
     211,   158,   159,   214,    91,    68,    72,   156,   157,    20,
      21,    13,    14,    15,    16,    78,    77,    73,    78,    70,
      17,   183,    70,     1,    80,    72,    70,     5,    73,    40,
       8,     9,    10,    44,    70,    91,    70,    70,    40,    77,
      49,    52,    83,     3,    84,    23,    91,     1,    85,    56,
      61,    62,    13,    14,    15,    16,    34,    78,    70,    70,
      70,    40,    40,    63,    70,    17,    20,    21,    79,    74,
      63,    73,   147,   148,   149,   150,   151,   152,    70,    57,
      70,   160,   161,   162,   163,    70,    40,    70,    77,    15,
      44,    24,   142,    50,    80,    73,   153,    93,    52,   145,
     154,    -1,   155,   146,    -1,    -1,    94,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    55,    94,    95,    70,    40,    97,     0,    70,
      66,    98,    99,     1,    97,   100,   101,    11,   111,    70,
      72,   101,     1,    97,   112,   113,    68,   116,     1,     5,
       8,     9,    10,    23,    34,    57,    73,    97,   102,   103,
     104,   105,   106,   107,    70,    77,   113,     1,    96,    97,
     117,   118,    78,   119,    70,    17,    75,    17,     1,    13,
      14,    15,    16,   108,   145,    70,   107,    70,    71,    77,
     118,     1,    20,    21,    44,    52,    61,    62,    70,    97,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   144,
     107,     1,    73,    80,    91,   109,   110,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   107,    70,    71,    74,    72,    97,   107,
      70,     1,    70,   130,    97,    10,    35,   130,    97,    62,
      70,   130,    79,   121,   119,    72,    75,    92,    70,   130,
     134,   143,    71,    76,    77,    49,     3,    24,    39,    43,
      48,    81,    82,    83,    84,    85,    32,    33,    86,    87,
      88,    89,    90,    56,   145,    75,   114,   130,    70,    72,
      70,    70,    70,    97,   130,   130,    63,   130,   129,   130,
      40,    74,   110,    17,   130,   132,   133,   135,   135,   135,
     135,   135,   135,   136,   137,   138,   139,   139,   140,   140,
     141,   141,   141,   141,   114,   115,    70,   114,    70,   119,
      70,    71,    76,   107,    77,    71,    76,    70,    63,   130,
     130,   114,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    97,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     103,   104,   105,   105,   106,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   127,   127,   127,   127,
     128,   129,   129,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     1,     3,     1,     4,     0,
       2,     1,     2,     4,     2,     1,     1,     1,     1,     2,
       1,     3,     3,     6,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     3,     2,     3,     5,     0,
       2,     1,     2,     6,     2,     1,     3,     1,     3,     0,
       2,     1,     2,     2,     4,     6,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     4,
       2,     3,     4,     6,     2,     2,     3,     2,     3,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     1,     1,     1,     3,
       2,     1,     4,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 24 "mini.y" /* yacc.c:1652  */
    { printf ("EXITO: programa -> def_prog\n"); }
#line 1475 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 28 "mini.y" /* yacc.c:1652  */
    { printf ("  def_prog -> PROG nombre bloq_prog\n"); }
#line 1481 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 29 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1487 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 33 "mini.y" /* yacc.c:1652  */
    { printf ("  nombres -> nombre\n"); }
#line 1493 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 34 "mini.y" /* yacc.c:1652  */
    { printf ("  nombres -> nombres ',' nombre\n"); }
#line 1499 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 38 "mini.y" /* yacc.c:1652  */
    { printf ("  nombre -> IDENTIFICADOR\n"); }
#line 1505 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 45 "mini.y" /* yacc.c:1652  */
    { printf ("  bloq_prog -> declr_cargas declr_tipos declr_cons declr_vars blq_intrs\n"); }
#line 1511 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 53 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_tipos -> \n"); }
#line 1517 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 54 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_tipos -> TIPOS declaraciones_tipos\n"); }
#line 1523 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 58 "mini.y" /* yacc.c:1652  */
    { printf ("  declaraciones_tipos -> declaracion_tipo\n"); }
#line 1529 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 59 "mini.y" /* yacc.c:1652  */
    { printf ("  declaraciones_tipos -> declaraciones_tipos declaracion_tipo\n"); }
#line 1535 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 64 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'\n"); }
#line 1541 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 65 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1547 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 69 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_escalar -> ENTERO \n"); }
#line 1553 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 70 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_escalar -> REAL \n"); }
#line 1559 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 71 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_escalar -> CARACTER \n"); }
#line 1565 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 72 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_escalar -> CADENA \n"); }
#line 1571 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 73 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1577 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 77 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_fichero -> FICHERO \n"); }
#line 1583 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 81 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_enumerado -> '(' expresiones_constantes ')' \n"); }
#line 1589 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 85 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_lista -> ARRAY DE tipo_no_estructurado_o_nombre_tipo \n"); }
#line 1595 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 86 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_lista -> ARRAY '[' rangos ']' DE tipo_no_estructurado_o_nombre_tipo \n"); }
#line 1601 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 90 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_conjunto -> CONJUNTO DE tipo_no_estrucutado_o_nombre_tipo \n"); }
#line 1607 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 94 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> nombre \n"); }
#line 1613 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 95 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_escalar \n"); }
#line 1619 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 96 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_fichero \n"); }
#line 1625 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 97 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado \n"); }
#line 1631 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 98 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista \n"); }
#line 1637 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 99 "mini.y" /* yacc.c:1652  */
    { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto \n"); }
#line 1643 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 103 "mini.y" /* yacc.c:1652  */
    { printf ("  expresiones_constantes -> expresion_constante \n"); }
#line 1649 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 104 "mini.y" /* yacc.c:1652  */
    { printf ("  expresiones_constantes -> expresiones_constantes ',' expresion_constante \n"); }
#line 1655 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 105 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1661 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 109 "mini.y" /* yacc.c:1652  */
    { printf ("  rangos -> rango \n"); }
#line 1667 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 110 "mini.y" /* yacc.c:1652  */
    { printf ("  rangos -> rangos ',' rango \n"); }
#line 1673 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 111 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1679 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 114 "mini.y" /* yacc.c:1652  */
    { printf ("  rango -> expresion ':' expresion \n"); }
#line 1685 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 115 "mini.y" /* yacc.c:1652  */
    { printf ("  rango -> expresion ':' expresion ':' expresion \n"); }
#line 1691 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 123 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_constantes -> \n"); }
#line 1697 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 124 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_constantes -> CONSTANTES declaraciones_constantes\n"); }
#line 1703 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 127 "mini.y" /* yacc.c:1652  */
    { printf ("  declaraciones_constantes -> declaracion_constante\n"); }
#line 1709 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 128 "mini.y" /* yacc.c:1652  */
    { printf ("  declaraciones_constantes -> declaraciones_constantes declaracion_constante\n"); }
#line 1715 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 133 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_constante -> nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'\n"); }
#line 1721 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 134 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1727 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 138 "mini.y" /* yacc.c:1652  */
    { printf ("  valor_constante -> expresion\n"); }
#line 1733 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 139 "mini.y" /* yacc.c:1652  */
    { printf ("  valor_constante -> '[' valores_constantes ']'\n"); }
#line 1739 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 143 "mini.y" /* yacc.c:1652  */
    { printf ("  valores_constantes -> valor_constante\n"); }
#line 1745 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 144 "mini.y" /* yacc.c:1652  */
    { printf ("  valores_constantes -> valores_constantes ',' valor_constante\n"); }
#line 1751 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 152 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variables -> \n"); }
#line 1757 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 153 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variables -> VARIABLES declaraciones_variables\n"); }
#line 1763 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 156 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variable -> declaracion_variable\n"); }
#line 1769 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 157 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variable -> declaraciones_variables declaracion_variable\n"); }
#line 1775 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 158 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1781 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 161 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variable -> nombres ':' tipo_no_estructurado_o_nombre_tipo ';'\n"); }
#line 1787 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 162 "mini.y" /* yacc.c:1652  */
    { printf ("  declaracion_variable -> nombres ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'\n"); }
#line 1793 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 176 "mini.y" /* yacc.c:1652  */
    { printf ("  bloque_instrucciones -> '{' bloques_instrucciones '}'\n"); }
#line 1799 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 180 "mini.y" /* yacc.c:1652  */
    { printf ("  bloque_instrucciones -> instruccion\n"); }
#line 1805 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 181 "mini.y" /* yacc.c:1652  */
    { printf ("  bloque_instrucciones -> bloques_instrucciones instruccion\n"); }
#line 1811 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 186 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> ';'\n"); }
#line 1817 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 187 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_asignacion\n"); }
#line 1823 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 188 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_salir\n"); }
#line 1829 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 189 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_devolver\n"); }
#line 1835 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 190 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_si\n"); }
#line 1841 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 191 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_bucle\n"); }
#line 1847 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 192 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion -> instruccion_lanzar\n"); }
#line 1853 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 193 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1859 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 197 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_asignacion -> objeto '=' expresion ';'\n"); }
#line 1865 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 201 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_salir -> SALTAR ';'\n"); }
#line 1871 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 202 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_salir -> SALTAR SI expresion ';'\n"); }
#line 1877 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 206 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_salir -> DEVOLVER ';'\n"); }
#line 1883 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 207 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_salir -> DEVOLVER expresion ';'\n"); }
#line 1889 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 211 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_si -> SI expresion SINO bloque_instrucciones \n"); }
#line 1895 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 212 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_si -> SI expresion SINO bloque_instrucciones SINO bloque_instrucciones \n"); }
#line 1901 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 216 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_bucle -> clausula_iteracion bloque_instrucciones \n"); }
#line 1907 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 220 "mini.y" /* yacc.c:1652  */
    { printf ("  clausula_iteracion -> PARA nombre\n"); }
#line 1913 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 221 "mini.y" /* yacc.c:1652  */
    { printf ("  clausula_iteracion -> MIENTRAS CONJUNTO nombre\n"); }
#line 1919 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 222 "mini.y" /* yacc.c:1652  */
    { printf ("  clausula_iteracion -> MIENTRAS expresion\n"); }
#line 1925 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 223 "mini.y" /* yacc.c:1652  */
    { printf ("  clausula_iteracion -> MIENTRAS FIN expresion\n"); }
#line 1931 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 224 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 1937 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 228 "mini.y" /* yacc.c:1652  */
    { printf ("  instruccion_lanzar -> EJECUTA nombre ';'\n"); }
#line 1943 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 236 "mini.y" /* yacc.c:1652  */
    { printf ("  expres -> expresion\n"); }
#line 1949 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 237 "mini.y" /* yacc.c:1652  */
    { printf ("  expres -> expres expresion\n"); }
#line 1955 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 242 "mini.y" /* yacc.c:1652  */
    { printf("  expresion -> expresion1\n"); }
#line 1961 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 246 "mini.y" /* yacc.c:1652  */
    { printf("  expresion1 -> expresion1 OR expresion2\n"); }
#line 1967 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 247 "mini.y" /* yacc.c:1652  */
    { printf("  expresion1 -> expresion2\n"); }
#line 1973 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 251 "mini.y" /* yacc.c:1652  */
    { printf("  expresion2 -> expresion2 AND expresion3\n"); }
#line 1979 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 252 "mini.y" /* yacc.c:1652  */
    { printf("  expresion2 -> expresion3\n"); }
#line 1985 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 256 "mini.y" /* yacc.c:1652  */
    { printf("  expresionNegacion -> '!' expresion3 \n"); }
#line 1991 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 257 "mini.y" /* yacc.c:1652  */
    { printf("  expresionNegacion -> expresion3 \n"); }
#line 1997 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 261 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '=>' expresion4\n"); }
#line 2003 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 262 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '=<' expresion4\n"); }
#line 2009 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 263 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '<' expresion4\n"); }
#line 2015 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 264 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '>' expresion4\n"); }
#line 2021 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 265 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '==' expresion4\n"); }
#line 2027 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 266 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion3 '!=' expresion4\n"); }
#line 2033 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 267 "mini.y" /* yacc.c:1652  */
    { printf("  expresion3 -> expresion4 \n"); }
#line 2039 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 271 "mini.y" /* yacc.c:1652  */
    { printf("  expresion4 -> expresion4 '^' expresion5\n"); }
#line 2045 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 272 "mini.y" /* yacc.c:1652  */
    { printf("  expresion4 -> expresion5\n"); }
#line 2051 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 276 "mini.y" /* yacc.c:1652  */
    { printf("  expresion5 -> expresion5 '@' expresion6\n"); }
#line 2057 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 277 "mini.y" /* yacc.c:1652  */
    { printf("  expresion5 -> expresion6\n"); }
#line 2063 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 282 "mini.y" /* yacc.c:1652  */
    { printf("  expresion6 -> expresion6 '&' expresion7\n"); }
#line 2069 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 283 "mini.y" /* yacc.c:1652  */
    { printf("  expresion6 -> expresion7\n"); }
#line 2075 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 287 "mini.y" /* yacc.c:1652  */
    { printf("  expresion7 -> expresion7 '<-' expresion8\n"); }
#line 2081 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 288 "mini.y" /* yacc.c:1652  */
    { printf("  expresion7 -> expresion7 '->' expresion8\n"); }
#line 2087 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 289 "mini.y" /* yacc.c:1652  */
    { printf("  expresion7 -> expresion8\n"); }
#line 2093 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 294 "mini.y" /* yacc.c:1652  */
    { printf("  expresion8 -> expresion8 '+' expresion9\n"); }
#line 2099 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 295 "mini.y" /* yacc.c:1652  */
    { printf("  expresion8 -> expresion8 '-' expresion9\n"); }
#line 2105 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 296 "mini.y" /* yacc.c:1652  */
    { printf("  expresion8 -> expresion9\n"); }
#line 2111 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 301 "mini.y" /* yacc.c:1652  */
    { printf("  expresion9 -> expresion9 '*' expresion10\n"); }
#line 2117 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 302 "mini.y" /* yacc.c:1652  */
    { printf("  expresion9 -> expresion9 '/' expresion10\n"); }
#line 2123 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 303 "mini.y" /* yacc.c:1652  */
    { printf("  expresion9 -> expresion9 'modulo' expresion10\n"); }
#line 2129 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 304 "mini.y" /* yacc.c:1652  */
    { printf("  expresion9 -> expresion10 \n"); }
#line 2135 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 308 "mini.y" /* yacc.c:1652  */
    { printf("  expresion10 -> expresion11 '**' expresion10\n"); }
#line 2141 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 309 "mini.y" /* yacc.c:1652  */
    { printf("  expresion10 -> expresion11 \n"); }
#line 2147 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 313 "mini.y" /* yacc.c:1652  */
    { printf("  expresion11 -> '-' expresion_primaria \n"); }
#line 2153 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 314 "mini.y" /* yacc.c:1652  */
    { printf("  expresion11 -> expresion_primaria \n"); }
#line 2159 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 318 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_primaria -> expresion_constante expresion\n"); }
#line 2165 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 319 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_primaria -> objeto\n"); }
#line 2171 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 320 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_primaria -> '(' expresion ')'\n"); }
#line 2177 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 321 "mini.y" /* yacc.c:1652  */
    {yyerrok;}
#line 2183 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 324 "mini.y" /* yacc.c:1652  */
    { printf ("  objeto -> nombre\n"); }
#line 2189 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 325 "mini.y" /* yacc.c:1652  */
    { printf ("  objeto -> objeto '[' expres ']'\n"); }
#line 2195 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 326 "mini.y" /* yacc.c:1652  */
    { printf ("  objeto -> objeto '.' IDENTIFICADOR\n"); }
#line 2201 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 330 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_constante -> CTC_ENTERA\n"); }
#line 2207 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 331 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_constante -> CTC_REAL\n"); }
#line 2213 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 332 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_constante -> CTC_CADENA\n"); }
#line 2219 "mini.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 333 "mini.y" /* yacc.c:1652  */
    { printf ("  expresion_constante -> CTC_CARACTER\n"); }
#line 2225 "mini.tab.c" /* yacc.c:1652  */
    break;


#line 2229 "mini.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 336 "mini.y" /* yacc.c:1918  */


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
