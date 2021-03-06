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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */

/* bison -y -oparse.c parse.y */
#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYLEX_PARAM &yylval, &yylloc

#include <stddef.h>

#include "latino.h"
#include "ast.h"
#include "lex.h"

int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root, const char *s);
int yylex (YYSTYPE * yylval_param,YYLTYPE * yylloc_param ,yyscan_t yyscanner);


#line 83 "parse.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "parse.h".  */
#ifndef YY_YY_PARSE_H_INCLUDED
# define YY_YY_PARSE_H_INCLUDED
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
    TINT = 258,
    TLIT = 259,
    TNUMBER = 260,
    TSTRING = 261,
    TIDENTIFIER = 262,
    TCONSTANT = 263,
    TFUNC = 264,
    KIF = 265,
    KEND = 266,
    KELSE = 267,
    KWHILE = 268,
    KDO = 269,
    KBREAK = 270,
    KCONTINUE = 271,
    KWHEN = 272,
    KFUNCTION = 273,
    KFROM = 274,
    KBOOL = 275,
    KRETURN = 276,
    KTRUE = 277,
    KFALSE = 278,
    OP_GT = 279,
    OP_LT = 280,
    OP_GE = 281,
    OP_LE = 282,
    OP_EQ = 283,
    OP_NEQ = 284,
    OP_AND = 285,
    OP_OR = 286,
    OP_NEG = 287,
    OP_INCR = 288,
    OP_DECR = 289,
    OP_CONCAT = 290,
    OP_CONCAT_IGUAL = 291,
    UMINUS = 292,
    UNEG = 293
  };
#endif
/* Tokens.  */
#define TINT 258
#define TLIT 259
#define TNUMBER 260
#define TSTRING 261
#define TIDENTIFIER 262
#define TCONSTANT 263
#define TFUNC 264
#define KIF 265
#define KEND 266
#define KELSE 267
#define KWHILE 268
#define KDO 269
#define KBREAK 270
#define KCONTINUE 271
#define KWHEN 272
#define KFUNCTION 273
#define KFROM 274
#define KBOOL 275
#define KRETURN 276
#define KTRUE 277
#define KFALSE 278
#define OP_GT 279
#define OP_LT 280
#define OP_GE 281
#define OP_LE 282
#define OP_EQ 283
#define OP_NEQ 284
#define OP_AND 285
#define OP_OR 286
#define OP_NEG 287
#define OP_INCR 288
#define OP_DECR 289
#define OP_CONCAT 290
#define OP_CONCAT_IGUAL 291
#define UMINUS 292
#define UNEG 293

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ast **root, void *scanner);

#endif /* !YY_YY_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "parse.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   447

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      47,    48,    40,    38,    52,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    49,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   102,   102,   108,   113,   119,   120,   121,   122,   123,
     124,   125,   129,   130,   131,   132,   133,   134,   148,   150,
     158,   160,   162,   168,   172,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   200,   204,   205,   206,   207,   208,
     212,   213,   214,   215,   216,   221,   222,   225,   226,   227,
     230,   231,   232,   235,   236,   237,   240,   241,   242,   245,
     246,   250,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TINT", "TLIT", "TNUMBER", "TSTRING",
  "TIDENTIFIER", "TCONSTANT", "TFUNC", "KIF", "KEND", "KELSE", "KWHILE",
  "KDO", "KBREAK", "KCONTINUE", "KWHEN", "KFUNCTION", "KFROM", "KBOOL",
  "KRETURN", "KTRUE", "KFALSE", "OP_GT", "OP_LT", "OP_GE", "OP_LE",
  "OP_EQ", "OP_NEQ", "OP_AND", "OP_OR", "OP_NEG", "OP_INCR", "OP_DECR",
  "OP_CONCAT", "OP_CONCAT_IGUAL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UMINUS", "UNEG", "'['", "']'", "'('", "')'", "';'", "'{'", "'}'", "','",
  "':'", "$accept", "program", "statement_list", "statement",
  "declaration", "selection_statement", "iteration_statement",
  "jump_statement", "function_definition", "expression", "function_call",
  "primary_expression", "constant_expression", "unary_expression",
  "argument_expression_list", "identifier_list", "list_items",
  "dict_items", "dict_item", "dict_key", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,    43,    45,
      42,    47,    37,   292,   293,    91,    93,    40,    41,    59,
     123,   125,    44,    58
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     418,    41,   -33,   -18,    -3,   418,    31,     7,    29,    50,
     418,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,    29,     8,    53,    29,    14,    29,    29,   358,    20,
      75,   -45,   -45,   -45,   -45,    25,   -45,   -45,   -45,    29,
      29,    29,     3,   299,   -45,   -45,   -45,   -45,   -45,   299,
      29,   299,    34,   144,    39,   -45,   199,   224,    46,    89,
      12,    48,   -45,   -45,   249,   -45,   -45,    33,   -45,    45,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,   299,   -44,    64,    29,   -45,   418,
     418,    29,   -45,    -9,    29,   -45,   -45,     3,    19,   -45,
     -45,   -45,   -45,   -45,   -45,   133,   133,   318,   318,   318,
     416,   416,   416,   -45,    29,    29,   -45,   343,    52,   274,
     418,    95,   173,   -45,   -45,   -45,   299,   299,   -45,   418,
     -45,   -45,   373,   -45,    75,   388,   -45,    55,   -45,   418,
     403,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       2,     4,     6,     7,     8,     9,    10,    11,    17,    55,
      56,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,    50,    52,    51,    53,    45,    46,    47,    48,     0,
       0,     0,    66,    23,    43,    42,    49,     1,     3,    14,
      63,    12,     0,    58,     0,    16,     0,     0,     0,    60,
       0,     0,    34,    41,     0,    71,    72,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    57,    44,     5,
       5,     0,    61,     0,     0,    40,    54,    69,     0,    25,
      26,    27,    28,    30,    29,    31,    32,    33,    35,    36,
      37,    38,    39,    13,     0,     0,    59,     0,     0,     0,
       5,     0,     0,    67,    45,    70,    64,    15,    18,     5,
      21,    20,     0,    62,     0,     0,    24,     0,    19,     5,
       0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,     2,    -7,   -29,   -45,   -45,   -45,   -45,    73,
       0,     6,    81,   -45,    21,   -45,   -45,   -45,    10,   -45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    53,
      44,    45,    46,    18,    54,    93,    85,    67,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    61,   113,    48,    25,    17,    65,    28,   114,    66,
      17,    31,    32,    33,    34,    35,    36,    31,    32,    33,
      34,    48,    31,    32,    33,    34,   124,    36,    17,    26,
      37,    38,    31,    32,    33,    34,    35,    36,    29,   120,
      39,    37,    38,   121,    27,    19,    20,    40,    21,    22,
      47,    37,    38,    50,    30,    41,    52,    23,    42,     1,
       2,    39,     3,   130,    42,     4,     5,    59,    40,    42,
       6,     7,    24,     8,    19,    20,    41,    21,    22,    42,
      86,    43,    60,     2,    96,    97,    23,    88,    24,    17,
      17,   117,   118,    91,    49,    51,    92,    94,    98,    56,
      57,   115,   133,   139,   125,   137,    55,   123,   116,     0,
      48,    48,    62,    63,    64,     0,     0,    17,    17,     0,
      17,     0,   132,    84,     0,    48,     0,     0,    48,    17,
       0,   135,    17,    48,     0,    17,     0,     0,     0,    17,
      17,   140,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    70,    71,    72,
      73,    74,    75,     0,   119,     0,     0,   122,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    78,
       0,     0,    79,    80,    81,    82,    83,   126,   127,     0,
       0,     0,     0,     0,     0,     0,    87,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    78,     0,
       0,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,     0,   134,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,     0,     0,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,    89,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    78,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,    90,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,     0,     0,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,    95,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    78,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,   131,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,     0,     0,    79,    80,    81,
      82,    83,    70,    71,    72,    73,    74,    75,    76,    77,
       1,     2,     0,     3,   128,   129,     4,     5,    81,    82,
      83,     6,     7,     0,     8,     1,     2,     0,     3,     0,
       0,     4,     5,     0,     0,    58,     6,     7,     0,     8,
       1,     2,     0,     3,   136,     0,     4,     5,     0,     0,
       0,     6,     7,     0,     8,     1,     2,     0,     3,   138,
       0,     4,     5,     0,     0,     0,     6,     7,     0,     8,
       1,     2,     0,     3,   141,     0,     4,     5,     0,     0,
       0,     6,     7,     0,     8,     1,     2,     0,     3,     0,
       0,     4,     5,     0,     0,     0,     6,     7,     0,     8,
      70,    71,    72,    73,    74,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       0,    30,    46,    10,    37,     5,     3,     5,    52,     6,
      10,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,    28,     3,     4,     5,     6,     7,     8,    28,    47,
      22,    23,     3,     4,     5,     6,     7,     8,     7,    48,
      32,    22,    23,    52,    47,    33,    34,    39,    36,    37,
       0,    22,    23,    45,    47,    47,     3,    45,    50,     7,
       8,    32,    10,    11,    50,    13,    14,    47,    39,    50,
      18,    19,    47,    21,    33,    34,    47,    36,    37,    50,
      46,     8,     7,     8,    51,    52,    45,    48,    47,    89,
      90,    89,    90,    47,    21,    22,     7,    49,    53,    26,
      27,    37,     7,    48,    98,   134,    25,    97,    87,    -1,
     117,   118,    39,    40,    41,    -1,    -1,   117,   118,    -1,
     120,    -1,   120,    50,    -1,   132,    -1,    -1,   135,   129,
      -1,   129,   132,   140,    -1,   135,    -1,    -1,    -1,   139,
     140,   139,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    24,    25,    26,
      27,    28,    29,    -1,    91,    -1,    -1,    94,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    24,    25,    26,    27,    28,    29,    30,    31,
       7,     8,    -1,    10,    11,    12,    13,    14,    40,    41,
      42,    18,    19,    -1,    21,     7,     8,    -1,    10,    -1,
      -1,    13,    14,    -1,    -1,    17,    18,    19,    -1,    21,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    -1,
      -1,    18,    19,    -1,    21,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    -1,    -1,    18,    19,    -1,    21,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    -1,
      -1,    18,    19,    -1,    21,     7,     8,    -1,    10,    -1,
      -1,    13,    14,    -1,    -1,    -1,    18,    19,    -1,    21,
      24,    25,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    10,    13,    14,    18,    19,    21,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    67,    33,
      34,    36,    37,    45,    47,    37,    47,    47,    56,     7,
      47,     3,     4,     5,     6,     7,     8,    22,    23,    32,
      39,    47,    50,    63,    64,    65,    66,     0,    57,    63,
      45,    63,     3,    63,    68,    66,    63,    63,    17,    47,
       7,    58,    63,    63,    63,     3,     6,    71,    72,    73,
      24,    25,    26,    27,    28,    29,    30,    31,    35,    38,
      39,    40,    41,    42,    63,    70,    46,    52,    48,    48,
      48,    47,     7,    69,    49,    48,    51,    52,    53,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    46,    52,    37,    68,    56,    56,    63,
      48,    52,    63,    72,     7,    65,    63,    63,    11,    12,
      11,    48,    56,     7,    49,    56,    11,    58,    11,    48,
      56,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    60,    61,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    71,    71,    71,    72,
      72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       1,     1,     3,     5,     3,     6,     3,     1,     6,     8,
       6,     6,    10,     2,     7,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     0,     1,     3,
       0,     1,     3,     0,     3,     1,     0,     3,     1,     0,
       3,     1,     1
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
      yyerror (&yylloc, root, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, root, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, root, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ast **root, void *scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , root, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, root, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ast **root, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ast **root, void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 102 "parse.y" /* yacc.c:1646  */
    {
        *root = (yyvsp[0].node);
    }
#line 1563 "parse.c" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[0].node)){
            (yyval.node) = nodo_nuevo(NODO_BLOQUE, (yyvsp[0].node), (yyvsp[-1].node));
        }
    }
#line 1573 "parse.c" /* yacc.c:1646  */
    break;

  case 4:
#line 113 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo(NODO_BLOQUE, (yyvsp[0].node), NULL);
    }
#line 1581 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 119 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1587 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 120 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1593 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1599 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1605 "parse.c" /* yacc.c:1646  */
    break;

  case 9:
#line 123 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1611 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 124 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1617 "parse.c" /* yacc.c:1646  */
    break;

  case 11:
#line 125 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1623 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1629 "parse.c" /* yacc.c:1646  */
    break;

  case 13:
#line 130 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion(nodo_nuevo(NODO_LISTA, (yyvsp[-1].node), NULL), (yyvsp[-4].node)); }
#line 1635 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((nodo_nuevo_operador(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node))), (yyvsp[-2].node)); }
#line 1641 "parse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 132 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion_lista((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 1647 "parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1653 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 134 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1659 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 148 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_si((yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 1666 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 150 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_si((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1673 "parse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 158 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_hacer((yyvsp[-1].node), (yyvsp[-4].node)); }
#line 1680 "parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 160 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_mientras((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1687 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 163 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_desde((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1694 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_RETORNO, (yyvsp[0].node), NULL); }
#line 1700 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 172 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_funcion((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1708 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 178 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MAYOR_QUE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1714 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 179 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MENOR_QUE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1720 "parse.c" /* yacc.c:1646  */
    break;

  case 27:
#line 180 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MAYOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1726 "parse.c" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MENOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1732 "parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_DESIGUALDAD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1738 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_IGUALDAD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1744 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_Y, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1750 "parse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 185 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_O, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1756 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 186 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1762 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 187 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_NEGACION, (yyvsp[0].node), NULL); }
#line 1768 "parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 188 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_SUMA, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1774 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 189 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_RESTA, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1780 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MULTIPLICACION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1786 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 191 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_DIVISION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1792 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MODULO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1798 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 193 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1804 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 194 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_operador(NODO_MENOS_UNARIO, (yyvsp[0].node), NULL); }
#line 1810 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 200 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_LLAMADA, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1816 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 204 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1822 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1828 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 206 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_logico(1); }
#line 1834 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 207 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_logico(0); }
#line 1840 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 208 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1846 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1852 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 213 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1858 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 214 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1864 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 215 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1870 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 216 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO, (yyvsp[-1].node), NULL); }
#line 1876 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 221 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_INCREMENTO, (yyvsp[-1].node), NULL); }
#line 1882 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 222 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DECREMENTO, (yyvsp[-1].node), NULL); }
#line 1888 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1894 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_ARGUMENTOS, (yyvsp[0].node), NULL); }
#line 1900 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_ARGUMENTOS, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1906 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1912 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_PARAMETROS, (yyvsp[0].node), NULL); }
#line 1918 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_PARAMETROS, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 1924 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 235 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1930 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 236 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_ASIGNAR_ELEMENTO, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 1936 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_ASIGNAR_ELEMENTO, (yyvsp[0].node), NULL); }
#line 1942 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO_ELEMENTOS, NULL, NULL); }
#line 1948 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO_ELEMENTOS, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 1954 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO_ELEMENTOS, (yyvsp[0].node), NULL); }
#line 1960 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1966 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO_ELEMENTO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1972 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 250 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1978 "parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 251 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1984 "parse.c" /* yacc.c:1646  */
    break;


#line 1988 "parse.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, root, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, root, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, root, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, root, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, root, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, root, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, root, scanner);
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
#line 259 "parse.y" /* yacc.c:1906  */


//se define para analisis sintactico (bison)
int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root,
            const char *s) {
  lat_registrar_error("Linea %d: %s", (yylloc_param->first_line + 1), s);
  return 0;
}
