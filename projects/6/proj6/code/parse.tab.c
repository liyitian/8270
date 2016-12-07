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
#line 2 "parse.y" /* yacc.c:339  */

  #include <iostream>
  #include <cmath>
  #include <algorithm>
  #include <iomanip>
  #include "symbolTableManager.h" 
  #include "astchild.h" 
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
    int scopelevel = 0;
    int ExeNow= 0;// decide where to exe func
	void yyerror (char const *);

#line 81 "parse.tab.c" /* yacc.c:339  */

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

union YYSTYPE
{
#line 17 "parse.y" /* yacc.c:355  */

    AstNode* ast;
    double d;
    int i;
    char* c;
    std::vector<AstNode*>* vec;

#line 216 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   920

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  326
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  492

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
       0,    56,    56,    57,    58,    67,    68,    71,    74,    75,
      78,    79,    82,    83,    86,    87,    90,    91,    94,    95,
      98,    98,   112,   113,   116,   117,   120,   121,   124,   125,
     128,   129,   132,   133,   136,   137,   140,   143,   144,   147,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   161,
     193,   201,   202,   205,   209,   215,   219,   223,   227,   231,
     235,   236,   237,   238,   239,   240,   241,   247,   247,   255,
     258,   259,   265,   266,   269,   272,   275,   276,   277,   278,
     279,   282,   285,   288,   292,   295,   298,   299,   302,   303,
     306,   307,   310,   311,   314,   317,   318,   321,   322,   325,
     326,   329,   330,   331,   334,   335,   338,   339,   342,   345,
     346,   349,   350,   353,   360,   369,   370,   373,   374,   377,
     378,   379,   380,   381,   382,   383,   384,   387,   388,   391,
     392,   395,   396,   399,   400,   403,   404,   407,   408,   411,
     412,   415,   416,   419,   422,   423,   426,   427,   430,   431,
     434,   435,   438,   439,   443,   444,   450,   455,   461,   462,
     465,   466,   469,   470,   479,   480,   483,   484,   487,   488,
     491,   492,   495,   496,   499,   500,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   517,   518,   521,
     522,   525,   526,   529,   530,   533,   534,   537,   538,   547,
     551,   557,   558,   591,   595,   599,   603,   609,   620,   623,
     627,   631,   637,   641,   653,   654,   657,   661,   662,   663,
     664,   676,   680,   684,   687,   688,   691,   692,   695,   696,
     699,   700,   703,   704,   707,   708,   711,   712,   715,   716,
     719,   720,   721,   724,   727,   728,   729,   732,   733,   736,
     737,   740,   741,   744,   748,   751,   752,   755,   756,   759,
     760,   763,   764,   767,   768,   771,   772,   773,   774,   775,
     776,   779,   780,   783,   784,   787,   788,   791,   792,   795,
     796,   799,   800,   804,   805,   808,   809,   812,   813,   816,
     820,   824,   827,   828,   829,   832,   833,   834,   837,   838,
     839,   842,   843,   844,   847,   848,   849,   852,   853,   854,
     858,   859,   860,   863,   864,   865,   868,   869,   870,   873,
     876,   879,   880,   881,   884,   885,   886
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
  "decorators", "decorated", "funcdef", "$@1", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "$@2", "opt_test", "opt_test_2", "del_stmt",
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

#define YYPACT_NINF -362

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-362)))

#define YYTABLE_NINF -309

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     350,   807,    50,   807,  -362,    60,  -362,    75,   275,   275,
     275,    97,    77,   807,    50,    15,   807,   236,   807,  -362,
      48,    49,    99,  -362,  -362,  -362,  -362,    66,   807,   807,
     -24,  -362,   128,   807,   807,   807,   148,  -362,  -362,   431,
     127,   154,    33,  -362,  -362,   167,  -362,    95,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   155,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
     157,    41,   169,  -362,   221,   165,   164,   173,    -4,   -15,
      12,  -362,   275,  -362,    40,  -362,  -362,    59,  -362,  -362,
    -362,  -362,   162,  -362,    20,  -362,   117,    27,  -362,   124,
    -362,    26,   139,    23,    50,   143,  -362,   171,  -362,   172,
      32,   807,   106,  -362,   174,     7,   160,    80,   118,  -362,
      83,  -362,   119,  -362,  -362,    93,   120,  -362,  -362,   807,
     807,   175,  -362,  -362,   591,   178,   181,   192,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,   653,   144,   147,
     807,  -362,    99,    99,  -362,    99,  -362,  -362,  -362,  -362,
    -362,   150,  -362,  -362,   163,  -362,   275,   275,   275,   275,
    -362,  -362,   275,  -362,  -362,   275,  -362,  -362,  -362,  -362,
     275,  -362,   149,   692,   750,   185,    40,  -362,  -362,  -362,
    -362,   236,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   236,   807,   158,   692,  -362,  -362,   807,   591,   807,
     168,   275,  -362,   807,   807,  -362,  -362,    72,     8,   591,
      50,   166,  -362,   202,   156,   807,   176,   180,  -362,   807,
     204,   807,   275,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
     275,  -362,  -362,  -362,   206,  -362,   157,   807,  -362,   184,
    -362,    73,   591,   807,   208,   275,    95,  -362,  -362,   157,
      19,   169,  -362,  -362,  -362,   165,   164,   173,    -4,   -15,
      12,  -362,  -362,   807,   807,   188,   135,  -362,   222,  -362,
     225,   223,   227,   177,   232,   234,   275,  -362,   224,  -362,
    -362,  -362,  -362,  -362,   189,  -362,  -362,  -362,   191,    28,
     238,   124,   250,   252,     8,   213,   263,  -362,  -362,   258,
    -362,   251,  -362,  -362,   106,  -362,  -362,  -362,  -362,   260,
    -362,    14,  -362,   105,   241,   243,   807,  -362,  -362,  -362,
     250,   511,   807,   271,   262,   277,   267,   181,   591,   165,
    -362,  -362,   807,  -362,  -362,  -362,   807,  -362,  -362,   692,
     790,   276,  -362,   732,  -362,   807,  -362,  -362,   242,   284,
    -362,   229,   591,  -362,   807,  -362,   591,  -362,   230,   245,
     213,  -362,   807,   278,   202,   280,  -362,  -362,   160,   807,
    -362,  -362,  -362,    99,   839,   290,  -362,   511,   289,    39,
     591,   294,   282,   591,   295,  -362,  -362,  -362,  -362,  -362,
     297,  -362,  -362,  -362,   232,  -362,   296,  -362,   591,  -362,
    -362,  -362,   292,  -362,  -362,   258,   305,   308,  -362,   269,
     204,   313,    63,    22,    17,   320,  -362,   281,   807,  -362,
    -362,  -362,  -362,  -362,   807,  -362,  -362,   591,   322,  -362,
     307,   591,   790,  -362,   807,  -362,  -362,  -362,   324,  -362,
     591,   591,  -362,  -362,   807,   839,  -362,  -362,  -362,   839,
     329,   839,  -362,  -362,  -362,   839,  -362,  -362,  -362,   591,
    -362,  -362,  -362,  -362,   591,   251,  -362,   330,   101,  -362,
     839,    17,   331,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
     839,  -362
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    81,     0,    82,     0,     0,     0,
       0,    98,     0,     0,     0,    29,   231,   227,   229,   210,
     220,     8,     0,   221,   222,    75,   209,    67,    87,    84,
     233,   211,     0,     0,     0,   291,     0,     4,     2,    11,
       0,    17,     0,   126,   124,     9,    37,   326,    40,    41,
      42,    43,    44,    76,    77,    78,    80,    79,    45,    92,
      93,    46,    47,    48,    38,   119,   120,   121,   122,   123,
     303,   167,   168,   170,   173,   174,   187,   189,   191,   193,
     197,   201,     0,   208,   215,   223,   165,    54,   125,     3,
      85,   220,   118,   111,     0,   287,     0,     0,    20,   297,
      74,   116,     0,    98,     0,     0,   114,     0,   109,    94,
     107,     0,     0,    34,     0,     0,    27,   303,     0,   230,
     303,   226,     0,   225,   224,   303,     0,   228,   172,     0,
      71,    91,    83,   232,     0,     0,   145,   147,   290,     1,
       8,    10,     9,     7,    16,    19,    18,   325,     0,     0,
     302,   254,     0,     0,   164,     0,   178,   177,   179,   181,
     183,   185,   176,   180,     0,   182,     0,     0,     0,     0,
     195,   196,     0,   200,   199,     0,   206,   205,   204,   203,
       0,   207,     0,    15,   248,   213,   215,    60,    62,    66,
      65,     0,    63,    56,    59,    55,    64,    58,    57,    61,
      50,     0,     0,     0,    15,    13,   219,     0,     0,   264,
       0,   296,   253,     0,     0,    97,    99,     0,     0,     0,
       0,     0,   239,   294,     0,     0,     0,     0,    24,     0,
     300,     0,     0,   256,   259,   260,   218,   236,   237,   216,
       0,   234,   235,   217,    73,    68,   303,     0,    86,     0,
     154,     0,     0,     0,     0,     0,   326,    39,   113,   303,
       0,   169,   171,   186,   184,   175,   188,   190,   192,   194,
     198,   202,   242,     0,     0,     0,   274,    14,   267,   270,
     269,     0,   245,     0,   309,     0,     0,   214,    54,    52,
      51,    49,   117,   112,     0,   288,   262,   263,     0,    29,
       0,   297,    89,     0,     0,     0,   105,   101,    96,   312,
     103,   130,   110,   106,   293,    36,    35,   238,    33,    31,
      26,    29,    25,   306,     0,     0,     0,    69,    72,    70,
      89,     0,   149,     0,   140,     0,   132,   145,     0,   146,
     324,   301,     0,   319,   320,   240,     0,   271,   273,   266,
       0,     0,   241,   248,   243,   248,   212,    53,     0,     0,
      23,     0,     0,   295,     0,   115,     0,    95,     0,     0,
     311,   108,     0,   128,   294,     0,    32,    28,    27,   305,
     255,   257,   258,     0,     0,   315,    90,   157,     0,   153,
       0,     0,   142,     0,     0,   144,   143,   166,   272,   265,
     323,   322,   268,   244,   309,   247,   250,    12,     0,    22,
      21,    88,   134,   102,   104,   312,     0,     0,   292,     0,
     300,     0,   284,    29,   278,   159,   161,   160,   314,   313,
     156,   155,   150,   151,     0,   148,   136,     0,     0,   135,
     138,     0,     0,   307,   252,   246,   249,   261,     0,   310,
       0,     0,    30,   298,     0,     0,   283,   281,   282,     0,
       0,     0,   277,   275,   276,     0,   158,   152,   139,     0,
     137,   131,   321,   251,     0,   130,   127,   306,   286,   163,
       0,   280,   318,   141,   133,   129,   304,   285,   162,   279,
     317,   316
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -362,  -362,  -362,  -362,   311,  -362,   161,   310,  -362,
     318,  -362,  -362,  -277,   -25,    45,  -362,  -362,  -106,  -362,
      35,     1,   215,  -362,   179,    84,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,    38,
    -362,  -362,  -362,  -362,   270,   272,    70,     6,   159,    76,
    -362,    18,  -362,  -362,  -362,  -362,  -362,   -98,  -362,  -362,
    -362,   -57,  -362,  -362,  -362,    52,   134,  -362,  -362,  -362,
    -194,     5,  -362,  -361,  -362,    -1,  -362,  -147,   240,    -3,
    -362,  -362,     0,   231,   226,   228,  -362,   239,  -362,   233,
    -362,   -69,  -362,  -362,   214,  -362,  -362,  -362,  -362,  -362,
     369,  -362,  -362,  -362,  -362,  -362,    61,    58,  -362,  -362,
      -7,    25,  -362,  -362,  -362,   361,  -362,    67,  -326,  -362,
     -62,   298,  -362,   -56,  -113,  -362,  -362,  -362,    -6,    47,
     123,     9,   -99,   -52,    24,    11,    62,   -45,  -322,  -362,
       2,   190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   275,    42,    43,
      44,   210,   300,   114,   230,   115,   376,   228,   116,   224,
     387,   250,    47,    48,   288,   200,   201,    49,   130,   245,
     327,    50,    51,    52,    53,    54,    55,    56,    57,   365,
     248,    58,    59,    60,   104,   105,   308,   309,   108,   310,
     109,   110,    61,    62,    63,    64,    65,   373,    66,    67,
      68,   334,   392,   439,    69,   254,   136,   335,   434,   435,
     251,   388,   424,   482,   426,    70,   154,    71,    72,    73,
      74,   166,    75,    76,    77,    78,   172,    79,   175,    80,
     180,    81,    82,    83,   185,    84,   121,   122,   126,   118,
      85,   127,   123,    86,   186,   283,   284,   285,   445,   446,
     100,    87,   119,   380,   233,    88,   298,   277,   278,   347,
     462,   463,   464,   456,   457,   458,    96,    89,    90,   315,
     212,   322,   151,   382,   354,   371,   328,   466,   279,   280,
     402,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   102,   234,   260,   223,   237,    99,   101,
      99,   124,   107,   181,   296,   117,   120,   125,   235,   128,
      94,   238,   361,   425,   400,   311,   242,   131,   401,  -299,
     111,   226,   135,   137,   176,    45,   167,   459,   221,   173,
      46,   203,   208,   170,   103,   432,   342,     5,  -289,    -5,
     174,   240,     7,   203,   132,   433,    30,   461,   336,   305,
     138,   182,   187,   306,  -100,   112,   112,   171,   213,   113,
     113,   204,   188,   112,   142,   177,   205,   113,   209,   112,
     153,   152,   189,   113,   190,   227,   307,  -299,   178,   191,
     179,   183,   184,   203,   478,   231,   150,   232,   479,   150,
     481,   360,   153,   455,   332,    93,   333,   192,     3,   150,
     222,   271,   193,   304,   232,    97,   400,   232,   103,   488,
     401,   379,   217,   194,   153,   195,   206,   240,   244,   246,
      98,   196,   106,   207,   167,   232,   197,   129,   198,   232,
     211,   455,   199,   134,   396,    16,   460,   329,   139,   259,
      17,    18,   262,    19,    91,   143,    22,   112,    23,    24,
     341,   113,     2,   348,    26,   346,   265,    -6,   410,   232,
     147,   149,   412,   150,   155,   167,   168,   169,   202,    30,
      31,   214,   276,   282,   218,   290,   219,   236,   220,   225,
     229,   247,   239,   252,   243,   290,   436,   253,   255,   440,
     257,   292,   258,   276,   272,   264,   295,   263,   374,   286,
     381,   301,   302,   293,   447,   378,   289,   356,   314,   299,
     321,   313,   326,   338,   317,   324,   289,   331,   320,   316,
     323,   318,    99,   325,   297,   319,   422,   427,   349,   303,
      99,   350,  -247,   468,   351,     3,   330,   471,   353,   355,
     156,   352,   137,   362,   191,   339,   475,   476,   157,   158,
     159,   345,   358,   160,   359,   161,   364,   366,   306,   369,
     162,   163,   343,   344,   370,   483,   375,   372,   164,   165,
     484,    15,    16,   383,     3,   384,   390,    17,    18,   391,
      19,    91,   393,    22,   394,    23,    24,   403,   407,   408,
     414,    26,   409,   413,   419,   417,   428,   431,   427,   437,
     441,   444,   427,   442,   427,   438,    30,    31,   427,   448,
     450,    16,    35,   451,   452,   385,    17,    18,   454,    19,
      91,   389,    46,   427,    23,    24,   465,   469,   332,   474,
      26,   397,   153,   427,   480,   398,   379,   490,   276,   276,
     141,   144,   282,   420,   405,    30,    31,     1,     2,     3,
     145,     4,   256,   411,     5,   294,   377,     6,   386,     7,
       8,   416,   357,   215,   367,   216,   415,   485,   421,   312,
     291,   368,     9,   470,    10,    11,    12,   337,    46,   395,
      13,    14,   430,   261,   267,    15,    16,   268,   266,   133,
     287,    17,    18,   146,    19,    20,    21,    22,   270,    23,
      24,   269,    25,   406,   404,    26,   399,    27,    28,   489,
      29,   418,   487,   241,   363,   486,   449,   385,   443,   453,
      30,    31,    32,   467,    33,    34,    35,   491,     1,     2,
       3,   276,     4,   473,   472,     5,   340,   429,     6,     0,
       7,     8,     0,   477,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    10,    11,    12,     0,     0,
       0,    13,    14,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,    18,     0,    19,    91,   140,    22,     0,
      23,    24,     0,    25,     0,     0,    26,     0,    27,    28,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,    33,    34,    35,     1,     2,
       3,     0,     4,     0,     0,     5,     0,     0,     6,     0,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    10,    11,    12,     0,     0,
       0,    13,    14,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,    18,     0,    19,    91,     0,    22,     0,
      23,    24,     0,    25,     0,     0,    26,     0,    27,    28,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,    33,    34,    35,     1,     0,
       3,     0,     4,     0,     0,     0,     0,     0,     6,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,    11,    12,     0,     0,
       0,     0,    14,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    17,    18,     0,    19,    91,   249,    22,     0,
      23,    24,     0,    25,     0,     0,    26,     0,    27,    28,
       1,    29,     3,     0,     4,     0,     0,     0,     0,     0,
       6,    30,    31,     8,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,    11,    12,
       0,     0,     0,     0,    14,     0,     0,     0,    15,    16,
       0,     3,     0,     0,    17,    18,     0,    19,    91,     0,
      22,     0,    23,    24,     0,    25,   273,     0,    26,     0,
      27,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,     0,     0,    15,    16,    35,
       0,     3,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,   281,     0,     0,     0,    26,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   281,    30,    31,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,     0,     0,    15,    16,    26,     0,     3,
       0,    17,    18,     0,    19,    91,  -308,    22,     0,    23,
      24,     0,    30,    31,   273,    26,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,     0,    22,     3,    23,
      24,     0,    15,    16,     0,    26,     0,     0,    17,    18,
       0,    19,    91,     0,    22,     0,    23,    24,     0,     0,
      30,    31,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,    16,     0,    30,    31,     0,
      17,    18,     0,    19,    91,     0,    22,     0,    23,    24,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    10,   117,   152,   112,   120,     8,     9,
      10,    17,    13,    82,   208,    16,    17,    18,   117,    22,
       2,   120,   299,   384,   350,   219,   125,    28,   350,    15,
      15,    24,    33,    34,    22,     0,    10,    15,     6,    54,
      39,    21,    15,    47,    21,     6,    27,    14,     0,     0,
      65,    34,    19,    21,    29,    16,    80,    40,   252,    51,
      35,    21,     3,    55,    41,    51,    51,    71,    42,    55,
      55,    51,    13,    51,    39,    63,    56,    55,    51,    51,
      61,    40,    23,    55,    25,    78,    78,    73,    76,    30,
      78,    51,    52,    21,   455,    15,    16,    34,   459,    16,
     461,    73,    61,    40,    31,    55,    33,    48,     9,    16,
     111,   180,    53,    41,    34,    55,   442,    34,    21,   480,
     442,    16,   104,    64,    61,    66,     9,    34,   129,   130,
      55,    72,    55,    16,    10,    34,    77,    71,    79,    34,
      16,    40,    83,    15,   338,    46,   423,   246,     0,   150,
      51,    52,   155,    54,    55,    28,    57,    51,    59,    60,
     259,    55,     8,   276,    65,    30,   166,     0,   362,    34,
      75,    16,   366,    16,     5,    10,    12,     4,    16,    80,
      81,    42,   183,   184,    41,   191,    15,    69,    16,    15,
      30,    16,    73,    15,    74,   201,   390,    16,     6,   393,
      56,   202,    55,   204,    55,    42,   207,    57,   314,    24,
     323,   211,   213,    55,   408,   321,   191,   286,    16,    51,
      16,    55,    16,    15,   225,   232,   201,    43,   229,    73,
     231,    55,   232,   240,   209,    55,   383,   384,    16,   214,
     240,    16,    15,   437,    21,     9,   247,   441,    16,    15,
      29,    74,   253,    15,    30,   255,   450,   451,    37,    38,
      39,    73,    73,    42,    73,    44,    16,    15,    55,     6,
      49,    50,   273,   274,    16,   469,    16,    26,    57,    58,
     474,    45,    46,    42,     9,    42,    15,    51,    52,    27,
      54,    55,    15,    57,    27,    59,    60,    21,    56,    15,
      55,    65,    73,    73,    24,    27,    16,    18,   455,    15,
      15,    15,   459,    16,   461,    33,    80,    81,   465,    27,
      15,    46,    86,    15,    55,   326,    51,    52,    15,    54,
      55,   332,   331,   480,    59,    60,    16,    15,    31,    15,
      65,   342,    61,   490,    15,   346,    16,    16,   349,   350,
      39,    41,   353,   378,   355,    80,    81,     7,     8,     9,
      42,    11,   147,   364,    14,   204,   321,    17,   330,    19,
      20,   372,   288,   103,   304,   103,   370,   475,   379,   220,
     201,   305,    32,   440,    34,    35,    36,   253,   387,   337,
      40,    41,   387,   153,   168,    45,    46,   169,   167,    30,
     186,    51,    52,    42,    54,    55,    56,    57,   175,    59,
      60,   172,    62,   355,   353,    65,   349,    67,    68,   481,
      70,   374,   478,   125,   301,   477,   415,   428,   404,   420,
      80,    81,    82,   434,    84,    85,    86,   482,     7,     8,
       9,   442,    11,   444,   442,    14,   256,   385,    17,    -1,
      19,    20,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,     7,     8,
       9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    86,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
       7,    70,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    80,    81,    20,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,     9,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    24,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    45,    46,    86,
      -1,     9,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    21,    -1,    -1,    -1,    65,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    21,    80,    81,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    45,    46,    65,    -1,     9,
      -1,    51,    52,    -1,    54,    55,    74,    57,    -1,    59,
      60,    -1,    80,    81,    24,    65,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,     9,    59,
      60,    -1,    45,    46,    -1,    65,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    60,    -1,    -1,
      80,    81,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    80,    81,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    11,    14,    17,    19,    20,    32,
      34,    35,    36,    40,    41,    45,    46,    51,    52,    54,
      55,    56,    57,    59,    60,    62,    65,    67,    68,    70,
      80,    81,    82,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    96,    97,   107,   108,   109,   110,   114,
     118,   119,   120,   121,   122,   123,   124,   125,   128,   129,
     130,   139,   140,   141,   142,   143,   145,   146,   147,   151,
     162,   164,   165,   166,   167,   169,   170,   171,   172,   174,
     176,   178,   179,   180,   182,   187,   190,   198,   202,   214,
     215,    55,   162,    55,   138,   162,   213,    55,    55,   169,
     197,   169,   197,    21,   131,   132,    55,   162,   135,   137,
     138,    15,    51,    55,   100,   102,   105,   162,   186,   199,
     162,   183,   184,   189,   215,   162,   185,   188,   166,    71,
     115,   162,   198,   187,    15,   162,   153,   162,   198,     0,
      56,    92,   107,    28,    95,    97,   202,    75,   228,    16,
      16,   219,    40,    61,   163,     5,    29,    37,    38,    39,
      42,    44,    49,    50,    57,    58,   168,    10,    12,     4,
      47,    71,   173,    54,    65,   175,    22,    63,    76,    78,
     177,   178,    21,    51,    52,   181,   191,     3,    13,    23,
      25,    30,    48,    53,    64,    66,    72,    77,    79,    83,
     112,   113,    16,    21,    51,    56,     9,    16,    15,    51,
      98,    16,   217,    42,    42,   131,   132,   138,    41,    15,
      16,     6,   162,   105,   106,    15,    24,    78,   104,    30,
     101,    15,    34,   201,   211,   219,    69,   211,   219,    73,
      34,   208,   219,    74,   162,   116,   162,    16,   127,    56,
     108,   157,    15,    16,   152,     6,   109,    56,    55,   162,
     164,   165,   166,    57,    42,   169,   170,   171,   172,   174,
     176,   178,    55,    24,    78,    94,   162,   204,   205,   225,
     226,    21,   162,   192,   193,   194,    24,   181,   111,   198,
     215,   111,   162,    55,    94,   162,   157,   198,   203,    51,
      99,   169,   162,   198,    41,    51,    55,    78,   133,   134,
     136,   157,   135,    55,    16,   216,    73,   162,    55,    55,
     162,    16,   218,   162,   197,   197,    16,   117,   223,   219,
     162,    43,    31,    33,   148,   154,   157,   153,    15,   169,
     228,   219,    27,   162,   162,    73,    30,   206,   211,    16,
      16,    21,    74,    16,   221,    15,   178,   112,    73,    73,
      73,   100,    15,   217,    16,   126,    15,   133,   136,     6,
      16,   222,    26,   144,   105,    16,   103,   102,   105,    16,
     200,   211,   220,    42,    42,   162,   126,   107,   158,   162,
      15,    27,   149,    15,    27,   152,   157,   162,   162,   204,
     205,   225,   227,    21,   193,   162,   194,    56,    15,    73,
     157,   162,   157,    73,    55,   134,   162,    27,   216,    24,
     101,   162,   164,    45,   159,   160,   161,   164,    16,   223,
     158,    18,     6,    16,   155,   156,   157,    15,    33,   150,
     157,    15,    16,   221,    15,   195,   196,   157,    27,   222,
      15,    15,    55,   218,    15,    40,   210,   211,   212,    15,
     100,    40,   207,   208,   209,    16,   224,   162,   157,    15,
     148,   157,   227,   162,    15,   157,   157,   162,   160,   160,
      15,   160,   160,   157,   157,   144,   220,   210,   160,   207,
      16,   224
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      98,    97,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   107,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   115,   114,   114,
     116,   116,   117,   117,   118,   119,   120,   120,   120,   120,
     120,   121,   122,   123,   123,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   177,   177,   178,   178,   179,
     179,   179,   180,   180,   181,   181,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   191,   192,   193,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   204,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     215,   215,   216,   216,   216,   217,   217,   217,   218,   218,
     218,   219,   219,   219,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   223,   223,   223,   224,   224,   224,   225,
     226,   227,   227,   227,   228,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       0,     6,     3,     2,     2,     3,     2,     0,     4,     0,
       3,     0,     3,     2,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     4,
       2,     0,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     1,     2,     0,
       3,     0,     1,     1,     2,     5,     4,     2,     0,     2,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     3,     3,     2,     5,     2,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     5,     5,
       0,     7,     4,     9,     6,     6,     6,     4,     3,     3,
       0,     3,     0,     5,     3,     0,     3,     1,     3,     1,
       1,     1,     2,     0,     1,     4,     2,     1,     2,     1,
       1,     1,     4,     3,     2,     1,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     2,     2,     2,     4,     3,
       3,     3,     2,     2,     3,     1,     4,     1,     0,     1,
       0,     2,     1,     2,     2,     4,     2,     1,     1,     1,
       1,     7,     4,     1,     0,     3,     2,     1,     3,     1,
       1,     2,     3,     1,     0,     1,     1,     5,     4,     3,
       2,     1,     1,     5,     4,     3,     2,     1,     3,     1,
       2,     1,     3,     1,     0,     3,     1,     0,     4,     1,
       0,     3,     1,     0,     5,     1,     0,     3,     1,     0,
       3,     1,     0,     3,     3,     2,     3,     3,     2,     2,
       2,     3,     1,     1,     3,     1,     0
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
        case 20:
#line 98 "parse.y" /* yacc.c:1661  */
    {scopelevel++;}
#line 1813 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 21:
#line 99 "parse.y" /* yacc.c:1661  */
    {	
		scopelevel--;
		std::string str = std::string((yyvsp[-4].c));
		delete (yyvsp[-4].c);
		(yyvsp[0].ast)->setName(str);
        if (scopelevel==0){
			SymbolTableManager stm* =SymbolTableManager::getinstance();
			stm->getScope()->addSymbol(str,(yyvsp[0].ast));
		}
		(yyval.ast)=(yyvsp[0].ast);
	}
#line 1829 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 162 "parse.y" /* yacc.c:1661  */
    {
  	  switch((yyvsp[-1].i)){
  	  	case PLUSEQUAL:
  	  		(yyval.ast)= new PlusEqualNode((yyvsp[-2].ast),(yyvsp[0].ast));
  	  		break;

  	  	case MINEQUAL:
  	  		
  	  		break;

  	  	case STAREQUAL:

  	  		break;

  	  	case SLASHEQUAL:

  	  		break;

  	  	case PERCENTEQUAL:
  	  		
  	  		break;

  	  	case DOUBLESLASHEQUAL:

  	  		break;

  	  	default:
  	  		break;
  	  }
  	  if (scopelevel==0) (yyval.ast)->eval();
	}
#line 1865 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 194 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)= new AssignNode((yyvsp[-1].ast),(yyvsp[0].ast));
		if (scopelevel==0)
			SymbolTableManager::getInstance().addSymbol((yyvsp[-1].ast)->getName(),(yyvsp[0].ast));
	}
#line 1875 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 206 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=(yyvsp[-1].ast);
	}
#line 1883 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 210 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=nullptr;
	}
#line 1891 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 216 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = PLUSEQUAL;
	}
#line 1899 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 220 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = MINEQUAL;
	}
#line 1907 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 224 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = STAREQUAL;
	}
#line 1915 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 228 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = SLASHEQUAL;
	}
#line 1923 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 232 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = PERCENTEQUAL;
	}
#line 1931 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 242 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = DOUBLESLASHEQUAL;
	}
#line 1939 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 247 "parse.y" /* yacc.c:1661  */
    {ExeNow++;}
#line 1945 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 248 "parse.y" /* yacc.c:1661  */
    { 
    	ExeNow--;
	    (yyval.ast)=new PrintNode((yyvsp[0].ast));
	    if (scopelevel==0){
	    	(yyval.ast)->eval();
	    }
	}
#line 1957 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 255 "parse.y" /* yacc.c:1661  */
    {}
#line 1963 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 260 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast) = new AstNode();
	}
#line 1971 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 266 "parse.y" /* yacc.c:1661  */
    {}
#line 1977 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 269 "parse.y" /* yacc.c:1661  */
    {}
#line 1983 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 272 "parse.y" /* yacc.c:1661  */
    {}
#line 1989 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 81:
#line 282 "parse.y" /* yacc.c:1661  */
    {}
#line 1995 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 285 "parse.y" /* yacc.c:1661  */
    {}
#line 2001 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 83:
#line 289 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=new ReturnNode((yyvsp[0].ast));
	}
#line 2009 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 84:
#line 292 "parse.y" /* yacc.c:1661  */
    {}
#line 2015 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 86:
#line 298 "parse.y" /* yacc.c:1661  */
    {}
#line 2021 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 87:
#line 299 "parse.y" /* yacc.c:1661  */
    {}
#line 2027 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 92:
#line 310 "parse.y" /* yacc.c:1661  */
    {}
#line 2033 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 93:
#line 311 "parse.y" /* yacc.c:1661  */
    {}
#line 2039 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 113:
#line 354 "parse.y" /* yacc.c:1661  */
    {
		std::string str=std::string((yyvsp[0].c));
		delete (yyvsp[0].c);
		(yyvsp[-2].ast)->addName((yyvsp[0].c));
		(yyval.ast)=(yyvsp[-2].ast);
	}
#line 2050 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 114:
#line 361 "parse.y" /* yacc.c:1661  */
    {
		std::string str=std::string((yyvsp[0].c));
		delete (yyvsp[0].c);
		(yyval.ast)=new GlobalNode();
		(yyval.ast)->addName(str);
	}
#line 2061 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 115:
#line 369 "parse.y" /* yacc.c:1661  */
    {}
#line 2067 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 116:
#line 370 "parse.y" /* yacc.c:1661  */
    {}
#line 2073 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 117:
#line 373 "parse.y" /* yacc.c:1661  */
    {}
#line 2079 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 118:
#line 374 "parse.y" /* yacc.c:1661  */
    {}
#line 2085 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 121:
#line 379 "parse.y" /* yacc.c:1661  */
    {}
#line 2091 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 124:
#line 382 "parse.y" /* yacc.c:1661  */
    {}
#line 2097 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 125:
#line 383 "parse.y" /* yacc.c:1661  */
    {}
#line 2103 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 126:
#line 384 "parse.y" /* yacc.c:1661  */
    {}
#line 2109 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 127:
#line 387 "parse.y" /* yacc.c:1661  */
    {}
#line 2115 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 128:
#line 388 "parse.y" /* yacc.c:1661  */
    {}
#line 2121 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 131:
#line 395 "parse.y" /* yacc.c:1661  */
    {}
#line 2127 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 132:
#line 396 "parse.y" /* yacc.c:1661  */
    {}
#line 2133 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 135:
#line 403 "parse.y" /* yacc.c:1661  */
    {}
#line 2139 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 136:
#line 404 "parse.y" /* yacc.c:1661  */
    {}
#line 2145 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 143:
#line 419 "parse.y" /* yacc.c:1661  */
    {}
#line 2151 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 155:
#line 445 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=new SuiteNode((yyvsp[-1].vec));
	}
#line 2159 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 156:
#line 451 "parse.y" /* yacc.c:1661  */
    {
		(yyvsp[-1].ast)->push_back((yyvsp[0].vec));
		(yyval.vec)=(yyvsp[-1].ast);
	}
#line 2168 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 157:
#line 455 "parse.y" /* yacc.c:1661  */
    {
		(yyval.vec)= new std::vector<AstNode*>;
		(yyval.vec).push_back((yyvsp[0].ast));
	}
#line 2177 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 172:
#line 495 "parse.y" /* yacc.c:1661  */
    {}
#line 2183 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 198:
#line 539 "parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[-1].i)==PLUS) 
			(yyval.ast)=new AddNode((yyvsp[-2].ast),(yyvsp[0].ast));
		else if ((yyvsp[-1].i)==MINUS)
			(yyval.ast)=new DecNode((yyvsp[-2].ast),(yyvsp[0].ast));
	}
#line 2194 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 199:
#line 548 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = PLUS;
	}
#line 2202 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 200:
#line 552 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i) = MINUS;
	}
#line 2210 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 202:
#line 559 "parse.y" /* yacc.c:1661  */
    {
			if ((yyvsp[-1].i)==STAR)
			{
				(yyval.ast)=new MulNode((yyvsp[-2].ast),(yyvsp[0].ast));
			}
			else if ((yyvsp[-1].i)==SLASH)
			{
				if ((yyvsp[0].ast)==0){
					std::cerr << "divide number cannot be zero!" <<std::endl;
					exit(0);
				}
				(yyval.ast)=new DivNode((yyvsp[-2].ast),(yyvsp[0].ast));
			}
			else if ((yyvsp[-1].i)==PERCENT)
			{
				if ((yyvsp[0].ast)==0){
					std::cerr << "divide number cannot be zero!" <<std::endl;
					exit(0);
				}
				(yyval.ast)=new ModNode((yyvsp[-2].ast),(yyvsp[0].ast));
			}
			else if ((yyvsp[-1].i)==DOUBLESLASH)
			{
				if ((yyvsp[0].ast)==0){
					std::cerr << "divide number cannot be zero!" <<std::endl;
					exit(0);
				}
				(yyval.ast)=new DoubleSlashNode((yyvsp[-2].ast),(yyvsp[0].ast));
			}
		}
#line 2245 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 203:
#line 592 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=STAR;
	}
#line 2253 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 204:
#line 596 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=SLASH;
	}
#line 2261 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 205:
#line 600 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=PERCENT;
	}
#line 2269 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 206:
#line 604 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=DOUBLESLASH;
	}
#line 2277 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 207:
#line 610 "parse.y" /* yacc.c:1661  */
    {
			if ((yyvsp[-1].i)==PLUS)
			{
				(yyval.ast)=new PosNode((yyvsp[0].ast),nullptr);
			}
			else if((yyvsp[-1].i)==MINUS)
			{
				(yyval.ast)=new NegNode((yyvsp[0].ast),nullptr);
			}
		}
#line 2292 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 209:
#line 624 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=PLUS;
	}
#line 2300 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 210:
#line 628 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=MINUS;
	}
#line 2308 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 211:
#line 632 "parse.y" /* yacc.c:1661  */
    {
		(yyval.i)=TILDE;
	}
#line 2316 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 212:
#line 638 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=new PowNode((yyvsp[-3].ast),(yyvsp[0].ast));
	}
#line 2324 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 213:
#line 642 "parse.y" /* yacc.c:1661  */
    {
		if ((yyvsp[0].ast)!=nullptr){
			(yyval.ast) = new FuncNode((yyvsp[-1].ast)->getName());
			if(scopelevel==0 && ExeNow==0){
				(yyval.ast)->eval();
			}
		}
		else (yyval.ast)=(yyvsp[-1].ast);
	}
#line 2338 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 214:
#line 653 "parse.y" /* yacc.c:1661  */
    {}
#line 2344 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 215:
#line 654 "parse.y" /* yacc.c:1661  */
    {(yyval.ast)=nullptr;}
#line 2350 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 216:
#line 658 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=(yyvsp[-1].ast);
		}
#line 2358 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 217:
#line 661 "parse.y" /* yacc.c:1661  */
    {}
#line 2364 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 218:
#line 662 "parse.y" /* yacc.c:1661  */
    {}
#line 2370 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 219:
#line 663 "parse.y" /* yacc.c:1661  */
    {}
#line 2376 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 220:
#line 665 "parse.y" /* yacc.c:1661  */
    {
		std::string str = std::string((yyvsp[0].c));
		delete (yyvsp[0].c);
		AstNode* node = SymbolTable::getInstance().getAstNode(str);
		if(node) 
			(yyval.ast)= node;
		else {
			(yyval.ast) = new AstNumber('s',0);
			SymbolTable::getInstance().addSymbol(str,(yyval.ast));
		}
	}
#line 2392 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 221:
#line 677 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)= new AstNumber('i',(yyvsp[0].i));
	}
#line 2400 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 222:
#line 681 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)= new AstNumber('d',(yyvsp[0].d));
	}
#line 2408 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 223:
#line 684 "parse.y" /* yacc.c:1661  */
    {}
#line 2414 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 226:
#line 691 "parse.y" /* yacc.c:1661  */
    {}
#line 2420 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 227:
#line 692 "parse.y" /* yacc.c:1661  */
    {}
#line 2426 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 238:
#line 715 "parse.y" /* yacc.c:1661  */
    {}
#line 2432 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 239:
#line 716 "parse.y" /* yacc.c:1661  */
    {}
#line 2438 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 290:
#line 821 "parse.y" /* yacc.c:1661  */
    {
		(yyval.ast)=(yyvsp[0].ast);
	}
#line 2446 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 291:
#line 824 "parse.y" /* yacc.c:1661  */
    {}
#line 2452 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 301:
#line 842 "parse.y" /* yacc.c:1661  */
    {}
#line 2458 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 302:
#line 843 "parse.y" /* yacc.c:1661  */
    {}
#line 2464 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 303:
#line 844 "parse.y" /* yacc.c:1661  */
    {}
#line 2470 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 313:
#line 863 "parse.y" /* yacc.c:1661  */
    {}
#line 2476 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 314:
#line 864 "parse.y" /* yacc.c:1661  */
    {}
#line 2482 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 315:
#line 865 "parse.y" /* yacc.c:1661  */
    {}
#line 2488 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 324:
#line 884 "parse.y" /* yacc.c:1661  */
    {}
#line 2494 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 325:
#line 885 "parse.y" /* yacc.c:1661  */
    {}
#line 2500 "parse.tab.c" /* yacc.c:1661  */
    break;

  case 326:
#line 886 "parse.y" /* yacc.c:1661  */
    {}
#line 2506 "parse.tab.c" /* yacc.c:1661  */
    break;


#line 2510 "parse.tab.c" /* yacc.c:1661  */
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
#line 889 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

