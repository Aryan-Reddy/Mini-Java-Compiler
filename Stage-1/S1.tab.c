/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "S1.y"

	#include <stdio.h>
	#include<string.h> 


#line 76 "S1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_S1_TAB_H_INCLUDED
# define YY_YY_S1_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CLASS = 259,
    LP1 = 260,
    RP1 = 261,
    LP2 = 262,
    RP2 = 263,
    LP3 = 264,
    RP3 = 265,
    PUBLIC = 266,
    STATIC = 267,
    VOIDD = 268,
    MAIN = 269,
    STRING = 270,
    JUNK = 271,
    SYSPRINT = 272,
    SEMICOLON = 273,
    EXTENDS = 274,
    RETURN = 275,
    COMMA = 276,
    EQUALS = 277,
    IF = 278,
    ELSE = 279,
    WHILE = 280,
    AND = 281,
    NOT = 282,
    GREATER = 283,
    LESS = 284,
    OR = 285,
    DOT = 286,
    MINUS = 287,
    INTO = 288,
    PLUS = 289,
    BY = 290,
    DOTLENGTH = 291,
    THIS = 292,
    NEW = 293,
    INTEGER = 294,
    INTT = 295,
    BOOLL = 296,
    NWLN = 297,
    SPACE = 298,
    TAB = 299,
    DEFEXPR = 300,
    DEFEXPR0 = 301,
    DEFEXPR1 = 302,
    DEFEXPR2 = 303,
    DEFSTMT = 304,
    DEFSTMT0 = 305,
    DEFSTMT1 = 306,
    DEFSTMT2 = 307,
    EOFF = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "S1.y"

	char* text;
	int val;
	char* ptr;

#line 188 "S1.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_S1_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    37,    41,    45,    49,    55,    61,    67,
      71,    75,    79,    83,    88,    92,    96,   100,   104,   108,
     112,   116,   120,   124,   131,   135,   139,   143,   149,   153,
     156,   160,   164,   168,   172,   176,   180,   184,   189,   193,
     197,   201,   205,   212,   216,   220,   224,   228,   232,   236,
     240,   244,   248,   252,   256,   260,   268,   272,   276,   280,
     284,   288,   292,   296,   304,   308,   312,   316,   320,   324,
     328,   332,   339,   343,   347,   351,   358,   362
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CLASS", "LP1", "RP1",
  "LP2", "RP2", "LP3", "RP3", "PUBLIC", "STATIC", "VOIDD", "MAIN",
  "STRING", "JUNK", "SYSPRINT", "SEMICOLON", "EXTENDS", "RETURN", "COMMA",
  "EQUALS", "IF", "ELSE", "WHILE", "AND", "NOT", "GREATER", "LESS", "OR",
  "DOT", "MINUS", "INTO", "PLUS", "BY", "DOTLENGTH", "THIS", "NEW",
  "INTEGER", "INTT", "BOOLL", "NWLN", "SPACE", "TAB", "DEFEXPR",
  "DEFEXPR0", "DEFEXPR1", "DEFEXPR2", "DEFSTMT", "DEFSTMT0", "DEFSTMT1",
  "DEFSTMT2", "EOFF", "$accept", "Goal", "left1", "right1", "MainClass",
  "TypeDeclaration", "left2", "right2", "MethodDeclaration", "left3",
  "right3", "deep1", "left4", "right4", "Type", "Statement", "statement2",
  "left5", "right5", "deep2", "Expression", "PrimaryExpression",
  "MacroDefinition", "MacroDefStatement", "deep3", "MacroDefExpression",
  "Identifier", "Integer", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -120,    41,    70,  -120,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    38,  -120,  -120,  -120,  -120,    36,    40,
      42,    46,    57,    58,    59,    61,    63,    13,    23,    38,
      77,    13,    75,    13,    13,    13,    84,    13,    13,    33,
    -120,  -120,    82,    48,    90,   102,   103,   104,    89,   122,
     109,  -120,    13,   118,    13,    34,   137,    13,    13,    21,
     139,    13,    19,   141,   130,   126,    34,    34,  -120,    16,
    -120,  -120,   144,   140,   146,  -120,    34,   147,   126,  -120,
     150,   151,   152,   155,    21,    27,    21,   153,   143,  -120,
       9,    13,  -120,  -120,   163,    13,   171,   172,  -120,   170,
     175,  -120,    34,   156,   165,   166,   159,    13,    34,    34,
      34,    34,  -120,    34,   179,   187,   190,   183,    34,    34,
      34,  -120,  -120,    34,    34,    34,   185,   191,   189,  -120,
      19,  -120,   184,    19,   182,   126,   196,  -120,    34,   197,
     199,  -120,    34,    34,    34,    34,   202,  -120,  -120,  -120,
    -120,   205,  -120,  -120,  -120,    34,   206,  -120,  -120,   209,
     210,   211,   212,   213,   194,  -120,    21,  -120,    13,  -120,
      10,   217,  -120,    34,   219,  -120,  -120,  -120,  -120,  -120,
    -120,    34,  -120,   198,   214,    21,   203,    21,    21,   204,
     215,  -120,   223,   222,  -120,   224,   226,  -120,   227,    34,
    -120,   228,  -120,   216,  -120,  -120,    34,  -120,    19,    13,
    -120,  -120,  -120,  -120,    21,   220,   229,  -120,    13,   233,
    -120,  -120,   234,  -120,   235,  -120,   225,   230,   120,    19,
     238,   231,    13,    27,    13,    34,    34,   232,  -120,   239,
     236,  -120,   237,   240,   241,  -120,   244,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     4,    65,    64,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,    12,     0,     0,     0,     0,     0,    59,     0,
      77,    57,     0,    53,    58,    56,     0,     0,     0,    36,
       0,     0,     0,     0,    22,     0,    22,     0,    26,    25,
       0,     0,    27,    10,     0,     0,     0,     0,    62,     0,
       0,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    38,     0,     0,     0,     0,     0,     0,
       0,    67,    23,    38,     0,     0,     0,     0,     0,     8,
       0,    13,     0,    12,     0,    70,     0,    63,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    48,    49,    47,
      50,     0,    39,    41,    74,     0,     0,    28,    37,     0,
       0,     0,     0,     0,     0,    68,    22,    24,     0,    11,
       0,     0,    71,     0,     0,    61,    51,    43,    45,    46,
      44,    38,    55,    40,     0,    22,     0,     0,     0,     0,
       0,    29,     0,     0,     9,     0,     0,    60,     0,     0,
      75,     0,    30,    32,    34,    35,     0,    69,    15,     0,
      72,    54,    42,    66,     0,     0,     0,    16,     0,     0,
      33,    31,     0,    18,     0,    20,    17,     0,    22,     0,
       0,     0,     0,    27,     0,     0,     0,     0,    19,     0,
       0,    21,     0,     0,     0,    14,     0,     7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   242,  -120,  -120,   160,   111,  -120,  -120,
    -120,  -120,  -120,   -74,  -119,  -102,  -120,  -114,  -120,  -120,
     -41,    -9,  -120,  -120,   -65,  -120,    -4,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    28,    13,    29,    62,    90,   131,   216,
     217,   226,   228,    83,    91,    84,   117,   151,   152,   183,
     153,    73,    14,    15,    96,    16,    74,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      18,    19,    20,    21,    22,    23,    24,    25,    26,   162,
     122,   168,   126,   116,    72,   158,    17,   129,   194,    17,
     130,   130,    17,    39,    17,    97,    98,    43,    79,    45,
      46,    47,   123,    49,    50,   114,   124,    17,    80,    66,
      51,     3,    27,    30,    81,    31,    82,    32,    63,   125,
      65,    33,    52,    77,    78,    85,    99,    87,    92,    88,
      89,    67,    34,    35,    36,   100,    37,   198,    38,    54,
     172,    68,    69,    70,     4,    71,    40,   159,   160,   161,
      85,    44,    85,   163,   164,   203,   204,   132,    42,   218,
      48,   135,   192,   140,    53,    55,    59,   174,   141,   147,
     148,   149,   150,   146,   141,   141,   141,   141,    56,   232,
     234,   201,   220,    85,   184,     5,     6,     7,     8,     9,
      10,    11,    12,    17,    57,    58,    92,    79,    60,    92,
      61,    64,   196,   177,   178,   179,   180,    80,   141,   141,
     141,   141,    76,    81,    94,    82,    86,    95,    93,   102,
     101,   113,   128,   115,   231,   118,   119,   120,   212,   127,
      88,    89,    85,   121,   193,   215,   103,   104,   134,   105,
     106,   107,   108,   109,   110,   111,   112,   136,   137,   138,
     139,    85,   142,    85,    85,   154,    17,   143,   144,   145,
      79,   157,   155,   165,   239,   240,   156,   171,   166,   167,
      80,   173,   169,   175,    92,   219,    81,   181,    82,   176,
      85,   182,   191,   185,   223,   186,   187,   188,   189,   199,
     200,   202,   205,   190,   233,    92,   195,   208,   237,   197,
     238,   207,   210,   211,   209,   222,   213,   206,   221,   224,
     214,   225,   227,   235,   170,   242,   229,   230,   245,   246,
     241,   236,   247,   133,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,     8,     9,    10,    11,    12,   123,
      84,   130,    86,    78,    55,   117,     3,     8,     8,     3,
      11,    11,     3,    27,     3,    66,    67,    31,     7,    33,
      34,    35,     5,    37,    38,    76,     9,     3,    17,     5,
       7,     0,     4,     7,    23,     5,    25,     5,    52,    22,
      54,     5,    19,    57,    58,    59,    40,    61,    62,    40,
      41,    27,     5,     5,     5,    69,     5,   181,     5,    21,
     135,    37,    38,    39,     4,    41,    53,   118,   119,   120,
      84,     6,    86,   124,   125,   187,   188,    91,    11,   208,
       6,    95,   166,   102,    12,     5,     7,   138,   102,   108,
     109,   110,   111,   107,   108,   109,   110,   111,     6,   228,
     229,   185,   214,   117,   155,    45,    46,    47,    48,    49,
      50,    51,    52,     3,    21,    21,   130,     7,     6,   133,
      21,    13,   173,   142,   143,   144,   145,    17,   142,   143,
     144,   145,     5,    23,    14,    25,     7,    21,     7,     9,
       6,     5,     9,     6,   228,     5,     5,     5,   199,     6,
      40,    41,   166,     8,   168,   206,    26,    27,     5,    29,
      30,    31,    32,    33,    34,    35,    36,     6,     6,     9,
       5,   185,    26,   187,   188,     6,     3,    22,    22,    30,
       7,     8,     5,     8,   235,   236,     6,    15,     7,    10,
      17,     5,    18,     6,   208,   209,    23,     5,    25,    10,
     214,     6,    18,     7,   218,     6,     6,     6,     6,    21,
       6,    18,    18,    10,   228,   229,     9,     5,   232,    10,
     234,     8,     6,     6,    10,     6,     8,    22,    18,     6,
      24,     7,     7,     5,   133,     6,    21,    17,     8,     8,
      18,    20,     8,    93,    18,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,     0,     4,    45,    46,    47,    48,    49,
      50,    51,    52,    58,    76,    77,    79,     3,    80,    80,
      80,    80,    80,    80,    80,    80,    80,     4,    57,    59,
       7,     5,     5,     5,     5,     5,     5,     5,     5,    80,
      53,    57,    11,    80,     6,    80,    80,    80,     6,    80,
      80,     7,    19,    12,    21,     5,     6,    21,    21,     7,
       6,    21,    60,    80,    13,    80,     5,    27,    37,    38,
      39,    41,    74,    75,    80,    81,     5,    80,    80,     7,
      17,    23,    25,    67,    69,    80,     7,    80,    40,    41,
      61,    68,    80,     7,    14,    21,    78,    74,    74,    40,
      80,     6,     9,    26,    27,    29,    30,    31,    32,    33,
      34,    35,    36,     5,    74,     6,    78,    70,     5,     5,
       5,     8,    67,     5,     9,    22,    67,     6,     9,     8,
      11,    62,    80,    60,     5,    80,     6,     6,     9,     5,
      75,    80,    26,    22,    22,    30,    80,    75,    75,    75,
      75,    71,    72,    74,     6,     5,     6,     8,    69,    74,
      74,    74,    71,    74,    74,     8,     7,    10,    68,    18,
      61,    15,    78,     5,    74,     6,    10,    75,    75,    75,
      75,     5,     6,    73,    74,     7,     6,     6,     6,     6,
      10,    18,    67,    80,     8,     9,    74,    10,    71,    21,
       6,    67,    18,    69,    69,    18,    22,     8,     5,    10,
       6,     6,    74,     8,    24,    74,    63,    64,    68,    80,
      69,    18,     6,    80,     6,     7,    65,     7,    66,    21,
      17,    67,    68,    80,    68,     5,    20,    80,    80,    74,
      74,    18,     6,    18,    18,     8,     8,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    60,    61,    61,    62,    63,    63,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     2,     0,     2,    21,     6,     8,
       0,     4,     0,     2,    13,     0,     1,     3,     0,     4,
       0,     4,     0,     2,     3,     1,     1,     1,     3,     4,
       5,     7,     5,     7,     5,     5,     0,     2,     0,     1,
       2,     0,     3,     4,     4,     4,     4,     3,     3,     3,
       3,     4,     2,     1,     6,     4,     1,     1,     1,     1,
       5,     4,     2,     3,     1,     1,    11,     7,     8,    10,
       2,     3,    11,     7,     8,    10,     1,     1
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
#line 32 "S1.y"
                                   {
	printf("hello2\n");
	return 0;
}
#line 1525 "S1.tab.c"
    break;

  case 3:
#line 37 "S1.y"
                  {
	
}
#line 1533 "S1.tab.c"
    break;

  case 4:
#line 41 "S1.y"
                        {
	
}
#line 1541 "S1.tab.c"
    break;

  case 5:
#line 45 "S1.y"
                   {
	
}
#line 1549 "S1.tab.c"
    break;

  case 6:
#line 51 "S1.y"
{	
	
}
#line 1557 "S1.tab.c"
    break;

  case 7:
#line 56 "S1.y"
{	
	
}
#line 1565 "S1.tab.c"
    break;

  case 8:
#line 62 "S1.y"
{
	
	
}
#line 1574 "S1.tab.c"
    break;

  case 9:
#line 67 "S1.y"
                                                           {
	
}
#line 1582 "S1.tab.c"
    break;

  case 10:
#line 71 "S1.y"
                  {
	
}
#line 1590 "S1.tab.c"
    break;

  case 11:
#line 75 "S1.y"
                                  {
	
}
#line 1598 "S1.tab.c"
    break;

  case 12:
#line 79 "S1.y"
                   {
	
}
#line 1606 "S1.tab.c"
    break;

  case 13:
#line 83 "S1.y"
                           {
	
}
#line 1614 "S1.tab.c"
    break;

  case 14:
#line 88 "S1.y"
                                                                                                          {
	
}
#line 1622 "S1.tab.c"
    break;

  case 15:
#line 92 "S1.y"
                  {
	
}
#line 1630 "S1.tab.c"
    break;

  case 16:
#line 96 "S1.y"
         {
	
}
#line 1638 "S1.tab.c"
    break;

  case 17:
#line 100 "S1.y"
                              {
	
}
#line 1646 "S1.tab.c"
    break;

  case 18:
#line 104 "S1.y"
                  {
	
}
#line 1654 "S1.tab.c"
    break;

  case 19:
#line 108 "S1.y"
                               {
	
}
#line 1662 "S1.tab.c"
    break;

  case 20:
#line 112 "S1.y"
                  {
	
}
#line 1670 "S1.tab.c"
    break;

  case 21:
#line 116 "S1.y"
                                   {
	
}
#line 1678 "S1.tab.c"
    break;

  case 22:
#line 120 "S1.y"
                   {
	
}
#line 1686 "S1.tab.c"
    break;

  case 23:
#line 124 "S1.y"
                  {
	
}
#line 1694 "S1.tab.c"
    break;

  case 24:
#line 131 "S1.y"
                    {
	
}
#line 1702 "S1.tab.c"
    break;

  case 25:
#line 135 "S1.y"
       {
	
}
#line 1710 "S1.tab.c"
    break;

  case 26:
#line 139 "S1.y"
      {
	
}
#line 1718 "S1.tab.c"
    break;

  case 27:
#line 143 "S1.y"
            {
	
}
#line 1726 "S1.tab.c"
    break;

  case 28:
#line 149 "S1.y"
                               {
	
}
#line 1734 "S1.tab.c"
    break;

  case 29:
#line 153 "S1.y"
                                         {

}
#line 1742 "S1.tab.c"
    break;

  case 30:
#line 156 "S1.y"
                                        {

}
#line 1750 "S1.tab.c"
    break;

  case 31:
#line 160 "S1.y"
                                                            {

}
#line 1758 "S1.tab.c"
    break;

  case 32:
#line 164 "S1.y"
                                   {

}
#line 1766 "S1.tab.c"
    break;

  case 33:
#line 168 "S1.y"
                                                 {

}
#line 1774 "S1.tab.c"
    break;

  case 34:
#line 172 "S1.y"
                                     {

}
#line 1782 "S1.tab.c"
    break;

  case 35:
#line 176 "S1.y"
                                     {	

}
#line 1790 "S1.tab.c"
    break;

  case 36:
#line 180 "S1.y"
                       {
	
}
#line 1798 "S1.tab.c"
    break;

  case 37:
#line 184 "S1.y"
                       {
	
}
#line 1806 "S1.tab.c"
    break;

  case 38:
#line 189 "S1.y"
                  {
	
}
#line 1814 "S1.tab.c"
    break;

  case 39:
#line 193 "S1.y"
         {

}
#line 1822 "S1.tab.c"
    break;

  case 40:
#line 197 "S1.y"
                          {
	
}
#line 1830 "S1.tab.c"
    break;

  case 41:
#line 201 "S1.y"
                  {
	
}
#line 1838 "S1.tab.c"
    break;

  case 42:
#line 205 "S1.y"
                         {
 	
}
#line 1846 "S1.tab.c"
    break;

  case 43:
#line 212 "S1.y"
                                                         {
	
}
#line 1854 "S1.tab.c"
    break;

  case 44:
#line 216 "S1.y"
                                               {

}
#line 1862 "S1.tab.c"
    break;

  case 45:
#line 220 "S1.y"
                                                       {

}
#line 1870 "S1.tab.c"
    break;

  case 46:
#line 224 "S1.y"
                                                        {

}
#line 1878 "S1.tab.c"
    break;

  case 47:
#line 228 "S1.y"
                                                 {

}
#line 1886 "S1.tab.c"
    break;

  case 48:
#line 232 "S1.y"
                                                  {

}
#line 1894 "S1.tab.c"
    break;

  case 49:
#line 236 "S1.y"
                                                 {

}
#line 1902 "S1.tab.c"
    break;

  case 50:
#line 240 "S1.y"
                                               {

}
#line 1910 "S1.tab.c"
    break;

  case 51:
#line 244 "S1.y"
                                                    {

}
#line 1918 "S1.tab.c"
    break;

  case 52:
#line 248 "S1.y"
                                    {

}
#line 1926 "S1.tab.c"
    break;

  case 53:
#line 252 "S1.y"
                          {

}
#line 1934 "S1.tab.c"
    break;

  case 54:
#line 256 "S1.y"
                                                       {

}
#line 1942 "S1.tab.c"
    break;

  case 55:
#line 260 "S1.y"
                                 {

}
#line 1950 "S1.tab.c"
    break;

  case 56:
#line 268 "S1.y"
                            {
	
}
#line 1958 "S1.tab.c"
    break;

  case 57:
#line 272 "S1.y"
        {

}
#line 1966 "S1.tab.c"
    break;

  case 58:
#line 276 "S1.y"
             {

}
#line 1974 "S1.tab.c"
    break;

  case 59:
#line 280 "S1.y"
       {

}
#line 1982 "S1.tab.c"
    break;

  case 60:
#line 284 "S1.y"
                              {

}
#line 1990 "S1.tab.c"
    break;

  case 61:
#line 288 "S1.y"
                         {

}
#line 1998 "S1.tab.c"
    break;

  case 62:
#line 292 "S1.y"
                 {

}
#line 2006 "S1.tab.c"
    break;

  case 63:
#line 296 "S1.y"
                     {

}
#line 2014 "S1.tab.c"
    break;

  case 64:
#line 304 "S1.y"
                                     {
	
}
#line 2022 "S1.tab.c"
    break;

  case 65:
#line 308 "S1.y"
                    {
	
}
#line 2030 "S1.tab.c"
    break;

  case 66:
#line 312 "S1.y"
                                                                                                {
	
}
#line 2038 "S1.tab.c"
    break;

  case 67:
#line 316 "S1.y"
                                                     {
	
	}
#line 2046 "S1.tab.c"
    break;

  case 68:
#line 320 "S1.y"
                                                                {
	
	}
#line 2054 "S1.tab.c"
    break;

  case 69:
#line 324 "S1.y"
                                                                                 {
	
	}
#line 2062 "S1.tab.c"
    break;

  case 70:
#line 328 "S1.y"
                         {
	
}
#line 2070 "S1.tab.c"
    break;

  case 71:
#line 332 "S1.y"
                                 {
	
	}
#line 2078 "S1.tab.c"
    break;

  case 72:
#line 339 "S1.y"
                                                                                                      {
	
}
#line 2086 "S1.tab.c"
    break;

  case 73:
#line 343 "S1.y"
                                                         {
	
	}
#line 2094 "S1.tab.c"
    break;

  case 74:
#line 347 "S1.y"
                                                                    {
	
	}
#line 2102 "S1.tab.c"
    break;

  case 75:
#line 351 "S1.y"
                                                                                     {
	
	}
#line 2110 "S1.tab.c"
    break;

  case 76:
#line 358 "S1.y"
                        {
	
}
#line 2118 "S1.tab.c"
    break;

  case 77:
#line 362 "S1.y"
                  {
	
}
#line 2126 "S1.tab.c"
    break;


#line 2130 "S1.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp);
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
#line 366 "S1.y"


int yyerror(char* s){
	printf("//Failed to parse input code\n");
	return 0;
}

int main(int argc, char **argv){
	
	yyparse();

	return 0;
}

