/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "lex.y" /* yacc.c:339  */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct variaveis{
    char nome[255];
    double valor;
    struct variaveis *next;
} Variaveis;

Variaveis *lista = NULL;

Variaveis *buscar_variavel(Variaveis *l, char variaveis[]){
        Variaveis *list;
        for(list = l; list != NULL; list = list -> next){
            if(strcmp(list -> nome, variaveis) == 0){
                return list;
            }
        }
        return NULL;
    }

Variaveis *inserir_nova_variavel( Variaveis *l, char nome[]){
    Variaveis *nova = (Variaveis*)malloc(sizeof(Variaveis));
    strcpy(nova -> nome, nome);
    nova -> valor = 0;
    nova -> next = l;
    return nova;  
}

Variaveis*l1;
int OK;

int yylex();
void yyerror (char *s) {
    printf("Erro: %s\n", s);
}

#line 107 "lex.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    DECIMAL = 258,
    NOMEVARIAVEL = 259,
    CARACTERES = 260,
    E = 261,
    OU = 262,
    IGUAL = 263,
    DIFERENTE = 264,
    MENORIGUAL = 265,
    MAIORIGUAL = 266,
    INICIO = 267,
    MENOR = 268,
    MAIOR = 269,
    CHAVEABERTA = 270,
    CHAVEFECHADA = 271,
    SE = 272,
    SENAO = 273,
    FIM = 274,
    VAR = 275,
    ATRIBUICAO = 276,
    PARENTESEABERTO = 277,
    PARENTESEFECHADO = 278,
    SAIDA = 279,
    SAIDA_V = 280,
    SAIDA_P = 281,
    SAIDAL = 282,
    SAIDAL_V = 283,
    SAIDAL_P = 284,
    ENTRADA = 285,
    ADICAO = 286,
    SUBTRACAO = 287,
    MULTIPLICACAO = 288,
    DIVISAO = 289,
    ELEVACAO = 290,
    RAIZ = 291,
    RESTO = 292,
    NEG = 293,
    SEX = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "lex.y" /* yacc.c:355  */

    int inteiro;
    double decimal;
    char caracteres[255];

#line 190 "lex.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 207 "lex.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    86,    86,    88,    95,   102,   109,   116,
     123,   130,   135,   140,   147,   154,   161,   168,   169,   174,
     194,   206,   218,   232,   233,   234,   239,   245,   246,   249,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   271,
     272,   276,   280,   284,   288,   292,   296,   300,   304,   308,
     312,   316,   320,   324,   328,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECIMAL", "NOMEVARIAVEL", "CARACTERES",
  "E", "OU", "IGUAL", "DIFERENTE", "MENORIGUAL", "MAIORIGUAL", "INICIO",
  "MENOR", "MAIOR", "CHAVEABERTA", "CHAVEFECHADA", "SE", "SENAO", "FIM",
  "VAR", "ATRIBUICAO", "PARENTESEABERTO", "PARENTESEFECHADO", "SAIDA",
  "SAIDA_V", "SAIDA_P", "SAIDAL", "SAIDAL_V", "SAIDAL_P", "ENTRADA",
  "ADICAO", "SUBTRACAO", "MULTIPLICACAO", "DIVISAO", "ELEVACAO", "RAIZ",
  "RESTO", "NEG", "SEX", "$accept", "programa", "codigo", "comandos",
  "comandosse", "lista_comandos", "expressoes", "valor", "operadores", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -39

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-39)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -39,    33,   154,   -39,    19,   205,    22,   -39,    41,
      49,    50,    67,    68,    70,    71,    74,   -39,    -1,   -39,
     171,    98,    82,    38,     2,    72,    59,    75,    95,   101,
     -39,   -39,    -1,    -1,    -1,   313,   -39,   -39,   -39,    98,
     133,     9,    -1,    83,   -39,   122,    86,   128,    87,   230,
      89,   -39,   235,   100,   248,   102,   253,   103,   266,   -39,
      94,    -1,    -1,    -1,    -1,    -1,   105,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    98,   222,   313,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,    34,    34,    94,    94,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    98,   313,   313,   313,   313,   313,
     313,    46,    46,   205,   -39,   106,   271,   284,   289,   302,
     307,   320,    16,    23,   188,   205,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   114,   -39
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     1,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,    27,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      39,    38,     0,     0,     0,    21,    37,    25,    28,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,     0,     0,     0,    36,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    12,     6,
      14,     8,    16,    10,    11,     5,    13,     7,    15,     9,
      19,    35,    33,    34,    31,    32,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    50,    46,    44,    40,
      42,    52,    54,     0,    23,     0,    48,    50,    46,    44,
      40,    42,     0,     0,     0,     0,    49,    51,    47,    45,
      41,    43,    53,    55,    25,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,    -3,   -39,    35,   -14,   -39,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    19,   115,    20,    40,    36,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    67,    30,    31,    35,    30,    31,    46,     1,    45,
      47,    49,    52,    54,    56,    74,    75,    38,    58,    59,
      60,    32,    74,    75,    32,    66,   103,   104,    77,    74,
      75,    33,    76,     4,    33,    34,   111,   112,    34,   132,
      18,    30,    31,    43,    21,    22,   133,    92,    93,    94,
      95,    96,    74,    75,   105,   106,   107,   108,   109,   110,
      32,    44,    30,    31,    50,   122,   123,    63,    64,    65,
      33,    23,    24,   114,    34,    30,    31,    48,    30,    31,
      53,    32,    51,   116,   117,   118,   119,   120,   121,    25,
      26,    33,    27,    28,    32,    34,    29,    32,    30,    31,
      55,    30,    31,    42,    33,    57,    78,    33,    34,    80,
      82,    34,    84,    97,    98,    99,   100,    32,   101,   102,
      39,    38,   135,    86,   125,    88,    90,    33,    91,    65,
      33,    34,   -26,     0,    34,     0,    61,    62,    63,    64,
      65,    68,    69,    70,    71,    79,    72,    73,   124,     0,
       0,    81,     0,    61,    62,    63,    64,    65,     5,    61,
      62,    63,    64,    65,    61,    62,    63,    64,    65,     6,
       0,     7,     0,     8,     9,     5,     0,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     6,    37,     7,     0,
       0,     9,     5,     0,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     6,   134,     7,     0,     0,     9,     5,
       0,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       6,     0,     7,     0,     0,     9,     5,     0,     0,    10,
      11,    12,    13,    14,    15,    16,     0,   113,     0,     7,
       0,     0,     9,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    83,     0,     0,     0,     0,    85,     0,
       0,    61,    62,    63,    64,    65,    61,    62,    63,    64,
      65,    87,     0,     0,     0,     0,    89,     0,     0,    61,
      62,    63,    64,    65,    61,    62,    63,    64,    65,    91,
       0,     0,     0,     0,   126,     0,     0,    61,    62,    63,
      64,    65,    61,    62,    63,    64,    65,   127,     0,     0,
       0,     0,   128,     0,     0,    61,    62,    63,    64,    65,
      61,    62,    63,    64,    65,   129,     0,     0,     0,     0,
     130,     0,     0,    61,    62,    63,    64,    65,    61,    62,
      63,    64,    65,   131,    61,    62,    63,    64,    65,     0,
       0,    61,    62,    63,    64,    65
};

static const yytype_int8 yycheck[] =
{
       3,    39,     3,     4,    18,     3,     4,     5,    12,    23,
      24,    25,    26,    27,    28,     6,     7,    20,    32,    33,
      34,    22,     6,     7,    22,    39,     6,     7,    42,     6,
       7,    32,    23,     0,    32,    36,    74,    75,    36,    23,
      21,     3,     4,     5,    22,     4,    23,    61,    62,    63,
      64,    65,     6,     7,    68,    69,    70,    71,    72,    73,
      22,    23,     3,     4,     5,   103,   104,    33,    34,    35,
      32,    22,    22,    76,    36,     3,     4,     5,     3,     4,
       5,    22,    23,    97,    98,    99,   100,   101,   102,    22,
      22,    32,    22,    22,    22,    36,    22,    22,     3,     4,
       5,     3,     4,    21,    32,     4,    23,    32,    36,    23,
      23,    36,    23,     8,     9,    10,    11,    22,    13,    14,
      22,   124,   125,    23,    18,    23,    23,    32,    23,    35,
      32,    36,    18,    -1,    36,    -1,    31,    32,    33,    34,
      35,     8,     9,    10,    11,    23,    13,    14,   113,    -1,
      -1,    23,    -1,    31,    32,    33,    34,    35,     4,    31,
      32,    33,    34,    35,    31,    32,    33,    34,    35,    15,
      -1,    17,    -1,    19,    20,     4,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    -1,    15,    16,    17,    -1,
      -1,    20,     4,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    -1,    15,    16,    17,    -1,    -1,    20,     4,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    -1,
      15,    -1,    17,    -1,    -1,    20,     4,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    23,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    31,    32,    33,    34,    35,    31,    32,    33,    34,
      35,    23,    -1,    -1,    -1,    -1,    23,    -1,    -1,    31,
      32,    33,    34,    35,    31,    32,    33,    34,    35,    23,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    31,    32,    33,
      34,    35,    31,    32,    33,    34,    35,    23,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,    23,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    31,    32,    33,    34,    35,    31,    32,
      33,    34,    35,    23,    31,    32,    33,    34,    35,    -1,
      -1,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    41,    42,     0,     4,    15,    17,    19,    20,
      24,    25,    26,    27,    28,    29,    30,    43,    21,    43,
      45,    22,     4,    22,    22,    22,    22,    22,    22,    22,
       3,     4,    22,    32,    36,    46,    47,    16,    43,    22,
      46,    48,    21,     5,    23,    46,     5,    46,     5,    46,
       5,    23,    46,     5,    46,     5,    46,     4,    46,    46,
      46,    31,    32,    33,    34,    35,    46,    48,     8,     9,
      10,    11,    13,    14,     6,     7,    23,    46,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    46,    46,    46,    46,    46,     8,     9,    10,
      11,    13,    14,     6,     7,    46,    46,    46,    46,    46,
      46,    48,    48,    15,    43,    44,    46,    46,    46,    46,
      46,    46,    48,    48,    45,    18,    23,    23,    23,    23,
      23,    23,    23,    23,    16,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    44,    45,    45,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     3,     4,
       2,     3,     4,     5,     7,     3,     3,     1,     2,     3,
       2,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     5,     3,     5,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

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
| yyreduce -- Do a reduction.  |
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
        case 5:
#line 88 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;34m");
        printf ("%.2lf\n\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1415 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;34m");
        printf ("%.2lf\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1427 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%.2lf\n\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1439 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 109 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%.2lf\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1451 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%.2lf\n\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1463 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%.2lf\n",(yyvsp[-1].decimal));
        printf("\033[0m");
        }
    }
#line 1475 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf ("%s\n",(yyvsp[-1].caracteres));
        }
    }
#line 1485 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf ("%s",(yyvsp[-1].caracteres));
        }
    }
#line 1495 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 140 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%s\n",(yyvsp[-1].caracteres));
        printf("\033[0m");
        }
    }
#line 1507 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 147 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%s",(yyvsp[-1].caracteres));
        printf("\033[0m");
        }
    }
#line 1519 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 154 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%s\n",(yyvsp[-1].caracteres));
        printf("\033[0m");
        }
    }
#line 1531 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 161 "lex.y" /* yacc.c:1646  */
    { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%s",(yyvsp[-1].caracteres));
        printf("\033[0m");
        }
    }
#line 1543 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 168 "lex.y" /* yacc.c:1646  */
    {}
#line 1549 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 169 "lex.y" /* yacc.c:1646  */
    {
        if(OK == 1) {
        printf ("\n");
        }
    }
#line 1559 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 174 "lex.y" /* yacc.c:1646  */
    {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, (yyvsp[-1].caracteres)); 
        if(aux == NULL){
           printf("\033[1;31m");
           printf("Variavel '%s' não declarada!\n", (yyvsp[-1].caracteres));
           printf("\033[0m");
       } else {
           //char value_string[255];
           double value;
           printf("\033[1;34m");
           printf("Insira o valor de '%s': ", (yyvsp[-1].caracteres));
           //scanf("%s", &value_string);
           scanf("%lf", &value);
           printf("\033[0m");
           //aux -> valor = value_string;
           aux -> valor = value;
       }
        }
    }
#line 1584 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 194 "lex.y" /* yacc.c:1646  */
    {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, (yyvsp[0].caracteres));
        if(aux == NULL){
            lista = inserir_nova_variavel(lista, (yyvsp[0].caracteres));   
        } else {
            printf("\033[1;33m");
            printf("Variável '%s' já declarada!\n", (yyvsp[0].caracteres));
            printf("\033[0m");
        }
        }
    }
#line 1601 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 206 "lex.y" /* yacc.c:1646  */
    {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, (yyvsp[-2].caracteres)); 
        if(aux == NULL){
            printf("\033[1;31m");
            printf("Variavel '%s' não declarada!\n", (yyvsp[-2].caracteres));
            printf("\033[0m");
        } else {
                aux -> valor = (yyvsp[0].decimal);
        }
        }
    }
#line 1618 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 218 "lex.y" /* yacc.c:1646  */
    {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, (yyvsp[-2].caracteres));
        if(aux == NULL){
            lista = inserir_nova_variavel(lista, (yyvsp[-2].caracteres));
            Variaveis *aux2 = buscar_variavel(lista, (yyvsp[-2].caracteres)); 
            aux2 -> valor = (yyvsp[0].decimal);
        } else {
            printf("\033[1;33m");
            printf("Variável '%s' já declarada!\n", (yyvsp[-2].caracteres));
            printf("\033[0m");
        }
        }
    }
#line 1637 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 234 "lex.y" /* yacc.c:1646  */
    {
							OK = 1;
						}
#line 1645 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "lex.y" /* yacc.c:1646  */
    {
			if(OK==1) OK=0;
			else OK=1;
			}
#line 1654 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 249 "lex.y" /* yacc.c:1646  */
    {
        (yyval.decimal) = pow((yyvsp[-2].decimal),(yyvsp[0].decimal));
    }
#line 1662 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = sqrt((yyvsp[0].decimal));}
#line 1668 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 253 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);}
#line 1674 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 254 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);}
#line 1680 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);}
#line 1686 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 256 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);}
#line 1692 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 257 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-1].decimal);}
#line 1698 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 258 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = -(yyvsp[0].decimal);}
#line 1704 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 259 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[0].decimal);}
#line 1710 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 260 "lex.y" /* yacc.c:1646  */
    {
        Variaveis *aux = buscar_variavel(lista, (yyvsp[0].caracteres));
        if(aux == NULL) {
            printf("\033[1;31m");
            printf("Variavel '%s' não declarada!\n", (yyvsp[0].caracteres));
            (yyval.decimal) = 0;
            printf("\033[0m");
        }
        else (yyval.decimal) = aux -> valor;
        }
#line 1725 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 271 "lex.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[0].decimal);}
#line 1731 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 272 "lex.y" /* yacc.c:1646  */
    {
					if ((yyvsp[-2].decimal) < (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
					else (yyval.inteiro) = OK = 0;
					}
#line 1740 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 276 "lex.y" /* yacc.c:1646  */
    {
					if ((yyvsp[-3].decimal) < (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
					else (yyval.inteiro) = OK = 0;
					}
#line 1749 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 280 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].decimal) > (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1758 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 284 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].decimal) > (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1767 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 288 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].decimal) >= (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1776 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 292 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].decimal) >= (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1785 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 296 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].decimal) <= (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1794 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 300 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].decimal) <= (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1803 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 304 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].decimal) == (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1812 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 308 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].decimal) == (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1821 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 312 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].decimal) != (yyvsp[0].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1830 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 316 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].decimal) != (yyvsp[-1].decimal)) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1839 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 320 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].inteiro) == 1 && (yyvsp[0].inteiro) == 1) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1848 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 324 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].inteiro) == 1 && (yyvsp[-1].inteiro) == 1) (yyval.inteiro) = OK = 1;
                else (yyval.inteiro) = OK = 0;
                }
#line 1857 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 328 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-2].inteiro) == 0 && (yyvsp[0].inteiro) == 0) (yyval.inteiro) = OK = 0;
                else (yyval.inteiro) = OK = 1;
                }
#line 1866 "lex.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 332 "lex.y" /* yacc.c:1646  */
    {
                if ((yyvsp[-3].inteiro) == 0 && (yyvsp[-1].inteiro) == 0) (yyval.inteiro) = OK = 0;
                else (yyval.inteiro) = OK = 1;
                }
#line 1875 "lex.tab.c" /* yacc.c:1646  */
    break;


#line 1879 "lex.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 337 "lex.y" /* yacc.c:1906  */

#include "lex.yy.c"
int main() {
    OK = 1;
    l1 = NULL;
    yyin=fopen("renato_script.txt","r");
    yyparse();
    yylex();
    fclose(yyin);
    return 0;
}
