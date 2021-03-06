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
#line 1 "AST.y"

#include <stdio.h>
#include <string.h>
#include "AST.h"

extern int yylineno;
char errMess[55] = "Error";
extern char* yytext;
int yylex(void);
void yyerror (char const *);



#line 84 "AST.tab.c"

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
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_AST_TAB_H_INCLUDED
# define YY_YY_AST_TAB_H_INCLUDED
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
    T_NUM = 258,
    T_DECIMAL = 259,
    T_IDENTIFIER = 260,
    T_CHARACTER = 261,
    T_STRING_LITERAL = 262,
    T_TRUE = 263,
    T_FALSE = 264,
    T_IMPORT = 265,
    T_CLASS = 266,
    T_PACKAGE = 267,
    T_MAIN = 268,
    T_ARGS = 269,
    T_SOP = 270,
    T_TYPEDEF = 271,
    T_STATIC = 272,
    T_NEW = 273,
    T_PUBLIC = 274,
    T_PRIVATE = 275,
    T_PROTECTED = 276,
    T_OC = 277,
    T_CC = 278,
    T_OF = 279,
    T_CF = 280,
    T_OS = 281,
    T_CS = 282,
    T_CHAR = 283,
    T_INT = 284,
    T_FLOAT = 285,
    T_VOID = 286,
    T_STRING = 287,
    T_IF = 288,
    T_ELSE = 289,
    T_FOR = 290,
    T_CONTINUE = 291,
    T_BREAK = 292,
    T_RETURN = 293,
    T_ASSIGN = 294,
    T_ADD_ASSIGN = 295,
    T_SUB_ASSIGN = 296,
    T_MUL_ASSIGN = 297,
    T_DIV_ASSIGN = 298,
    T_ADD = 299,
    T_SUB = 300,
    T_MUL = 301,
    T_DIV = 302,
    T_MOD = 303,
    T_INC_OP = 304,
    T_DEC_OP = 305,
    T_LE = 306,
    T_GE = 307,
    T_EQ = 308,
    T_LT = 309,
    T_GT = 310,
    T_AND_OP = 311,
    T_OR_OP = 312,
    T_NE_OP = 313,
    T_BIT_AND = 314,
    T_BIT_OR = 315,
    T_NOT = 316,
    T_COMMA = 317,
    T_COL = 318,
    T_DOT = 319,
    T_SEMC = 320,
    T_EXP = 321,
    T_QUE = 322,
    T_NE = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "AST.y"

    int number;
    char *string;
    char character;
	float decimal;
	struct node * nd_type;
   	 

#line 214 "AST.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_AST_TAB_H_INCLUDED  */



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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    62,    63,    66,    67,    70,    71,    72,
      73,    76,    79,    82,    83,    84,    87,    90,    91,    92,
      95,    98,    99,   102,   103,   104,   105,   106,   107,   110,
     113,   114,   115,   116,   117,   120,   121,   124,   125,   126,
     129,   130,   131,   134,   135,   136,   139,   140,   141,   144,
     145,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   172,   173,   174,   177,   178,   179,   182,   183,   184,
     187,   190,   191,   194,   197,   198,   201,   202,   205,   208,
     211,   214,   215,   216,   219,   220,   223,   224,   227,   228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUM", "T_DECIMAL", "T_IDENTIFIER",
  "T_CHARACTER", "T_STRING_LITERAL", "T_TRUE", "T_FALSE", "T_IMPORT",
  "T_CLASS", "T_PACKAGE", "T_MAIN", "T_ARGS", "T_SOP", "T_TYPEDEF",
  "T_STATIC", "T_NEW", "T_PUBLIC", "T_PRIVATE", "T_PROTECTED", "T_OC",
  "T_CC", "T_OF", "T_CF", "T_OS", "T_CS", "T_CHAR", "T_INT", "T_FLOAT",
  "T_VOID", "T_STRING", "T_IF", "T_ELSE", "T_FOR", "T_CONTINUE", "T_BREAK",
  "T_RETURN", "T_ASSIGN", "T_ADD_ASSIGN", "T_SUB_ASSIGN", "T_MUL_ASSIGN",
  "T_DIV_ASSIGN", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_INC_OP",
  "T_DEC_OP", "T_LE", "T_GE", "T_EQ", "T_LT", "T_GT", "T_AND_OP",
  "T_OR_OP", "T_NE_OP", "T_BIT_AND", "T_BIT_OR", "T_NOT", "T_COMMA",
  "T_COL", "T_DOT", "T_SEMC", "T_EXP", "T_QUE", "T_NE", "$accept", "S",
  "compilation_unit", "package_statement", "import_statement",
  "package_name", "class_stmt", "modifier", "method_stmnt", "other_method",
  "main_method", "stmnt", "s1", "variable_declaration", "dtypes", "array",
  "ids1", "ids2", "ids3", "ids4", "expression", "rel_e", "arithm_e",
  "float_e", "char_e", "str_e", "id", "if_else", "if_stmt",
  "else_if_blocks", "else_if_block", "for_stmt", "for_args", "loop_conds",
  "loop_init", "arg2", "arg3", "print_stmnt", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,  -110,    31,    64,  -110,    81,    38,  -110,    -3,   107,
    -110,    49,    58,    77,  -110,  -110,  -110,  -110,   132,   139,
    -110,    20,   142,  -110,    83,    85,   127,  -110,  -110,  -110,
     344,  -110,  -110,  -110,  -110,   131,    60,   150,     3,     9,
     150,   134,   135,   150,   150,  -110,   133,     5,  -110,    95,
    -110,  -110,    96,  -110,   337,    46,  -110,   129,  -110,  -110,
      79,    55,   102,  -110,   -32,   141,   112,   136,   151,   117,
     143,   118,  -110,   -28,    23,    12,  -110,  -110,  -110,   153,
      -1,  -110,  -110,  -110,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,  -110,  -110,    -6,   147,   162,
     165,  -110,   150,    75,   184,   150,    60,   186,   150,    42,
     150,   101,   169,   337,  -110,  -110,   171,   130,   194,   173,
     200,  -110,  -110,  -110,  -110,    90,    90,    90,    90,    90,
      90,    90,  -110,   185,  -110,    -6,  -110,  -110,   145,  -110,
    -110,  -110,  -110,   -26,   167,  -110,    90,   174,  -110,   177,
     154,  -110,  -110,    28,   188,   196,    23,   201,   195,   202,
      89,    23,  -110,    75,   204,   207,    42,   101,  -110,  -110,
    -110,  -110,   161,   209,   205,   214,  -110,   220,  -110,  -110,
     215,   199,  -110,   137,   168,    60,   223,   198,   224,   225,
     227,   228,  -110,  -110,    90,  -110,  -110,   231,  -110,  -110,
     247,   248,   206,   233,   237,   275,   234,   236,  -110,   244,
    -110,  -110,  -110,  -110,   241,   249,  -110,   306,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     4,     0,     0,     2,    10,     0,     1,     0,     0,
       5,     0,     0,     0,    13,    14,    15,     3,     0,     0,
       9,     0,     0,    11,     0,     0,     0,     8,     7,    22,
      19,    64,    80,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    21,     0,
      29,    34,     0,    50,    49,    63,    25,    81,    26,    27,
       0,     0,     0,    32,    42,     0,    30,    39,     0,    31,
      42,     0,    33,    42,     0,    93,    67,    68,    12,     0,
       0,    16,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    82,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     0,     0,
       0,    61,    62,    59,    60,    53,    54,    55,    51,    52,
      56,    69,    22,     0,    84,     0,    99,    98,    41,    73,
      76,    40,    43,    71,     0,    38,    37,     0,    41,    71,
      41,    79,    46,    71,     0,     0,    95,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,    22,    22,
      94,    89,     0,     0,     0,     0,    87,     0,    72,    75,
       0,     0,    78,     0,     0,    97,     0,     0,     0,     0,
       0,     0,    83,    88,    96,    90,    22,     0,    22,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
      17,    86,    35,    36,     0,     0,    22,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -109,  -110,   193,  -110,  -110,  -110,    91,  -110,  -110,
     210,   -73,   -36,   -51,   111,   108,   -34,  -110,  -110,  -110,
     144,  -110,  -110,  -110,  -110,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     9,    13,    17,    18,    46,    47,
      81,    30,    48,    49,    50,    51,    66,    62,    63,    72,
      52,    53,    54,   141,   142,   152,    55,    56,    57,    98,
     134,    58,   116,   171,   117,   172,   195,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   112,    11,    64,    67,    70,    73,   103,    32,    76,
      77,   111,     1,   163,    32,    31,   119,    32,   132,     2,
      33,    34,    79,   160,    80,    24,    31,   133,    32,    65,
     120,    33,    34,   -45,    36,    68,     6,   -48,   113,   -74,
      37,    38,    39,    12,    40,    36,   139,    32,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   183,
     184,    43,    44,    31,     7,    32,    25,   167,   138,   143,
     146,   145,    43,    44,   148,   149,   150,   153,   101,   139,
      32,   140,    36,   170,    99,    94,   100,   202,   177,   204,
     205,     8,    31,   -77,    32,    95,    96,    33,    34,    84,
      85,    86,    87,    10,    35,   139,    32,   217,   151,    43,
      44,    36,   178,    19,   176,   178,   178,    37,    38,    39,
     113,    40,    41,    20,    42,   113,    14,    15,    16,   143,
      69,    71,   149,   153,    84,    85,    86,    87,    43,    44,
      31,    21,    32,    22,    23,    33,    34,    26,    27,   194,
      28,    29,    35,    60,    45,    32,    74,    75,    78,    36,
      82,    83,   192,    97,   102,    37,    38,    39,   104,    40,
      41,    31,    42,    32,   105,   106,    33,    34,   107,   108,
     110,   135,   109,    35,   118,   136,    43,    44,   137,   144,
      36,   147,   154,   193,   155,   156,    37,    38,    39,   157,
      40,    41,    45,    42,   158,   159,   164,   161,   174,    31,
     -44,    32,   168,   165,    33,    34,   166,    43,    44,   -47,
     169,    35,   180,   173,   175,   181,   185,   187,    36,   191,
     197,   208,   186,    45,    37,    38,    39,   188,    40,    41,
      31,    42,    32,   189,   190,    33,    34,   196,   198,   199,
     206,   207,    35,   200,   201,    43,    44,   203,   214,    36,
     209,   212,   210,   213,   215,    37,    38,    39,   114,    40,
      41,    45,    42,   216,   179,   182,     0,     0,    31,   162,
      32,     0,     0,    33,    34,   115,    43,    44,     0,     0,
      35,     0,     0,     0,     0,     0,     0,    36,     0,     0,
     211,     0,    45,    37,    38,    39,     0,    40,    41,    31,
      42,    32,     0,     0,    33,    34,     0,     0,     0,     0,
       0,    35,     0,     0,    43,    44,     0,     0,    36,     0,
       0,   218,     0,     0,    37,    38,    39,     0,    40,    41,
      45,    42,     0,     0,     0,     0,     0,    31,     0,    32,
       0,     0,    33,    34,     0,    43,    44,     0,     0,    35,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,    45,    37,    38,    39,     0,    40,    41,     0,    42,
       0,    84,    85,    86,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    43,    44,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
      36,    74,     5,    37,    38,    39,    40,    39,     5,    43,
      44,    39,     5,    39,     5,     3,    17,     5,    24,    12,
       8,     9,    17,   132,    19,     5,     3,    33,     5,    26,
      31,     8,     9,    65,    22,    26,     5,    65,    74,    65,
      28,    29,    30,    46,    32,    22,     4,     5,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,   168,
     169,    49,    50,     3,     0,     5,    46,    39,   102,   103,
     106,   105,    49,    50,   108,   109,   110,   111,    23,     4,
       5,     6,    22,   156,     5,    39,     7,   196,   161,   198,
     199,    10,     3,    65,     5,    49,    50,     8,     9,    44,
      45,    46,    47,    65,    15,     4,     5,   216,     7,    49,
      50,    22,   163,    64,    25,   166,   167,    28,    29,    30,
     156,    32,    33,    65,    35,   161,    19,    20,    21,   163,
      39,    40,   166,   167,    44,    45,    46,    47,    49,    50,
       3,    64,     5,    11,     5,     8,     9,     5,    65,   185,
      65,    24,    15,    22,    65,     5,    22,    22,    25,    22,
      65,    65,    25,    34,    62,    28,    29,    30,    27,    32,
      33,     3,    35,     5,    62,    39,     8,     9,    27,    62,
      62,    34,    39,    15,    31,    23,    49,    50,    23,     5,
      22,     5,    23,    25,    23,    65,    28,    29,    30,     5,
      32,    33,    65,    35,    31,     5,    39,    22,    13,     3,
      65,     5,    24,    39,     8,     9,    39,    49,    50,    65,
      24,    15,    18,    22,    22,    18,    65,    22,    22,    30,
      32,    25,    23,    65,    28,    29,    30,    23,    32,    33,
       3,    35,     5,    23,    29,     8,     9,    24,    24,    24,
       3,     3,    15,    26,    26,    49,    50,    26,    14,    22,
      27,    27,    25,    27,    23,    28,    29,    30,    75,    32,
      33,    65,    35,    24,   163,   167,    -1,    -1,     3,   135,
       5,    -1,    -1,     8,     9,    75,    49,    50,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    65,    28,    29,    30,    -1,    32,    33,     3,
      35,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    49,    50,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    -1,    32,    33,
      65,    35,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    -1,    49,    50,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    65,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    49,    50,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    12,    70,    71,    72,     5,     0,    10,    73,
      65,     5,    46,    74,    19,    20,    21,    75,    76,    64,
      65,    64,    11,     5,     5,    46,     5,    65,    65,    24,
      80,     3,     5,     8,     9,    15,    22,    28,    29,    30,
      32,    33,    35,    49,    50,    65,    77,    78,    81,    82,
      83,    84,    89,    90,    91,    95,    96,    97,   100,   106,
      22,    91,    86,    87,    95,    26,    85,    95,    26,    86,
      95,    86,    88,    95,    22,    22,    95,    95,    25,    17,
      19,    79,    65,    65,    44,    45,    46,    47,    51,    52,
      53,    54,    55,    58,    39,    49,    50,    34,    98,     5,
       7,    23,    62,    39,    27,    62,    39,    27,    62,    39,
      62,    39,    90,    91,    82,    89,   101,   103,    31,    17,
      31,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    24,    33,    99,    34,    23,    23,    95,     4,
       6,    92,    93,    95,     5,    95,    91,     5,    95,    95,
      95,     7,    94,    95,    23,    23,    65,     5,    31,     5,
      80,    22,    99,    39,    39,    39,    39,    39,    24,    24,
      90,   102,   104,    22,    13,    22,    25,    90,    92,    93,
      18,    18,    94,    80,    80,    65,    23,    22,    23,    23,
      29,    30,    25,    25,    91,   105,    24,    32,    24,    24,
      26,    26,    80,    26,    80,    80,     3,     3,    25,    27,
      25,    25,    27,    27,    14,    23,    24,    80,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    75,    76,    76,    76,    77,    78,    78,    78,
      79,    80,    80,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    96,    96,    97,    98,    98,    99,    99,   100,   101,
     102,   103,   103,   103,   104,   104,   105,   105,   106,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     0,     5,     5,     3,
       0,     3,     7,     1,     1,     1,     2,     9,     9,     0,
      13,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,    10,    10,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     1,     1,     2,     2,     2,     2,     3,
       3,     1,     3,     1,     1,     3,     1,     1,     3,     1,
       1,     1,     2,     7,     2,     3,     7,     3,     7,     3,
       3,     1,     1,     0,     1,     0,     1,     0,     4,     4
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
#line 59 "AST.y"
                                      { print_ascii_tree((yyvsp[0].nd_type)); printf(" \n\n ACCEPTED\n");}
#line 1581 "AST.tab.c"
    break;

  case 3:
#line 62 "AST.y"
                                                                          {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1587 "AST.tab.c"
    break;

  case 4:
#line 63 "AST.y"
                                              { (yyval.nd_type) = createnode(0,0, "node"); }
#line 1593 "AST.tab.c"
    break;

  case 12:
#line 79 "AST.y"
                                                                                      {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[-1].nd_type), "class_stmnt");}
#line 1599 "AST.tab.c"
    break;

  case 16:
#line 87 "AST.y"
                                                                                                                                        {(yyval.nd_type) = createnode((yyvsp[-1].nd_type),(yyvsp[0].nd_type), "method_stmnt");}
#line 1605 "AST.tab.c"
    break;

  case 17:
#line 90 "AST.y"
                                                                                                {(yyval.nd_type) = createnode((yyvsp[-8].nd_type),(yyvsp[-1].nd_type), "public_method");}
#line 1611 "AST.tab.c"
    break;

  case 18:
#line 91 "AST.y"
                                                                                                                {(yyval.nd_type) = createnode((yyvsp[-8].nd_type),(yyvsp[-1].nd_type), "static_method");}
#line 1617 "AST.tab.c"
    break;

  case 19:
#line 92 "AST.y"
                                                                                                                                                                                        {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 1623 "AST.tab.c"
    break;

  case 20:
#line 95 "AST.y"
                                                                                                              {(yyval.nd_type) = createnode(0, (yyvsp[-1].nd_type), "main_method"); }
#line 1629 "AST.tab.c"
    break;

  case 21:
#line 98 "AST.y"
                                {(yyval.nd_type) = createnode((yyvsp[-1].nd_type),(yyvsp[0].nd_type), "stmnt");}
#line 1635 "AST.tab.c"
    break;

  case 22:
#line 99 "AST.y"
                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 1641 "AST.tab.c"
    break;

  case 23:
#line 102 "AST.y"
                                        { (yyval.nd_type)=(yyvsp[-1].nd_type) ;}
#line 1647 "AST.tab.c"
    break;

  case 24:
#line 103 "AST.y"
                                                        { (yyval.nd_type)=(yyvsp[-1].nd_type) ;}
#line 1653 "AST.tab.c"
    break;

  case 25:
#line 104 "AST.y"
                                                                        { (yyval.nd_type)=(yyvsp[0].nd_type) ;}
#line 1659 "AST.tab.c"
    break;

  case 26:
#line 105 "AST.y"
                                                                        { (yyval.nd_type)=(yyvsp[0].nd_type) ;}
#line 1665 "AST.tab.c"
    break;

  case 27:
#line 106 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 1671 "AST.tab.c"
    break;

  case 28:
#line 107 "AST.y"
                                                                        {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 1677 "AST.tab.c"
    break;

  case 29:
#line 110 "AST.y"
                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1683 "AST.tab.c"
    break;

  case 30:
#line 113 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1689 "AST.tab.c"
    break;

  case 31:
#line 114 "AST.y"
                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1695 "AST.tab.c"
    break;

  case 32:
#line 115 "AST.y"
                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1701 "AST.tab.c"
    break;

  case 33:
#line 116 "AST.y"
                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1707 "AST.tab.c"
    break;

  case 34:
#line 117 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 1713 "AST.tab.c"
    break;

  case 37:
#line 124 "AST.y"
                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1719 "AST.tab.c"
    break;

  case 39:
#line 126 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1725 "AST.tab.c"
    break;

  case 40:
#line 129 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1731 "AST.tab.c"
    break;

  case 42:
#line 131 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1737 "AST.tab.c"
    break;

  case 43:
#line 134 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1743 "AST.tab.c"
    break;

  case 45:
#line 136 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1749 "AST.tab.c"
    break;

  case 46:
#line 139 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1755 "AST.tab.c"
    break;

  case 48:
#line 141 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1761 "AST.tab.c"
    break;

  case 49:
#line 144 "AST.y"
                                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1767 "AST.tab.c"
    break;

  case 50:
#line 145 "AST.y"
                                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1773 "AST.tab.c"
    break;

  case 51:
#line 148 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "<");}
#line 1779 "AST.tab.c"
    break;

  case 52:
#line 149 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), ">");}
#line 1785 "AST.tab.c"
    break;

  case 53:
#line 150 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "<=");}
#line 1791 "AST.tab.c"
    break;

  case 54:
#line 151 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), ">=");}
#line 1797 "AST.tab.c"
    break;

  case 55:
#line 152 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "==");}
#line 1803 "AST.tab.c"
    break;

  case 56:
#line 153 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "!=");}
#line 1809 "AST.tab.c"
    break;

  case 57:
#line 154 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,0, "true");}
#line 1815 "AST.tab.c"
    break;

  case 58:
#line 155 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,0, "false");}
#line 1821 "AST.tab.c"
    break;

  case 59:
#line 158 "AST.y"
                                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "*");}
#line 1827 "AST.tab.c"
    break;

  case 60:
#line 159 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "/");}
#line 1833 "AST.tab.c"
    break;

  case 61:
#line 160 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "+");}
#line 1839 "AST.tab.c"
    break;

  case 62:
#line 161 "AST.y"
                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type), (yyvsp[0].nd_type), "-");}
#line 1845 "AST.tab.c"
    break;

  case 63:
#line 162 "AST.y"
                                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1851 "AST.tab.c"
    break;

  case 64:
#line 163 "AST.y"
                                                {(yyval.nd_type) = createnode(0,0, yytext);}
#line 1857 "AST.tab.c"
    break;

  case 65:
#line 164 "AST.y"
                                                                {(yyval.nd_type) = createnode((yyvsp[-1].nd_type),0, "++");}
#line 1863 "AST.tab.c"
    break;

  case 66:
#line 165 "AST.y"
                                                                {(yyval.nd_type) = createnode((yyvsp[-1].nd_type),0, "--");}
#line 1869 "AST.tab.c"
    break;

  case 67:
#line 166 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,(yyvsp[0].nd_type), "++");}
#line 1875 "AST.tab.c"
    break;

  case 68:
#line 167 "AST.y"
                                                                {(yyval.nd_type) = createnode(0,(yyvsp[0].nd_type), "--");}
#line 1881 "AST.tab.c"
    break;

  case 69:
#line 168 "AST.y"
                                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1887 "AST.tab.c"
    break;

  case 70:
#line 169 "AST.y"
                                                        {(yyval.nd_type) = (yyvsp[-1].nd_type);}
#line 1893 "AST.tab.c"
    break;

  case 71:
#line 172 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1899 "AST.tab.c"
    break;

  case 72:
#line 173 "AST.y"
                                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1905 "AST.tab.c"
    break;

  case 73:
#line 174 "AST.y"
                                                    {(yyval.nd_type) = createnode(0,0, yytext);}
#line 1911 "AST.tab.c"
    break;

  case 74:
#line 177 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1917 "AST.tab.c"
    break;

  case 75:
#line 178 "AST.y"
                                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1923 "AST.tab.c"
    break;

  case 76:
#line 179 "AST.y"
                                                     {(yyval.nd_type) = createnode(0,0, yytext);}
#line 1929 "AST.tab.c"
    break;

  case 77:
#line 182 "AST.y"
                                                                {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1935 "AST.tab.c"
    break;

  case 78:
#line 183 "AST.y"
                                                        {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "=");}
#line 1941 "AST.tab.c"
    break;

  case 79:
#line 184 "AST.y"
                                                    {(yyval.nd_type) = createnode(0,0, yytext);}
#line 1947 "AST.tab.c"
    break;

  case 80:
#line 187 "AST.y"
                                                        {char *name = (yyvsp[0].string) ; (yyval.nd_type) = createnode(0,0, name);}
#line 1953 "AST.tab.c"
    break;

  case 81:
#line 190 "AST.y"
                                                                                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1959 "AST.tab.c"
    break;

  case 82:
#line 191 "AST.y"
                                                                                                                        {(yyval.nd_type) = createnode((yyvsp[-1].nd_type),(yyvsp[0].nd_type), "IF_ELSE");}
#line 1965 "AST.tab.c"
    break;

  case 83:
#line 194 "AST.y"
                                                                                                {(yyval.nd_type) = createnode((yyvsp[-4].nd_type),(yyvsp[-1].nd_type), "IF");}
#line 1971 "AST.tab.c"
    break;

  case 84:
#line 197 "AST.y"
                                                                                                        {(yyval.nd_type) = (yyvsp[0].nd_type);}
#line 1977 "AST.tab.c"
    break;

  case 85:
#line 198 "AST.y"
                                                                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "ELSE");}
#line 1983 "AST.tab.c"
    break;

  case 86:
#line 201 "AST.y"
                                                                                        {(yyval.nd_type) = createnode((yyvsp[-4].nd_type),(yyvsp[-1].nd_type), "IF");}
#line 1989 "AST.tab.c"
    break;

  case 87:
#line 202 "AST.y"
                                                                                                                        {(yyval.nd_type) = (yyvsp[-1].nd_type);}
#line 1995 "AST.tab.c"
    break;

  case 88:
#line 205 "AST.y"
                                                                                                {(yyval.nd_type) = createnode((yyvsp[-4].nd_type),(yyvsp[-1].nd_type), "FOR");}
#line 2001 "AST.tab.c"
    break;

  case 89:
#line 208 "AST.y"
                                                                                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "FOR_ARGS");}
#line 2007 "AST.tab.c"
    break;

  case 90:
#line 211 "AST.y"
                                                                                                                {(yyval.nd_type) = createnode((yyvsp[-2].nd_type),(yyvsp[0].nd_type), "loop_conds");}
#line 2013 "AST.tab.c"
    break;

  case 91:
#line 214 "AST.y"
                                                                                                                {(yyval.nd_type)=(yyvsp[0].nd_type);}
#line 2019 "AST.tab.c"
    break;

  case 92:
#line 215 "AST.y"
                                                                                                                                {(yyval.nd_type)=(yyvsp[0].nd_type);}
#line 2025 "AST.tab.c"
    break;

  case 93:
#line 216 "AST.y"
                                                                                                                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 2031 "AST.tab.c"
    break;

  case 94:
#line 219 "AST.y"
                                                                                                                                {(yyval.nd_type)=(yyvsp[0].nd_type);}
#line 2037 "AST.tab.c"
    break;

  case 95:
#line 220 "AST.y"
                                                                                                                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 2043 "AST.tab.c"
    break;

  case 96:
#line 223 "AST.y"
                                                                                                                                {(yyval.nd_type)=(yyvsp[0].nd_type);}
#line 2049 "AST.tab.c"
    break;

  case 97:
#line 224 "AST.y"
                                                                                                                                                {(yyval.nd_type) = createnode(0,0, "NULL");}
#line 2055 "AST.tab.c"
    break;


#line 2059 "AST.tab.c"

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
#line 231 "AST.y"


void yyerror (char const *s) {
	fprintf (stderr, "Error: %s\n", s);
  	printf("Error occured at  Line No.  %d\n" , yylineno);
   	printf("Error before : %s\n" , yytext);
}

int yywrap() { 
	return 1;
}

int main() {
	yyparse();
	return 1;
}





