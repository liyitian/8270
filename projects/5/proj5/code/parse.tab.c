/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parse.y" /* yacc.c:339  */

  #include <iostream>
  #include <cmath>
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
	void yyerror (char const *);

#line 75 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    FLOAT = 315,
    OR = 316,
    PASS = 317,
    PERCENT = 318,
    PERCENTEQUAL = 319,
    PLUS = 320,
    PLUSEQUAL = 321,
    PRINT = 322,
    RAISE = 323,
    RBRACE = 324,
    RETURN = 325,
    RIGHTSHIFT = 326,
    RIGHTSHIFTEQUAL = 327,
    RPAR = 328,
    RSQB = 329,
    SEMI = 330,
    SLASH = 331,
    SLASHEQUAL = 332,
    STAR = 333,
    STAREQUAL = 334,
    STRING = 335,
    TILDE = 336,
    TRY = 337,
    VBAREQUAL = 338,
    WHILE = 339,
    WITH = 340,
    YIELD = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "parse.y" /* yacc.c:355  */

	Ast* ast;
	double d;
	int i;
	char *c;

#line 209 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "parse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  139
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  323
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    47,    56,    57,    60,    63,    64,
      67,    68,    71,    72,    75,    76,    79,    80,    83,    84,
      87,    90,    91,    94,    95,    98,    99,   102,   103,   106,
     107,   110,   111,   114,   115,   118,   121,   122,   125,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   139,   140,
     143,   144,   147,   148,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   165,   167,   170,   171,
     174,   175,   178,   181,   184,   185,   186,   187,   188,   191,
     194,   197,   198,   201,   204,   205,   208,   209,   212,   213,
     216,   217,   220,   223,   224,   227,   228,   231,   232,   235,
     236,   237,   240,   241,   244,   245,   248,   251,   252,   255,
     256,   259,   260,   263,   264,   267,   268,   271,   272,   273,
     274,   275,   276,   277,   278,   281,   282,   285,   286,   289,
     290,   293,   294,   297,   298,   301,   302,   305,   306,   309,
     310,   313,   316,   317,   320,   321,   324,   325,   328,   329,
     332,   333,   337,   338,   341,   342,   345,   346,   349,   350,
     353,   354,   363,   364,   367,   368,   371,   372,   375,   376,
     379,   380,   383,   384,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   401,   402,   405,   406,   409,
     410,   413,   414,   417,   418,   421,   422,   425,   426,   429,
     430,   452,   453,   454,   455,   458,   469,   472,   473,   474,
     477,   481,   484,   485,   488,   492,   493,   494,   495,   496,
     500,   503,   504,   507,   508,   511,   512,   515,   516,   519,
     520,   523,   524,   527,   528,   531,   532,   535,   536,   537,
     540,   543,   544,   545,   548,   549,   552,   553,   556,   557,
     560,   564,   567,   568,   571,   572,   575,   576,   579,   580,
     583,   584,   587,   588,   589,   590,   591,   592,   595,   596,
     599,   600,   603,   604,   607,   608,   611,   612,   615,   616,
     620,   621,   624,   625,   628,   629,   632,   636,   637,   640,
     641,   642,   645,   646,   647,   650,   651,   652,   655,   656,
     657,   660,   661,   662,   665,   666,   667,   671,   672,   673,
     676,   677,   678,   681,   682,   683,   686,   689,   692,   693,
     694,   697,   698,   699
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "FLOAT", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS",
  "PLUSEQUAL", "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT",
  "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR",
  "STAREQUAL", "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH",
  "YIELD", "$accept", "start", "single_input", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "opt_test", "opt_test_2", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "yield_stmt", "raise_stmt", "opt_COMMA_test", "opt_test_3",
  "import_stmt", "import_name", "import_from", "star_DOT", "plus_DOT",
  "pick_STAR_import", "import_as_name", "dotted_as_name",
  "import_as_names", "dotted_as_names", "dotted_name", "global_stmt",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "old_test", "old_lambdef", "test", "opt_IF_ELSE",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "subscript", "opt_test_only",
  "opt_sliceop", "sliceop", "exprlist", "testlist", "dictorsetmaker",
  "pick_comp_for", "pick_for_test", "classdef", "opt_testlist", "arglist",
  "argument", "opt_comp_for", "list_iter", "list_for", "list_if",
  "comp_iter", "comp_for", "comp_if", "testlist1", "encoding_decl",
  "yield_expr", "star_fpdef_notest", "star_COMMA_expr", "star_COMMA_fpdef",
  "star_COMMA_test", "star_test_COLON_test", "star_COMMA_subscript",
  "star_COMMA_import_as_name", "plus_COMMA_test", "plus_COMMA_old_test",
  "dictarg", "listarg", "arglist_postlist", "small_stmt_STAR_OR_SEMI", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -376

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-376)))

#define YYTABLE_NINF -306

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     377,   787,     3,   787,  -376,    35,  -376,    44,   831,   831,
     831,   133,    71,   787,     3,    21,   787,    77,   787,  -376,
     153,   159,   309,  -376,  -376,  -376,   712,   787,   787,    81,
    -376,   147,   787,   787,   787,   164,  -376,  -376,   457,   137,
     161,    87,  -376,  -376,   167,  -376,    96,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
     156,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,   157,
       7,   169,  -376,   864,   165,   168,   172,    -4,    46,    29,
    -376,   831,  -376,    36,  -376,  -376,    31,  -376,  -376,  -376,
    -376,   163,  -376,    42,  -376,    55,    34,   134,    43,  -376,
      40,   135,    24,     3,   145,  -376,   173,  -376,   171,   124,
     787,   100,  -376,   174,    16,   160,   109,   127,  -376,    26,
    -376,   120,  -376,  -376,    99,   123,  -376,  -376,   787,  -376,
     157,   182,  -376,  -376,   617,   185,   186,   198,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,   679,   151,   166,
     787,  -376,   309,   309,  -376,   309,  -376,  -376,  -376,  -376,
    -376,   154,  -376,  -376,   170,  -376,   831,   831,   831,   831,
    -376,  -376,   831,  -376,  -376,   831,  -376,  -376,  -376,  -376,
     831,  -376,   175,   230,   730,   184,    36,  -376,  -376,  -376,
    -376,    77,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,    77,   787,   177,   230,  -376,  -376,   787,   617,   787,
      -3,   200,   831,  -376,   787,   787,  -376,  -376,    75,    11,
     617,     3,   181,  -376,   203,   149,   787,   183,   187,  -376,
     787,   204,   787,   831,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,   831,  -376,  -376,  -376,   207,  -376,   787,  -376,   197,
    -376,   104,   617,   787,   211,   831,    96,  -376,  -376,   157,
      19,   169,  -376,  -376,  -376,   165,   168,   172,    -4,    46,
      29,  -376,  -376,   787,   787,   155,   126,  -376,   227,  -376,
     228,   226,   233,   188,   239,   234,   831,  -376,   229,  -376,
    -376,  -376,  -376,  -376,   190,  -376,  -376,  -376,   191,  -376,
     192,   617,    43,   240,   242,    11,   205,   252,  -376,  -376,
     245,  -376,   244,  -376,  -376,   100,  -376,  -376,  -376,  -376,
     250,  -376,    18,  -376,   105,   235,   236,   787,  -376,  -376,
     240,   537,   787,   253,   256,   265,   259,   186,   617,   165,
    -376,  -376,   787,  -376,  -376,  -376,   787,  -376,  -376,   230,
     770,   267,  -376,   270,  -376,   787,  -376,  -376,   215,   275,
    -376,  -376,  -376,   787,  -376,   617,  -376,   219,   238,   205,
    -376,   787,   269,   203,   273,  -376,  -376,   160,   787,  -376,
    -376,  -376,   309,   819,   278,  -376,   537,   280,   132,   617,
     284,   268,   617,   285,  -376,  -376,  -376,  -376,  -376,   286,
    -376,  -376,  -376,   239,  -376,   289,  -376,   617,  -376,   279,
    -376,  -376,   245,   290,   297,  -376,   262,   204,   299,    79,
      23,   110,   303,  -376,   272,   787,  -376,  -376,  -376,  -376,
    -376,   787,  -376,  -376,   617,   305,  -376,   292,   617,   770,
    -376,   787,  -376,  -376,  -376,   315,  -376,   617,   617,  -376,
    -376,   787,   819,  -376,  -376,  -376,   819,   319,   819,  -376,
    -376,  -376,   819,  -376,  -376,  -376,   617,  -376,  -376,  -376,
    -376,   617,   244,  -376,   320,   112,  -376,   819,   110,   321,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,   819,  -376
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    79,     0,    80,     0,     0,     0,
       0,    96,     0,     0,     0,    28,   228,   224,   226,   208,
     218,     8,     0,   219,    73,   207,    69,    85,    82,   230,
     209,     0,     0,     0,   288,     0,     4,     2,    11,     0,
      17,     0,   124,   122,     9,    36,   323,    39,    40,    41,
      42,    43,    74,    75,    76,    78,    77,    44,    90,    91,
      45,    46,    47,    37,   117,   118,   119,   120,   121,   300,
     165,   166,   168,   171,   172,   185,   187,   189,   191,   195,
     199,     0,   206,   213,   220,   163,    53,   123,     3,    83,
     218,   116,   109,     0,   284,     0,     0,     0,   294,    72,
     114,     0,    96,     0,     0,   112,     0,   107,    92,   105,
       0,     0,    33,     0,     0,    26,   300,     0,   227,   300,
     223,     0,   222,   221,   300,     0,   225,   170,     0,    66,
     300,    89,    81,   229,     0,     0,   143,   145,   287,     1,
       8,    10,     9,     7,    16,    19,    18,   322,     0,     0,
     299,   251,     0,     0,   162,     0,   176,   175,   177,   179,
     181,   183,   174,   178,     0,   180,     0,     0,     0,     0,
     193,   194,     0,   198,   197,     0,   204,   203,   202,   201,
       0,   205,     0,    15,   245,   211,   213,    59,    61,    65,
      64,     0,    62,    55,    58,    54,    63,    57,    56,    60,
      49,     0,     0,     0,    15,    13,   217,     0,     0,   261,
      28,     0,   293,   250,     0,     0,    95,    97,     0,     0,
       0,     0,     0,   236,   291,     0,     0,     0,     0,    23,
       0,   297,     0,     0,   253,   256,   257,   216,   233,   234,
     214,     0,   231,   232,   215,    71,    68,     0,    84,     0,
     152,     0,     0,     0,     0,     0,   323,    38,   111,   300,
       0,   167,   169,   184,   182,   173,   186,   188,   190,   192,
     196,   200,   239,     0,     0,     0,   271,    14,   264,   267,
     266,     0,   242,     0,   306,     0,     0,   212,    53,    51,
      50,    48,   115,   110,     0,   285,   259,   260,     0,    22,
       0,     0,   294,    87,     0,     0,     0,   103,    99,    94,
     309,   101,   128,   108,   104,   290,    35,    34,   235,    32,
      30,    25,    28,    24,   303,     0,     0,     0,    67,    70,
      87,     0,   147,     0,   138,     0,   130,   143,     0,   144,
     321,   298,     0,   316,   317,   237,     0,   268,   270,   263,
       0,     0,   238,   245,   240,   245,   210,    52,     0,     0,
      21,    20,   292,     0,   113,     0,    93,     0,     0,   308,
     106,     0,   126,   291,     0,    31,    27,    26,   302,   252,
     254,   255,     0,     0,   312,    88,   155,     0,   151,     0,
       0,   140,     0,     0,   142,   141,   164,   269,   262,   320,
     319,   265,   241,   306,   244,   247,    12,     0,    86,   132,
     100,   102,   309,     0,     0,   289,     0,   297,     0,   281,
      28,   275,   157,   159,   158,   311,   310,   154,   153,   148,
     149,     0,   146,   134,     0,     0,   133,   136,     0,     0,
     304,   249,   243,   246,   258,     0,   307,     0,     0,    29,
     295,     0,     0,   280,   278,   279,     0,     0,     0,   274,
     272,   273,     0,   156,   150,   137,     0,   135,   129,   318,
     248,     0,   128,   125,   303,   283,   161,     0,   277,   315,
     139,   131,   127,   301,   282,   160,   276,   314,   313
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -376,  -376,  -376,  -376,  -376,   301,  -376,   136,   302,  -376,
     306,  -376,  -203,   -34,    45,  -376,  -376,  -106,  -376,    37,
       1,   199,  -376,   152,    68,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,    27,  -376,  -376,
    -376,  -376,   257,   263,    53,     0,   150,    66,  -376,    17,
    -376,  -376,  -376,  -376,  -376,   -99,  -376,  -376,  -376,   -62,
    -376,  -376,  -376,    39,   125,  -376,  -376,  -376,  -197,    -5,
    -376,  -375,  -376,    -1,  -376,  -149,   246,    -8,  -376,  -376,
      12,   212,   214,   223,  -376,   208,  -376,   218,  -376,   -68,
    -376,  -376,   209,  -376,  -376,  -376,  -376,  -376,   354,  -376,
    -376,  -376,  -376,  -376,    47,    48,  -376,  -376,    -6,   -10,
    -376,  -376,  -376,   357,  -376,    52,  -322,  -376,   -76,   281,
    -376,   -71,  -110,  -376,  -376,  -376,    -7,    33,   106,    -2,
     -89,   -67,    13,     2,    41,   -69,  -321,  -376,   -20,   179
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    36,    37,    38,    39,    40,   275,    41,    42,
      43,   211,   113,   231,   114,   375,   229,   115,   225,   386,
     250,    46,    47,   288,   200,   201,    48,   129,   328,    49,
      50,    51,    52,    53,    54,    55,    56,   364,   248,    57,
      58,    59,   103,   104,   309,   310,   107,   311,   108,   109,
      60,    61,    62,    63,    64,   372,    65,    66,    67,   334,
     391,   436,    68,   254,   136,   335,   431,   432,   251,   387,
     421,   479,   423,    69,   154,    70,    71,    72,    73,   166,
      74,    75,    76,    77,   172,    78,   175,    79,   180,    80,
      81,    82,   185,    83,   120,   121,   125,   117,    84,   126,
     122,    85,   186,   283,   284,   285,   442,   443,    99,    86,
     118,   379,   234,    87,   298,   277,   278,   347,   459,   460,
     461,   453,   454,   455,    95,    88,    89,   316,   213,   323,
     151,   381,   354,   370,   329,   463,   279,   280,   401,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    45,    94,   260,   101,   224,   235,   300,   422,   238,
     123,   296,   106,   181,   127,   116,   119,   124,   132,    93,
      98,   100,    98,   312,   138,   130,   131,   236,   399,   400,
     239,   135,   137,  -296,   187,   243,   110,    44,   456,    45,
     227,   246,   150,   170,   188,   102,   342,   152,   111,   208,
     167,   176,   112,   167,   189,   336,   190,   182,    92,   212,
     233,   191,   306,   203,   206,   -98,   307,   171,   153,   111,
     299,   207,   111,   112,   111,   142,   112,   475,   112,   192,
     153,   476,   214,   478,   193,   209,     3,   183,   184,   308,
      96,  -296,   177,   204,   228,   194,   203,   195,   205,    97,
     173,     5,   485,   196,   361,   178,     7,   179,   197,   223,
     198,   174,   271,   233,   199,   150,   305,   399,   400,   452,
     218,   378,    15,    16,   232,   150,   105,   245,    17,    18,
     222,    19,    90,   241,    22,   332,    23,   333,   429,   233,
     153,   395,    25,   233,   241,   203,   233,   262,   430,   259,
     458,   111,   452,  -286,   102,   112,   346,    29,    30,    -5,
     233,    29,   134,    34,   139,   143,   348,    -6,   409,     2,
     341,   147,   149,   150,   155,   167,   169,   215,   265,   202,
     168,   289,   276,   282,   290,   210,   219,   221,   220,   226,
     230,   289,   433,   240,   290,   437,   237,   244,   247,   297,
     252,   292,   253,   276,   255,   304,   295,   257,   286,   373,
     444,   263,   264,   303,   380,   301,   377,   457,   356,   315,
     322,   258,   317,   327,   302,   318,   338,   325,   345,   321,
     272,   324,   293,   419,   424,   326,   314,   465,   319,     3,
     331,   468,   320,   349,   350,    98,   330,   351,  -244,   355,
     472,   473,   137,    98,   273,   353,   363,   365,   368,   191,
     307,   369,   352,   358,   359,   360,   374,   339,   389,   480,
     371,   406,   343,   344,   481,    15,    16,   382,   383,     3,
     392,    17,    18,   390,    19,    90,   393,    22,   402,    23,
     407,   281,   410,   411,   425,    25,   414,   416,   428,   434,
     438,   435,   439,   424,   441,   447,   445,   424,   274,   424,
      29,    30,   448,   424,   451,    15,    16,   449,     3,   462,
     466,    17,    18,   332,    19,    90,   384,    22,   424,    23,
     471,   388,    45,   153,   477,    25,   378,   487,   424,   141,
     294,   396,   144,   417,  -305,   397,   256,   145,   276,   276,
      29,    30,   282,   291,   404,    16,   357,   385,   366,   216,
      17,    18,   408,    19,    90,   217,    22,   376,    23,   412,
     413,   313,   367,   482,    25,   467,   394,   418,   337,   266,
     269,   427,   267,   133,     1,     2,     3,    45,     4,    29,
      30,     5,   268,   270,     6,   287,     7,     8,   146,   261,
     403,   398,   486,   405,   484,   242,   415,   483,   362,     9,
     488,    10,    11,    12,   446,   450,   440,    13,    14,   469,
       0,     0,    15,    16,   384,   426,     0,     0,    17,    18,
     464,    19,    20,    21,    22,   340,    23,     0,   276,    24,
     470,     0,    25,     0,    26,    27,     0,    28,     0,     0,
     474,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,    32,    33,    34,     1,     2,     3,     0,     4,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,    11,    12,     0,     0,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,    18,
       0,    19,    90,   140,    22,     0,    23,     0,     0,    24,
       0,     0,    25,     0,    26,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,    32,    33,    34,     1,     2,     3,     0,     4,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,    11,    12,     0,     0,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,    18,
       0,    19,    90,     0,    22,     0,    23,     0,     0,    24,
       0,     0,    25,     0,    26,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,    32,    33,    34,     1,     0,     3,     0,     4,     0,
       0,     0,     0,     0,     6,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,    11,    12,     0,     0,     0,     0,    14,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    17,    18,
       0,    19,    90,   249,    22,     0,    23,     0,     0,    24,
       0,     0,    25,     0,    26,    27,     1,    28,     3,     0,
       4,     0,     0,     0,     0,     0,     6,    29,    30,     8,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,    11,    12,     0,     0,     0,     0,
      14,     3,     0,     0,    15,    16,     0,     0,     0,     0,
      17,    18,     0,    19,    90,     0,    22,     0,    23,     3,
       0,    24,     0,     0,    25,     0,    26,    27,     0,    28,
       0,   281,     0,     0,     0,     0,     0,    15,    16,    29,
      30,     0,     0,    17,    18,    34,    19,    90,     0,    22,
       0,    23,     0,     0,     0,    15,    16,    25,     0,     3,
       0,    17,    18,   128,    19,    90,     0,    22,     0,    23,
       0,     0,    29,    30,   273,    25,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    90,     0,    22,     3,    23,
       0,     0,    15,    16,     0,    25,     0,     0,    17,    18,
       3,    19,    90,     0,    22,     0,    23,     0,     0,     0,
      29,    30,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   420,    16,     0,    29,    30,     0,
      17,    18,     0,    19,    90,     0,    22,    16,    23,     0,
       0,     0,    17,    18,    25,    19,    90,     0,     0,     0,
      23,     0,     0,   156,     0,     0,    25,     0,     0,    29,
      30,   157,   158,   159,     0,     0,   160,     0,   161,     0,
       0,    29,    30,   162,   163,     0,     0,     0,     0,     0,
       0,   164,   165
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,   152,    10,   111,   116,   210,   383,   119,
      17,   208,    13,    81,    22,    16,    17,    18,    28,     2,
       8,     9,    10,   220,    34,    26,    27,   116,   350,   350,
     119,    32,    33,    15,     3,   124,    15,     0,    15,    38,
      24,   130,    16,    47,    13,    21,    27,    40,    51,    15,
      10,    22,    55,    10,    23,   252,    25,    21,    55,    16,
      34,    30,    51,    21,     9,    41,    55,    71,    61,    51,
      73,    16,    51,    55,    51,    38,    55,   452,    55,    48,
      61,   456,    42,   458,    53,    51,     9,    51,    52,    78,
      55,    73,    63,    51,    78,    64,    21,    66,    56,    55,
      54,    14,   477,    72,   301,    76,    19,    78,    77,   110,
      79,    65,   180,    34,    83,    16,    41,   439,   439,    40,
     103,    16,    45,    46,    15,    16,    55,   128,    51,    52,
       6,    54,    55,    34,    57,    31,    59,    33,     6,    34,
      61,   338,    65,    34,    34,    21,    34,   155,    16,   150,
      40,    51,    40,     0,    21,    55,    30,    80,    81,     0,
      34,    80,    15,    86,     0,    28,   276,     0,   365,     8,
     259,    75,    16,    16,     5,    10,     4,    42,   166,    16,
      12,   191,   183,   184,   191,    51,    41,    16,    15,    15,
      30,   201,   389,    73,   201,   392,    69,    74,    16,   209,
      15,   202,    16,   204,     6,   215,   207,    56,    24,   315,
     407,    57,    42,   214,   324,    15,   322,   420,   286,    16,
      16,    55,    73,    16,   212,   226,    15,   233,    73,   230,
      55,   232,    55,   382,   383,   241,    55,   434,    55,     9,
      43,   438,    55,    16,    16,   233,   247,    21,    15,    15,
     447,   448,   253,   241,    24,    16,    16,    15,     6,    30,
      55,    16,    74,    73,    73,    73,    16,   255,    15,   466,
      26,    56,   273,   274,   471,    45,    46,    42,    42,     9,
      15,    51,    52,    27,    54,    55,    27,    57,    21,    59,
      15,    21,    73,    55,    16,    65,    27,    24,    18,    15,
      15,    33,    16,   452,    15,    15,    27,   456,    78,   458,
      80,    81,    15,   462,    15,    45,    46,    55,     9,    16,
      15,    51,    52,    31,    54,    55,   327,    57,   477,    59,
      15,   332,   331,    61,    15,    65,    16,    16,   487,    38,
     204,   342,    40,   377,    74,   346,   147,    41,   349,   350,
      80,    81,   353,   201,   355,    46,   288,   330,   305,   102,
      51,    52,   363,    54,    55,   102,    57,   322,    59,   369,
     371,   221,   306,   472,    65,   437,   337,   378,   253,   167,
     172,   386,   168,    29,     7,     8,     9,   386,    11,    80,
      81,    14,   169,   175,    17,   186,    19,    20,    41,   153,
     353,   349,   478,   355,   475,   124,   373,   474,   302,    32,
     479,    34,    35,    36,   412,   417,   403,    40,    41,   439,
      -1,    -1,    45,    46,   425,   384,    -1,    -1,    51,    52,
     431,    54,    55,    56,    57,   256,    59,    -1,   439,    62,
     441,    -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,
     451,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    86,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    86,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      -1,    84,    85,    86,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,     7,    70,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    80,    81,    20,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,     9,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    59,     9,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    70,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    45,    46,    80,
      81,    -1,    -1,    51,    52,    86,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    45,    46,    65,    -1,     9,
      -1,    51,    52,    71,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    80,    81,    24,    65,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,     9,    59,
      -1,    -1,    45,    46,    -1,    65,    -1,    -1,    51,    52,
       9,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,
      80,    81,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    80,    81,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    46,    59,    -1,
      -1,    -1,    51,    52,    65,    54,    55,    -1,    -1,    -1,
      59,    -1,    -1,    29,    -1,    -1,    65,    -1,    -1,    80,
      81,    37,    38,    39,    -1,    -1,    42,    -1,    44,    -1,
      -1,    80,    81,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    11,    14,    17,    19,    20,    32,
      34,    35,    36,    40,    41,    45,    46,    51,    52,    54,
      55,    56,    57,    59,    62,    65,    67,    68,    70,    80,
      81,    82,    84,    85,    86,    88,    89,    90,    91,    92,
      93,    95,    96,    97,   106,   107,   108,   109,   113,   116,
     117,   118,   119,   120,   121,   122,   123,   126,   127,   128,
     137,   138,   139,   140,   141,   143,   144,   145,   149,   160,
     162,   163,   164,   165,   167,   168,   169,   170,   172,   174,
     176,   177,   178,   180,   185,   188,   196,   200,   212,   213,
      55,   160,    55,   136,   160,   211,    55,    55,   167,   195,
     167,   195,    21,   129,   130,    55,   160,   133,   135,   136,
      15,    51,    55,    99,   101,   104,   160,   184,   197,   160,
     181,   182,   187,   213,   160,   183,   186,   164,    71,   114,
     160,   160,   196,   185,    15,   160,   151,   160,   196,     0,
      56,    92,   106,    28,    95,    97,   200,    75,   226,    16,
      16,   217,    40,    61,   161,     5,    29,    37,    38,    39,
      42,    44,    49,    50,    57,    58,   166,    10,    12,     4,
      47,    71,   171,    54,    65,   173,    22,    63,    76,    78,
     175,   176,    21,    51,    52,   179,   189,     3,    13,    23,
      25,    30,    48,    53,    64,    66,    72,    77,    79,    83,
     111,   112,    16,    21,    51,    56,     9,    16,    15,    51,
      51,    98,    16,   215,    42,    42,   129,   130,   136,    41,
      15,    16,     6,   160,   104,   105,    15,    24,    78,   103,
      30,   100,    15,    34,   199,   209,   217,    69,   209,   217,
      73,    34,   206,   217,    74,   160,   217,    16,   125,    56,
     107,   155,    15,    16,   150,     6,   108,    56,    55,   160,
     162,   163,   164,    57,    42,   167,   168,   169,   170,   172,
     174,   176,    55,    24,    78,    94,   160,   202,   203,   223,
     224,    21,   160,   190,   191,   192,    24,   179,   110,   196,
     213,   110,   160,    55,    94,   160,   155,   196,   201,    73,
      99,    15,   167,   160,   196,    41,    51,    55,    78,   131,
     132,   134,   155,   133,    55,    16,   214,    73,   160,    55,
      55,   160,    16,   216,   160,   195,   195,    16,   115,   221,
     160,    43,    31,    33,   146,   152,   155,   151,    15,   167,
     226,   217,    27,   160,   160,    73,    30,   204,   209,    16,
      16,    21,    74,    16,   219,    15,   176,   111,    73,    73,
      73,   155,   215,    16,   124,    15,   131,   134,     6,    16,
     220,    26,   142,   104,    16,   102,   101,   104,    16,   198,
     209,   218,    42,    42,   160,   124,   106,   156,   160,    15,
      27,   147,    15,    27,   150,   155,   160,   160,   202,   203,
     223,   225,    21,   191,   160,   192,    56,    15,   160,   155,
      73,    55,   132,   160,    27,   214,    24,   100,   160,   162,
      45,   157,   158,   159,   162,    16,   221,   156,    18,     6,
      16,   153,   154,   155,    15,    33,   148,   155,    15,    16,
     219,    15,   193,   194,   155,    27,   220,    15,    15,    55,
     216,    15,    40,   208,   209,   210,    15,    99,    40,   205,
     206,   207,    16,   222,   160,   155,    15,   146,   155,   225,
     160,    15,   155,   155,   160,   158,   158,    15,   158,   158,
     155,   155,   142,   218,   208,   158,   205,    16,   222
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   118,   118,   118,   118,   118,   119,
     120,   121,   121,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   189,
     190,   191,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   202,   202,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   212,   213,   213,   214,
     214,   214,   215,   215,   215,   216,   216,   216,   217,   217,
     217,   218,   218,   218,   219,   219,   219,   220,   220,   220,
     221,   221,   221,   222,   222,   222,   223,   224,   225,   225,
     225,   226,   226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       5,     3,     2,     2,     3,     2,     0,     4,     0,     3,
       0,     3,     2,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     0,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     5,     4,     2,     0,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       3,     3,     2,     5,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     4,     2,     1,     2,     1,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     2,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     2,     2,     2,     2,     4,     3,     3,     3,     2,
       2,     3,     1,     4,     1,     0,     1,     0,     2,     1,
       2,     2,     4,     2,     1,     1,     1,     1,     7,     4,
       1,     0,     3,     2,     1,     3,     1,     1,     2,     3,
       1,     0,     1,     1,     5,     4,     3,     2,     1,     1,
       5,     4,     3,     2,     1,     3,     1,     2,     1,     3,
       1,     0,     3,     1,     0,     4,     1,     0,     3,     1,
       0,     5,     1,     0,     3,     1,     0,     3,     1,     0,
       3,     3,     2,     3,     3,     2,     2,     2,     3,     1,
       1,     3,     1,     0
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
        case 66:
#line 166 "parse.y" /* yacc.c:1646  */
    { std::cout << "IN PRINT\n" <<(yyvsp[0].ast)<< std::endl; }
#line 1799 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 422 "parse.y" /* yacc.c:1646  */
    {if ((yyvsp[-1].i)==PLUS) (yyval.ast)=(yyvsp[-2].ast)+(yyvsp[0].ast);else (yyval.ast)=(yyvsp[-2].ast)-(yyvsp[0].ast);}
#line 1805 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 431 "parse.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-1].i)==STAR)
			{
				(yyval.ast)=(yyvsp[-2].ast)*(yyvsp[0].ast);
			}
			else if ((yyvsp[-1].i)==SLASH)
			{
				std::cout<<"fire!"<<std::endl;
				(yyval.ast)=floor((float)(yyvsp[-2].ast)/(float)(yyvsp[0].ast));
			}
			else if ((yyvsp[-1].i)==PERCENT)
			{
				(yyval.ast)=(yyvsp[-2].ast) % (yyvsp[0].ast);
			}
			else if ((yyvsp[-1].i)==DOUBLESLASH)
			{
				(yyval.ast)=(yyvsp[-2].ast) / (yyvsp[0].ast);
			}
		}
#line 1829 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 459 "parse.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-1].i)==PLUS)
			{
				(yyval.ast)=+(yyvsp[0].ast);
			}
			else if((yyvsp[-1].i)==MINUS)
			{
				(yyval.ast)=-(yyvsp[0].ast);
			}
		}
#line 1844 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 478 "parse.y" /* yacc.c:1646  */
    {
		(yyval.ast)=pow((yyvsp[-3].ast),(yyvsp[0].ast));
		}
#line 1852 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 489 "parse.y" /* yacc.c:1646  */
    {
		(yyval.ast)=(yyvsp[-1].ast);
		}
#line 1860 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 497 "parse.y" /* yacc.c:1646  */
    {
		(yyval.ast)=(yyvsp[0].i);
		}
#line 1868 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 1872 "parse.tab.c" /* yacc.c:1646  */
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
#line 702 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

