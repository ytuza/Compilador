/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "calc.y"


#include <stdio.h>
#include <stdlib.h>


extern int yylex();
extern int yyparse();
extern FILE* yyin;



void yyerror(const char* s);

/* Line 371 of yacc.c  */
#line 83 "calc.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "calc.tab.h".  */
#ifndef YY_YY_CALC_TAB_H_INCLUDED
# define YY_YY_CALC_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_FLOAT = 259,
     T_BOOL = 260,
     T_PLUS = 261,
     T_MINUS = 262,
     T_MULTIPLY = 263,
     T_DIVIDE = 264,
     T_LEFT = 265,
     T_RIGHT = 266,
     T_NEWLINE = 267,
     T_QUIT = 268,
     T_LESS = 269,
     T_GREATER = 270,
     T_LESS_E = 271,
     T_GREATER_E = 272,
     T_EQUAL = 273,
     T_NOT_EQUAL = 274,
     T_AND = 275,
     T_OR = 276,
     T_NOT = 277,
     T_IF = 278,
     T_ELSE = 279,
     T_WHILE = 280,
     N_INT = 281,
     N_BOOL = 282,
     N_CHAR = 283,
     N_STRING = 284,
     N_FLOAT = 285,
     T_STRING = 286,
     T_RETURN = 287,
     T_COMEN = 288,
     T_END = 289,
     T_LOOP = 290,
     T_COMMA = 291,
     T_COLON = 292,
     N_FUN = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 17 "calc.y"


	int ival;
	float fval;
	bool bval;

	
	
	
	



/* Line 387 of yacc.c  */
#line 178 "calc.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CALC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 206 "calc.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    12,    15,    18,
      20,    22,    25,    27,    31,    34,    38,    42,    46,    50,
      54,    58,    62,    66,    70,    74,    78,    82,    86,    90,
      92,    96,   100,   104,   108,   112,   115,   119,   123,   127,
     131,   135,   139,   143,   147,   151,   153,   157,   161,   164,
     168,   172,   178,   186,   191,   197,   203,   209,   211,   213,
     215,   218,   220,   222,   224,   226,   228,   230,   232,   234,
     236,   238,   240,   245,   250,   255,   260,   265,   270,   275,
     279,   281,   285,   286,   289,   293,   294,   297,   301,   304,
     313,   324,   332
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    -1,    40,    41,    -1,    -1,    42,    13,
      -1,    -1,    43,    12,    -1,    43,    42,    -1,    60,    -1,
      44,    -1,    55,    12,    -1,     5,    -1,    10,    45,    11,
      -1,    22,    45,    -1,    47,    14,    47,    -1,    46,    14,
      46,    -1,    47,    15,    47,    -1,    46,    15,    46,    -1,
      47,    16,    47,    -1,    46,    16,    46,    -1,    47,    17,
      47,    -1,    46,    17,    46,    -1,    47,    18,    47,    -1,
      46,    18,    46,    -1,    47,    19,    47,    -1,    46,    19,
      46,    -1,    45,    20,    45,    -1,    45,    21,    45,    -1,
       4,    -1,    46,     6,    46,    -1,    46,     7,    46,    -1,
      46,     8,    46,    -1,    46,     9,    46,    -1,    10,    46,
      11,    -1,     7,    46,    -1,    47,     6,    46,    -1,    47,
       7,    46,    -1,    47,     8,    46,    -1,    47,     9,    46,
      -1,    46,     6,    47,    -1,    46,     7,    47,    -1,    46,
       8,    47,    -1,    46,     9,    47,    -1,    47,     9,    47,
      -1,     3,    -1,    47,     6,    47,    -1,    47,     7,    47,
      -1,     7,    47,    -1,    47,     8,    47,    -1,    10,    47,
      11,    -1,    23,    45,    12,    59,    34,    -1,    23,    45,
      12,    59,    24,    59,    34,    -1,    23,    12,    59,    34,
      -1,    23,    47,    12,    59,    34,    -1,    25,    45,    12,
      59,    35,    -1,    25,    12,    12,    59,    35,    -1,    46,
      -1,    47,    -1,    45,    -1,    32,    50,    -1,    32,    -1,
      48,    -1,    49,    -1,    54,    -1,    51,    -1,    61,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      26,    31,    18,    47,    -1,    30,    31,    18,    46,    -1,
      27,    31,    18,    45,    -1,    26,    31,    18,    46,    -1,
      30,    31,    18,    47,    -1,    26,    31,    18,    45,    -1,
      30,    31,    18,    45,    -1,    31,    37,    53,    -1,    55,
      -1,    55,    36,    56,    -1,    -1,    55,    12,    -1,    55,
      12,    57,    -1,    -1,    52,    12,    -1,    52,    12,    58,
      -1,    57,    58,    -1,    38,    31,    10,    56,    11,    12,
      59,    34,    -1,    38,    31,    10,    56,    11,    37,    53,
      12,    59,    34,    -1,    38,    10,    56,    11,    12,    59,
      34,    -1,    31,    10,    56,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    59,    63,    64,    68,    69,    70,    73,
      73,    74,    77,    78,    79,    80,    81,    82,    83,    85,
      86,    87,    88,    90,    91,    92,    93,    95,    96,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   118,   119,   120,   121,   122,
     123,   126,   127,   128,   129,   134,   135,   140,   140,   140,
     141,   141,   143,   144,   145,   145,   145,   147,   147,   147,
     147,   147,   149,   150,   151,   152,   153,   154,   155,   160,
     162,   163,   166,   167,   168,   169,   170,   171,   173,   177,
     178,   179,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_FLOAT", "T_BOOL", "T_PLUS",
  "T_MINUS", "T_MULTIPLY", "T_DIVIDE", "T_LEFT", "T_RIGHT", "T_NEWLINE",
  "T_QUIT", "T_LESS", "T_GREATER", "T_LESS_E", "T_GREATER_E", "T_EQUAL",
  "T_NOT_EQUAL", "T_AND", "T_OR", "T_NOT", "T_IF", "T_ELSE", "T_WHILE",
  "N_INT", "N_BOOL", "N_CHAR", "N_STRING", "N_FLOAT", "T_STRING",
  "T_RETURN", "T_COMEN", "T_END", "T_LOOP", "T_COMMA", "T_COLON", "N_FUN",
  "$accept", "calculation", "exitp", "programa", "decl", "global",
  "bool_expression", "mixed_expression", "expression", "cmdif", "cmdwhile",
  "exp", "cmdreturn", "comando", "tipobase", "cmdatrib", "parametro",
  "params", "bld", "blc", "bloco", "funcao", "chamada", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    42,    42,    43,
      43,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    47,    47,    47,
      47,    48,    48,    48,    48,    49,    49,    50,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    55,
      56,    56,    57,    57,    57,    58,    58,    58,    59,    60,
      60,    60,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     2,     1,
       1,     2,     1,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     2,     3,
       3,     5,     7,     4,     5,     5,     5,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     3,
       1,     3,     0,     2,     3,     0,     2,     3,     2,     8,
      10,     7,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     4,     1,     0,     0,     3,     0,     6,    10,     0,
       9,     0,     0,     0,     5,     7,     8,    11,    67,    68,
      69,    70,    71,    79,    80,     0,     0,     0,     0,     0,
      81,    82,     0,     0,    85,     0,    82,     0,    82,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    65,     0,
      64,    88,    66,    91,     0,     0,    84,    45,    29,    12,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    57,    58,    60,    85,    89,
      82,     0,    35,    48,     0,     0,     0,     0,    14,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,     0,     0,    82,    82,     0,     0,     0,     0,    87,
       0,     0,     0,    13,    34,    50,    53,     0,    27,    28,
      30,    40,    31,    41,    32,    42,    33,    43,    16,     0,
      18,    20,    22,    24,    26,    36,    46,    37,    47,    38,
      49,    39,    44,     0,     0,     0,    15,    17,    19,    21,
      23,    25,     0,     0,    77,    75,    72,    74,    78,    73,
      76,    92,    90,    82,    51,    54,    48,     0,     0,     0,
       0,    56,    55,     0,    46,    47,    49,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     6,     7,     8,    64,    65,   139,    46,
      47,    77,    48,    49,    23,    50,    33,    25,    34,    51,
      35,    10,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -40
static const yytype_int16 yypact[] =
{
     -40,     2,   -40,   -30,    -2,   -40,    12,    -3,   -40,     3,
     -40,   231,    -1,    26,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     5,    32,    -1,    -1,    45,    56,
     -40,    -1,     7,   100,    77,    84,    -1,   231,    -1,    89,
     144,    54,   112,   114,   109,   154,   -40,   -40,   -40,   138,
     -40,   -40,   -40,   -40,   118,   141,   -40,   -40,   -40,   -40,
     110,   154,    -1,   154,    27,   205,   163,   143,    85,   219,
     142,   145,   147,    -1,    -7,   205,   219,   -40,    77,   -40,
      -1,   110,    37,    51,     6,   177,   191,   128,    -7,    -1,
     154,   154,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,    -1,    88,    88,    88,
      88,    88,    88,    -1,    -1,   154,   154,   154,   156,   -40,
     134,   233,   239,   -40,   -40,   -40,   -40,   -14,    -7,    -7,
      37,    51,    37,    51,   -40,   -40,   -40,   -40,   129,   209,
     129,   129,   129,   129,   129,    37,    51,    37,    51,   -40,
     -40,   -40,   -40,   139,    88,    88,    73,    73,    73,    73,
      73,    73,   152,   155,    -7,   205,   219,    -7,    -7,   205,
     219,   -40,   -40,    -1,   -40,   -40,   166,   245,    88,    88,
      88,   -40,   -40,   167,   166,   166,   -40,   -40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -40,   182,   -40,   -40,   -29,    29,   -39,   -40,
     -40,   -40,   -40,   -40,   192,   -40,    11,   -23,   165,   126,
     -31,   -40,   -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    69,     2,    29,    30,    54,    76,    11,    12,    15,
     173,    68,     9,    90,    91,    17,    74,   123,     9,    36,
     174,    83,    86,    24,    69,    14,    90,    91,     3,    13,
       3,    87,    84,     3,    88,     4,    26,    24,    24,    89,
       4,    27,   122,    28,    37,    94,    95,    90,    91,   120,
     118,    69,    69,   131,   133,   135,   137,    31,   127,   104,
     105,   128,   129,   146,   148,   150,   152,    32,   156,   157,
     158,   159,   160,   161,    75,   153,   166,    69,   170,   178,
     179,   180,   162,   163,    24,    70,   164,   167,   168,    82,
      85,    57,    57,    58,    59,   154,    60,   114,   155,    61,
      39,    62,    40,    41,    42,    90,    91,    43,    44,    45,
     121,    63,    38,    57,    58,   176,   177,    60,    53,    73,
      81,   130,   132,   134,   136,   138,   140,   141,   142,   143,
     144,   145,   147,   149,   151,    92,    93,    94,    95,   184,
     185,   186,   183,    71,   165,    72,   169,    57,    58,    59,
      78,    60,    79,    80,    61,   113,    67,    57,    58,    59,
     115,    60,   126,   116,    61,   117,    63,   171,   172,   102,
     103,   104,   105,   175,   180,   106,    63,   107,   108,   109,
     110,   111,   112,    92,    93,    94,    95,   181,   124,    16,
     182,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   187,   125,    56,   119,   107,   108,   109,   110,   111,
     112,    92,    93,    94,    95,   102,   103,   104,   105,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    55,
       0,     0,     0,   107,   108,   109,   110,   111,   112,    92,
      93,    94,    95,     0,   124,   102,   103,   104,   105,     0,
     125,   178,   179,   180,     0,     0,   125,    18,    19,    20,
      21,    22
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      39,    40,     0,    26,    27,    36,    45,    37,    10,    12,
      24,    40,     1,    20,    21,    12,    45,    11,     7,    12,
      34,    60,    61,    12,    63,    13,    20,    21,    31,    31,
      31,    62,    61,    31,    63,    38,    10,    26,    27,    12,
      38,    36,    81,    11,    37,     8,     9,    20,    21,    80,
      73,    90,    91,    92,    93,    94,    95,    12,    89,     8,
       9,    90,    91,   102,   103,   104,   105,    11,   107,   108,
     109,   110,   111,   112,    45,   106,   115,   116,   117,     6,
       7,     8,   113,   114,    73,    31,   115,   116,   117,    60,
      61,     3,     3,     4,     5,     7,     7,    12,    10,    10,
      23,    12,    25,    26,    27,    20,    21,    30,    31,    32,
      81,    22,    12,     3,     4,   154,   155,     7,    34,    10,
      10,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     6,     7,     8,     9,   178,
     179,   180,   173,    31,   115,    31,   117,     3,     4,     5,
      12,     7,    34,    12,    10,    12,    12,     3,     4,     5,
      18,     7,    34,    18,    10,    18,    22,    11,    34,     6,
       7,     8,     9,    34,     8,    12,    22,    14,    15,    16,
      17,    18,    19,     6,     7,     8,     9,    35,    11,     7,
      35,    14,    15,    16,    17,    18,    19,     6,     7,     8,
       9,    34,    11,    38,    78,    14,    15,    16,    17,    18,
      19,     6,     7,     8,     9,     6,     7,     8,     9,    14,
      15,    16,    17,    18,    19,     6,     7,     8,     9,    37,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,     6,
       7,     8,     9,    -1,    11,     6,     7,     8,     9,    -1,
      11,     6,     7,     8,    -1,    -1,    11,    26,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,     0,    31,    38,    41,    42,    43,    44,    55,
      60,    37,    10,    31,    13,    12,    42,    12,    26,    27,
      28,    29,    30,    53,    55,    56,    10,    36,    11,    56,
      56,    12,    11,    55,    57,    59,    12,    37,    12,    23,
      25,    26,    27,    30,    31,    32,    48,    49,    51,    52,
      54,    58,    61,    34,    59,    53,    57,     3,     4,     5,
       7,    10,    12,    22,    45,    46,    47,    12,    45,    47,
      31,    31,    31,    10,    45,    46,    47,    50,    12,    34,
      12,    10,    46,    47,    45,    46,    47,    59,    45,    12,
      20,    21,     6,     7,     8,     9,    14,    15,    16,    17,
      18,    19,     6,     7,     8,     9,    12,    14,    15,    16,
      17,    18,    19,    12,    12,    18,    18,    18,    56,    58,
      59,    46,    47,    11,    11,    11,    34,    59,    45,    45,
      46,    47,    46,    47,    46,    47,    46,    47,    46,    47,
      46,    46,    46,    46,    46,    46,    47,    46,    47,    46,
      47,    46,    47,    59,     7,    10,    47,    47,    47,    47,
      47,    47,    59,    59,    45,    46,    47,    45,    45,    46,
      47,    11,    34,    24,    34,    34,    47,    47,     6,     7,
       8,    35,    35,    59,    47,    47,    47,    34
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
/* Line 1792 of yacc.c  */
#line 77 "calc.y"
    { (yyval.bval) = (yyvsp[(1) - (1)].bval); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 78 "calc.y"
    { (yyval.bval) = (yyvsp[(2) - (3)].bval); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 79 "calc.y"
    { (yyval.bval) = !((yyvsp[(2) - (2)].bval)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 80 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) < (yyvsp[(3) - (3)].ival);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 81 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) < (yyvsp[(3) - (3)].fval);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 82 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) > (yyvsp[(3) - (3)].ival);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 83 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) > (yyvsp[(3) - (3)].fval);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 85 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) <= (yyvsp[(3) - (3)].ival);}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 86 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) <= (yyvsp[(3) - (3)].fval);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 87 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) >= (yyvsp[(3) - (3)].ival);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 88 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) >= (yyvsp[(3) - (3)].fval);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 90 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) != (yyvsp[(3) - (3)].ival);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 91 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) != (yyvsp[(3) - (3)].fval);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 92 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].ival) != (yyvsp[(3) - (3)].ival);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 93 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].fval) != (yyvsp[(3) - (3)].fval);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 95 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].bval) && (yyvsp[(3) - (3)].bval);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 96 "calc.y"
    {(yyval.bval) = (yyvsp[(1) - (3)].bval) || (yyvsp[(3) - (3)].bval);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 100 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (1)].fval); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 101 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) + (yyvsp[(3) - (3)].fval); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 102 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) - (yyvsp[(3) - (3)].fval); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 103 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) * (yyvsp[(3) - (3)].fval); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 104 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) / (yyvsp[(3) - (3)].fval); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 105 "calc.y"
    { (yyval.fval) = (yyvsp[(2) - (3)].fval); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 106 "calc.y"
    { (yyval.fval) = (-1) * (yyvsp[(2) - (2)].fval); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 107 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].ival) + (yyvsp[(3) - (3)].fval); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 108 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].ival) - (yyvsp[(3) - (3)].fval); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 109 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].ival) * (yyvsp[(3) - (3)].fval); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 110 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].ival) / (yyvsp[(3) - (3)].fval); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 111 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) + (yyvsp[(3) - (3)].ival); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 112 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) - (yyvsp[(3) - (3)].ival); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 113 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) * (yyvsp[(3) - (3)].ival); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 114 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) / (yyvsp[(3) - (3)].ival); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 115 "calc.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].ival) / (float)(yyvsp[(3) - (3)].ival); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 118 "calc.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 119 "calc.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival) + (yyvsp[(3) - (3)].ival); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 120 "calc.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival) - (yyvsp[(3) - (3)].ival); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 121 "calc.y"
    { (yyval.ival) = (-1) * (yyvsp[(2) - (2)].ival); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 122 "calc.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival) * (yyvsp[(3) - (3)].ival); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 123 "calc.y"
    { (yyval.ival) = (yyvsp[(2) - (3)].ival); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 128 "calc.y"
    {printf("falta expresion luego del if \n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 129 "calc.y"
    {printf("falta expresion bool luego del if \n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 135 "calc.y"
    {printf("falta expresion luego del while \n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 143 "calc.y"
    {printf("se reconocio un IF  \n");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 144 "calc.y"
    {printf("se reconocio un while \n");}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 149 "calc.y"
    {printf("Se asigno un int como %i \n",(yyvsp[(4) - (4)].ival)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 150 "calc.y"
    {printf("Se asigno un float como %f \n",(yyvsp[(4) - (4)].fval));}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 151 "calc.y"
    {printf("Se asigno un booleano  como %i \n",(yyvsp[(4) - (4)].bval));}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 152 "calc.y"
    {printf("Error float a int\n");}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 153 "calc.y"
    {printf("Error int a float\n");}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 154 "calc.y"
    {printf("Error bool a int\n");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 155 "calc.y"
    {printf("Error bool a float\n");}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 177 "calc.y"
    {printf("se reconocio funcion \n");}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 178 "calc.y"
    {printf("se reconocio funcion \n");}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 179 "calc.y"
    {printf("Falta id de la funcion \n");}
    break;


/* Line 1792 of yacc.c  */
#line 1899 "calc.tab.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 187 "calc.y"


int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));



	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	//exit(1);
}