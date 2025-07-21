/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "solidity.y"

#define yylex yylex_debug
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

void yyerror(const char *s);
extern int yylex_debug(void);

char* concatenate(int count, ...) {
    va_list args;
    va_start(args, count);
    
    size_t length = 0;
    for (int i = 0; i < count; i++) {
        char *arg = va_arg(args, char*);
        length += strlen(arg);
    }
    
    char *result = (char*)malloc(length + 1);
    result[0] = '\0';
    
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        char *arg = va_arg(args, char*);
        strcat(result, arg);
    }
    
    va_end(args);
    return result;
}

char* create_number(int num) {
    char *result = (char*)malloc(32);
    sprintf(result, "%d", num);
    return result;
}

#line 112 "solidity.tab.c"

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

#include "solidity.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONTRACT = 3,                   /* CONTRACT  */
  YYSYMBOL_FUNCTION = 4,                   /* FUNCTION  */
  YYSYMBOL_PUBLIC = 5,                     /* PUBLIC  */
  YYSYMBOL_PRIVATE = 6,                    /* PRIVATE  */
  YYSYMBOL_EXTERNAL = 7,                   /* EXTERNAL  */
  YYSYMBOL_INTERNAL = 8,                   /* INTERNAL  */
  YYSYMBOL_PAYABLE = 9,                    /* PAYABLE  */
  YYSYMBOL_VIEW = 10,                      /* VIEW  */
  YYSYMBOL_PURE = 11,                      /* PURE  */
  YYSYMBOL_RETURNS = 12,                   /* RETURNS  */
  YYSYMBOL_MAPPING = 13,                   /* MAPPING  */
  YYSYMBOL_ADDRESS = 14,                   /* ADDRESS  */
  YYSYMBOL_UINT = 15,                      /* UINT  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_BOOL = 17,                      /* BOOL  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_REQUIRE = 19,                   /* REQUIRE  */
  YYSYMBOL_ASSERT = 20,                    /* ASSERT  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_EMIT = 28,                      /* EMIT  */
  YYSYMBOL_EVENT = 29,                     /* EVENT  */
  YYSYMBOL_MODIFIER = 30,                  /* MODIFIER  */
  YYSYMBOL_CONSTRUCTOR = 31,               /* CONSTRUCTOR  */
  YYSYMBOL_SELFDESTRUCT = 32,              /* SELFDESTRUCT  */
  YYSYMBOL_SEND = 33,                      /* SEND  */
  YYSYMBOL_CALL = 34,                      /* CALL  */
  YYSYMBOL_TRANSFER = 35,                  /* TRANSFER  */
  YYSYMBOL_MSGSENDER = 36,                 /* MSGSENDER  */
  YYSYMBOL_MSGVALUE = 37,                  /* MSGVALUE  */
  YYSYMBOL_BLOCKTIMESTAMP = 38,            /* BLOCKTIMESTAMP  */
  YYSYMBOL_BLOCKNUMBER = 39,               /* BLOCKNUMBER  */
  YYSYMBOL_TRUE = 40,                      /* TRUE  */
  YYSYMBOL_FALSE = 41,                     /* FALSE  */
  YYSYMBOL_NUM = 42,                       /* NUM  */
  YYSYMBOL_ID = 43,                        /* ID  */
  YYSYMBOL_LBRACE = 44,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 45,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 46,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 47,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 48,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 49,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 50,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 51,                     /* COMMA  */
  YYSYMBOL_DOT = 52,                       /* DOT  */
  YYSYMBOL_ASSIGN = 53,                    /* ASSIGN  */
  YYSYMBOL_PLUSEQ = 54,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 55,                   /* MINUSEQ  */
  YYSYMBOL_EQ = 56,                        /* EQ  */
  YYSYMBOL_NEQ = 57,                       /* NEQ  */
  YYSYMBOL_LEQ = 58,                       /* LEQ  */
  YYSYMBOL_GEQ = 59,                       /* GEQ  */
  YYSYMBOL_LT = 60,                        /* LT  */
  YYSYMBOL_GT = 61,                        /* GT  */
  YYSYMBOL_PLUS = 62,                      /* PLUS  */
  YYSYMBOL_MINUS = 63,                     /* MINUS  */
  YYSYMBOL_MUL = 64,                       /* MUL  */
  YYSYMBOL_DIV = 65,                       /* DIV  */
  YYSYMBOL_NOT = 66,                       /* NOT  */
  YYSYMBOL_AND = 67,                       /* AND  */
  YYSYMBOL_OR = 68,                        /* OR  */
  YYSYMBOL_ARROW = 69,                     /* ARROW  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_contractlist = 72,              /* contractlist  */
  YYSYMBOL_contract = 73,                  /* contract  */
  YYSYMBOL_contract_body = 74,             /* contract_body  */
  YYSYMBOL_statevars = 75,                 /* statevars  */
  YYSYMBOL_statevar = 76,                  /* statevar  */
  YYSYMBOL_type = 77,                      /* type  */
  YYSYMBOL_functionlist = 78,              /* functionlist  */
  YYSYMBOL_parameterlist = 79,             /* parameterlist  */
  YYSYMBOL_function = 80,                  /* function  */
  YYSYMBOL_parameters = 81,                /* parameters  */
  YYSYMBOL_parameter = 82,                 /* parameter  */
  YYSYMBOL_visibility = 83,                /* visibility  */
  YYSYMBOL_payable_opt = 84,               /* payable_opt  */
  YYSYMBOL_returns_opt = 85,               /* returns_opt  */
  YYSYMBOL_stmtlist = 86,                  /* stmtlist  */
  YYSYMBOL_stmt = 87,                      /* stmt  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_expr = 89,                      /* expr  */
  YYSYMBOL_arglist = 90,                   /* arglist  */
  YYSYMBOL_assignment = 91,                /* assignment  */
  YYSYMBOL_ifstmt = 92,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 93,                 /* whilestmt  */
  YYSYMBOL_forstmt = 94,                   /* forstmt  */
  YYSYMBOL_returnstmt = 95,                /* returnstmt  */
  YYSYMBOL_block = 96,                     /* block  */
  YYSYMBOL_97_1 = 97,                      /* $@1  */
  YYSYMBOL_sendstmt = 98,                  /* sendstmt  */
  YYSYMBOL_callstmt = 99,                  /* callstmt  */
  YYSYMBOL_transferstmt = 100,             /* transferstmt  */
  YYSYMBOL_selfdestructstmt = 101          /* selfdestructstmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   539

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    62,    63,    65,    75,    76,    78,    79,
      81,    85,    91,    92,    93,    94,    95,    98,    99,   100,
     102,   105,   113,   115,   119,   121,   124,   125,   126,   127,
     128,   130,   131,   133,   134,   136,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   158,   159,   160,
     161,   163,   164,   165,   166,   167,   168,   170,   172,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   209,   210,   211,   213,   214,
     215,   216,   218,   219,   221,   223,   225,   228,   228,   230,
     236,   242,   248
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONTRACT", "FUNCTION",
  "PUBLIC", "PRIVATE", "EXTERNAL", "INTERNAL", "PAYABLE", "VIEW", "PURE",
  "RETURNS", "MAPPING", "ADDRESS", "UINT", "INT", "BOOL", "STRING",
  "REQUIRE", "ASSERT", "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK",
  "CONTINUE", "EMIT", "EVENT", "MODIFIER", "CONSTRUCTOR", "SELFDESTRUCT",
  "SEND", "CALL", "TRANSFER", "MSGSENDER", "MSGVALUE", "BLOCKTIMESTAMP",
  "BLOCKNUMBER", "TRUE", "FALSE", "NUM", "ID", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA", "DOT",
  "ASSIGN", "PLUSEQ", "MINUSEQ", "EQ", "NEQ", "LEQ", "GEQ", "LT", "GT",
  "PLUS", "MINUS", "MUL", "DIV", "NOT", "AND", "OR", "ARROW", "$accept",
  "program", "contractlist", "contract", "contract_body", "statevars",
  "statevar", "type", "functionlist", "parameterlist", "function",
  "parameters", "parameter", "visibility", "payable_opt", "returns_opt",
  "stmtlist", "stmt", "declaration", "expr", "arglist", "assignment",
  "ifstmt", "whilestmt", "forstmt", "returnstmt", "block", "$@1",
  "sendstmt", "callstmt", "transferstmt", "selfdestructstmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      33,    29,    74,  -167,    33,    36,  -167,  -167,    69,    45,
      44,  -167,  -167,  -167,  -167,  -167,    46,    88,    52,    50,
    -167,    88,    54,    92,  -167,  -167,  -167,    61,  -167,     0,
      58,  -167,    59,    66,  -167,    63,   113,  -167,    39,     5,
      85,  -167,  -167,  -167,  -167,   121,  -167,    90,  -167,   130,
      93,    98,   101,  -167,     5,    80,   100,   102,   103,   104,
     105,   106,   125,   107,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,    83,  -167,   125,   125,   111,   110,    80,   108,   306,
    -167,  -167,  -167,   120,  -167,   123,   126,   127,   142,  -167,
     125,   125,   125,   125,   129,   148,     2,   471,   132,   125,
     125,   -27,   125,   125,   125,    80,   122,   471,  -167,  -167,
    -167,  -167,  -167,   152,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,  -167,  -167,  -167,  -167,
    -167,   141,   160,   179,   198,   -44,   146,   125,   125,   125,
     109,   457,   163,   253,   165,   167,   168,   325,   344,   363,
     170,  -167,   183,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   178,   182,    80,    80,   125,
     125,   125,   125,   217,   186,   270,  -167,   125,   184,   -28,
     205,   206,   208,  -167,  -167,  -167,  -167,   125,   218,  -167,
     230,  -167,   287,   471,   471,   382,  -167,  -167,  -167,  -167,
    -167,   125,   125,   125,   220,   221,   223,   224,   226,    80,
      25,   129,   401,   420,   439,  -167,  -167,  -167,  -167,   125,
    -167,   125,   125,   239,  -167,  -167,  -167,   236,   471,   471,
      80,   237,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     2,     4,     0,     1,     3,     0,     0,
       0,    15,    12,    13,    14,    16,     0,     0,     9,     0,
       7,    20,     0,     0,     5,     6,     8,     0,    17,    19,
       0,    11,     0,     0,    18,    22,     0,    24,    30,    25,
       0,    26,    27,    28,    29,    32,    23,     0,    31,    34,
       0,     0,     0,    10,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    78,    79,
      77,    73,    97,     0,     0,     0,     0,    36,     0,     0,
      47,    48,    49,     0,    51,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,    73,    96,     0,    87,
       0,     0,     0,     0,     0,    36,     0,    71,    58,    21,
      35,    46,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,    63,    64,    67,    68,    65,    66,    59,
      60,    61,    62,    69,    70,    75,     0,    57,    57,     0,
       0,     0,     0,     0,     0,     0,   102,    87,    76,    74,
       0,     0,     0,    38,    40,    42,    98,    87,     0,    37,
      93,    94,     0,    88,    90,     0,    75,    76,    74,    86,
      44,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,    99,   100,   101,    84,     0,
      92,     0,     0,     0,    39,    41,    43,     0,    89,    91,
      57,     0,    95,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,   285,  -167,  -167,   272,  -167,    -5,    18,  -167,
    -167,   252,  -167,  -167,  -167,  -167,   -72,  -166,  -167,   -62,
    -106,    95,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    16,    17,    18,    75,    20,    33,
      21,    34,    35,    45,    49,    52,    76,    77,    78,    79,
     142,   136,    80,    81,    82,    83,    84,   105,    85,    86,
      87,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   190,   191,    19,   169,   110,   144,   145,   146,   170,
     171,   106,   107,    19,    11,    12,    13,    14,    15,    11,
      12,    13,    14,    15,    32,   201,   202,   203,   131,   132,
     133,   134,   174,   150,    32,    25,     1,   141,   143,    28,
     147,   148,   149,   220,    41,    42,    43,    44,   138,    56,
     139,   -25,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   232,    10,    11,    12,    13,    14,
      15,   199,     5,     9,     6,   173,   141,   175,   221,   222,
       8,   207,    10,    11,    12,    13,    14,    15,    22,    57,
      23,    24,     9,    27,    11,    12,    13,    14,    15,    58,
      29,    59,    37,    60,    61,    62,    30,   192,   193,   194,
     195,    31,    63,    38,    39,   141,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   141,    73,    36,    40,    99,
      48,   100,    47,    50,    95,   101,   102,   103,   104,   212,
     213,   214,    51,    53,    54,    55,    74,    89,    90,    91,
      92,    93,    94,    98,   108,   109,   176,   227,   111,   228,
     229,    64,    65,    66,    67,    68,    69,    70,    96,   151,
     126,    73,   135,   127,   113,   140,   128,   129,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   165,   124,
     125,    74,   130,   113,   137,   152,   172,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   166,   124,   125,
     178,   180,   113,   181,   182,   186,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   167,   124,   125,   187,
     188,   113,   189,   197,   200,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   168,   124,   125,   204,   205,
     113,   206,   209,   208,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   196,   124,   125,   215,   216,   113,
     217,   218,   219,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   231,   124,   125,   230,   233,   113,     7,
      26,    46,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   179,   124,   125,   113,   223,     0,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   198,
     124,   125,   113,     0,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   210,   124,   125,   113,
       0,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,   124,   125,   112,     0,   113,     0,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,     0,   124,   125,   183,     0,   113,     0,     0,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     0,   124,   125,   184,     0,   113,     0,     0,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,   124,   125,   185,     0,   113,     0,     0,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     124,   125,   211,     0,   113,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,   124,
     125,   224,     0,   113,     0,     0,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,   124,   125,
     225,     0,   113,     0,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     0,   124,   125,   226,
       0,   113,     0,     0,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,   124,   125,   177,   113,
       0,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   113,   124,   125,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,   124,   125
};

static const yytype_int16 yycheck[] =
{
      62,   167,   168,     8,    48,    77,    33,    34,    35,    53,
      54,    73,    74,    18,    14,    15,    16,    17,    18,    14,
      15,    16,    17,    18,    29,    53,    54,    55,    90,    91,
      92,    93,   138,   105,    39,    17,     3,    99,   100,    21,
     102,   103,   104,   209,     5,     6,     7,     8,    46,    54,
      48,    51,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   230,    13,    14,    15,    16,    17,
      18,   177,    43,     4,     0,   137,   138,   139,    53,    54,
      44,   187,    13,    14,    15,    16,    17,    18,    43,     9,
      46,    45,     4,    43,    14,    15,    16,    17,    18,    19,
      46,    21,    43,    23,    24,    25,    14,   169,   170,   171,
     172,    50,    32,    47,    51,   177,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   187,    46,    69,    15,    46,
       9,    48,    47,    43,     9,    52,    53,    54,    55,   201,
     202,   203,    12,    50,    46,    44,    66,    47,    46,    46,
      46,    46,    46,    46,    43,    45,    47,   219,    50,   221,
     222,    36,    37,    38,    39,    40,    41,    42,    43,    47,
      50,    46,    43,    50,    52,    43,    50,    50,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    47,    67,
      68,    66,    50,    52,    46,    43,    50,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    47,    67,    68,
      47,    46,    52,    46,    46,    45,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    47,    67,    68,    46,
      52,    52,    50,    47,    50,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    47,    67,    68,    43,    43,
      52,    43,    22,    35,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    47,    67,    68,    47,    47,    52,
      47,    47,    46,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    47,    67,    68,    47,    50,    52,     4,
      18,    39,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    49,    67,    68,    52,   211,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    49,
      67,    68,    52,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    49,    67,    68,    52,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    50,    -1,    52,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    50,    -1,    52,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    68,    50,    -1,    52,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    50,    -1,    52,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    50,    -1,    52,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    50,    -1,    52,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68,
      50,    -1,    52,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    50,
      -1,    52,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    68,    51,    52,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    52,    67,    68,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    71,    72,    73,    43,     0,    72,    44,     4,
      13,    14,    15,    16,    17,    18,    74,    75,    76,    77,
      78,    80,    43,    46,    45,    78,    75,    43,    78,    46,
      14,    50,    77,    79,    81,    82,    69,    43,    47,    51,
      15,     5,     6,     7,     8,    83,    81,    47,     9,    84,
      43,    12,    85,    50,    46,    44,    77,     9,    19,    21,
      23,    24,    25,    32,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    46,    66,    77,    86,    87,    88,    89,
      92,    93,    94,    95,    96,    98,    99,   100,   101,    47,
      46,    46,    46,    46,    46,     9,    43,    89,    46,    46,
      48,    52,    53,    54,    55,    97,    89,    89,    43,    45,
      86,    50,    50,    52,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    68,    50,    50,    50,    50,
      50,    89,    89,    89,    89,    43,    91,    46,    46,    48,
      43,    89,    90,    89,    33,    34,    35,    89,    89,    89,
      86,    47,    43,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    47,    47,    47,    47,    48,
      53,    54,    50,    89,    90,    89,    47,    51,    47,    49,
      46,    46,    46,    50,    50,    50,    45,    46,    52,    50,
      87,    87,    89,    89,    89,    89,    47,    47,    49,    90,
      50,    53,    54,    55,    43,    43,    43,    90,    35,    22,
      49,    50,    89,    89,    89,    47,    47,    47,    47,    46,
      87,    53,    54,    91,    50,    50,    50,    89,    89,    89,
      47,    47,    87,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    78,    79,    79,
      78,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    94,    95,    97,    96,    98,
      99,   100,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     5,     2,     1,     2,     1,
       8,     3,     1,     1,     1,     1,     1,     2,     1,     0,
       1,    11,     1,     3,     2,     0,     1,     1,     1,     1,
       0,     1,     0,     4,     0,     2,     0,     5,     4,     7,
       4,     7,     4,     7,     5,    10,     2,     1,     1,     1,
       2,     1,     2,     2,     2,     2,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     0,     3,     6,
       3,     6,     7,     5,     5,     9,     2,     0,     4,     6,
       6,     6,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 5: /* contract: CONTRACT ID LBRACE contract_body RBRACE  */
#line 66 "solidity.y"
        {
            printf("#include \"ethereum_model.h\"\n");
            printf("class %s {\npublic:\n", (yyvsp[-3].id));
            printf("// State variables\n");
            /* contract_body will print statevars and functionlist */
            printf("};\n");
        }
#line 1424 "solidity.tab.c"
    break;

  case 10: /* statevar: MAPPING LPAREN ADDRESS ARROW UINT RPAREN ID SEMICOLON  */
#line 82 "solidity.y"
        {
            printf("std::unordered_map<Address, uint> %s;\n", (yyvsp[-1].id));
        }
#line 1432 "solidity.tab.c"
    break;

  case 11: /* statevar: type ID SEMICOLON  */
#line 86 "solidity.y"
        {
            printf("%s %s;\n", (yyvsp[-2].id), (yyvsp[-1].id));
        }
#line 1440 "solidity.tab.c"
    break;

  case 12: /* type: UINT  */
#line 91 "solidity.y"
             { (yyval.id) = "uint"; }
#line 1446 "solidity.tab.c"
    break;

  case 13: /* type: INT  */
#line 92 "solidity.y"
             { (yyval.id) = "int"; }
#line 1452 "solidity.tab.c"
    break;

  case 14: /* type: BOOL  */
#line 93 "solidity.y"
             { (yyval.id) = "bool"; }
#line 1458 "solidity.tab.c"
    break;

  case 15: /* type: ADDRESS  */
#line 94 "solidity.y"
             { (yyval.id) = "Address"; }
#line 1464 "solidity.tab.c"
    break;

  case 16: /* type: STRING  */
#line 95 "solidity.y"
             { (yyval.id) = "std::string"; }
#line 1470 "solidity.tab.c"
    break;

  case 19: /* parameterlist: %empty  */
#line 100 "solidity.y"
                  { (yyval.id) = ""; }
#line 1476 "solidity.tab.c"
    break;

  case 21: /* function: FUNCTION ID LPAREN parameterlist RPAREN visibility payable_opt returns_opt LBRACE stmtlist RBRACE  */
#line 106 "solidity.y"
    {
        printf("    void %s(%s) {\n", (yyvsp[-9].id), (yyvsp[-7].id));  // Indent for class member
        // Print statements
        printf("    }\n");
    }
#line 1486 "solidity.tab.c"
    break;

  case 22: /* parameters: parameter  */
#line 114 "solidity.y"
    { (yyval.id) = (yyvsp[0].id); }
#line 1492 "solidity.tab.c"
    break;

  case 23: /* parameters: parameter COMMA parameters  */
#line 116 "solidity.y"
    { (yyval.id) = concatenate(3, (yyvsp[-2].id), ", ", (yyvsp[0].id)); }
#line 1498 "solidity.tab.c"
    break;

  case 24: /* parameter: type ID  */
#line 120 "solidity.y"
    { (yyval.id) = concatenate(3, (yyvsp[-1].id), " ", (yyvsp[0].id)); }
#line 1504 "solidity.tab.c"
    break;

  case 25: /* parameter: %empty  */
#line 121 "solidity.y"
                  { (yyval.id) = ""; }
#line 1510 "solidity.tab.c"
    break;

  case 37: /* stmt: REQUIRE LPAREN expr RPAREN SEMICOLON  */
#line 140 "solidity.y"
    { printf("require(%s);\n", (yyvsp[-2].id)); }
#line 1516 "solidity.tab.c"
    break;

  case 38: /* stmt: ID ASSIGN expr SEMICOLON  */
#line 142 "solidity.y"
    { printf("%s = %s;\n", (yyvsp[-3].id), (yyvsp[-1].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1522 "solidity.tab.c"
    break;

  case 39: /* stmt: ID LBRACKET expr RBRACKET ASSIGN expr SEMICOLON  */
#line 144 "solidity.y"
    { printf("%s[%s] = %s;\n", (yyvsp[-6].id), (yyvsp[-4].id), (yyvsp[-1].id)); if ((yyvsp[-4].id) != NULL && (yyvsp[-4].id) != "true" && (yyvsp[-4].id) != "false" && (yyvsp[-4].id) != "msg_sender" && (yyvsp[-4].id) != "msg_value" && (yyvsp[-4].id) != "block_timestamp" && (yyvsp[-4].id) != "block_number") free((void*)(yyvsp[-4].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1528 "solidity.tab.c"
    break;

  case 40: /* stmt: ID PLUSEQ expr SEMICOLON  */
#line 146 "solidity.y"
    { printf("%s += %s;\n", (yyvsp[-3].id), (yyvsp[-1].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1534 "solidity.tab.c"
    break;

  case 41: /* stmt: ID LBRACKET expr RBRACKET PLUSEQ expr SEMICOLON  */
#line 148 "solidity.y"
    { printf("%s[%s] += %s;\n", (yyvsp[-6].id), (yyvsp[-4].id), (yyvsp[-1].id)); if ((yyvsp[-4].id) != NULL && (yyvsp[-4].id) != "true" && (yyvsp[-4].id) != "false" && (yyvsp[-4].id) != "msg_sender" && (yyvsp[-4].id) != "msg_value" && (yyvsp[-4].id) != "block_timestamp" && (yyvsp[-4].id) != "block_number") free((void*)(yyvsp[-4].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1540 "solidity.tab.c"
    break;

  case 42: /* stmt: ID MINUSEQ expr SEMICOLON  */
#line 150 "solidity.y"
    { printf("%s -= %s;\n", (yyvsp[-3].id), (yyvsp[-1].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1546 "solidity.tab.c"
    break;

  case 43: /* stmt: ID LBRACKET expr RBRACKET MINUSEQ expr SEMICOLON  */
#line 152 "solidity.y"
    { printf("%s[%s] -= %s;\n", (yyvsp[-6].id), (yyvsp[-4].id), (yyvsp[-1].id)); if ((yyvsp[-4].id) != NULL && (yyvsp[-4].id) != "true" && (yyvsp[-4].id) != "false" && (yyvsp[-4].id) != "msg_sender" && (yyvsp[-4].id) != "msg_value" && (yyvsp[-4].id) != "block_timestamp" && (yyvsp[-4].id) != "block_number") free((void*)(yyvsp[-4].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1552 "solidity.tab.c"
    break;

  case 44: /* stmt: ID LPAREN arglist RPAREN SEMICOLON  */
#line 154 "solidity.y"
    { printf("%s(%s);\n", (yyvsp[-4].id), (yyvsp[-2].id)); if ((yyvsp[-2].id) != NULL && (yyvsp[-2].id) != "true" && (yyvsp[-2].id) != "false" && (yyvsp[-2].id) != "msg_sender" && (yyvsp[-2].id) != "msg_value" && (yyvsp[-2].id) != "block_timestamp" && (yyvsp[-2].id) != "block_number") free((void*)(yyvsp[-2].id)); }
#line 1558 "solidity.tab.c"
    break;

  case 45: /* stmt: PAYABLE LPAREN expr RPAREN DOT TRANSFER LPAREN expr RPAREN SEMICOLON  */
#line 156 "solidity.y"
    { printf("transfer(%s, %s);\n", (yyvsp[-7].id), (yyvsp[-2].id)); if ((yyvsp[-7].id) != NULL && (yyvsp[-7].id) != "true" && (yyvsp[-7].id) != "false" && (yyvsp[-7].id) != "msg_sender" && (yyvsp[-7].id) != "msg_value" && (yyvsp[-7].id) != "block_timestamp" && (yyvsp[-7].id) != "block_number") free((void*)(yyvsp[-7].id)); if ((yyvsp[-2].id) != NULL && (yyvsp[-2].id) != "true" && (yyvsp[-2].id) != "false" && (yyvsp[-2].id) != "msg_sender" && (yyvsp[-2].id) != "msg_value" && (yyvsp[-2].id) != "block_timestamp" && (yyvsp[-2].id) != "block_number") free((void*)(yyvsp[-2].id)); }
#line 1564 "solidity.tab.c"
    break;

  case 50: /* stmt: returnstmt SEMICOLON  */
#line 162 "solidity.y"
    { printf("return %s;\n", (yyvsp[-1].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1570 "solidity.tab.c"
    break;

  case 56: /* stmt: expr SEMICOLON  */
#line 169 "solidity.y"
    { printf("%s;\n", (yyvsp[-1].id)); if ((yyvsp[-1].id) != NULL && (yyvsp[-1].id) != "true" && (yyvsp[-1].id) != "false" && (yyvsp[-1].id) != "msg_sender" && (yyvsp[-1].id) != "msg_value" && (yyvsp[-1].id) != "block_timestamp" && (yyvsp[-1].id) != "block_number") free((void*)(yyvsp[-1].id)); }
#line 1576 "solidity.tab.c"
    break;

  case 58: /* declaration: type ID  */
#line 173 "solidity.y"
        {
            printf("    %s %s;\n", (yyvsp[-1].id), (yyvsp[0].id));
        }
#line 1584 "solidity.tab.c"
    break;

  case 59: /* expr: expr PLUS expr  */
#line 178 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " + ", (yyvsp[0].id)); }
#line 1590 "solidity.tab.c"
    break;

  case 60: /* expr: expr MINUS expr  */
#line 179 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " - ", (yyvsp[0].id)); }
#line 1596 "solidity.tab.c"
    break;

  case 61: /* expr: expr MUL expr  */
#line 180 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " * ", (yyvsp[0].id)); }
#line 1602 "solidity.tab.c"
    break;

  case 62: /* expr: expr DIV expr  */
#line 181 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " / ", (yyvsp[0].id)); }
#line 1608 "solidity.tab.c"
    break;

  case 63: /* expr: expr EQ expr  */
#line 182 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " == ", (yyvsp[0].id)); }
#line 1614 "solidity.tab.c"
    break;

  case 64: /* expr: expr NEQ expr  */
#line 183 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " != ", (yyvsp[0].id)); }
#line 1620 "solidity.tab.c"
    break;

  case 65: /* expr: expr LT expr  */
#line 184 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " < ", (yyvsp[0].id)); }
#line 1626 "solidity.tab.c"
    break;

  case 66: /* expr: expr GT expr  */
#line 185 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " > ", (yyvsp[0].id)); }
#line 1632 "solidity.tab.c"
    break;

  case 67: /* expr: expr LEQ expr  */
#line 186 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " <= ", (yyvsp[0].id)); }
#line 1638 "solidity.tab.c"
    break;

  case 68: /* expr: expr GEQ expr  */
#line 187 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " >= ", (yyvsp[0].id)); }
#line 1644 "solidity.tab.c"
    break;

  case 69: /* expr: expr AND expr  */
#line 188 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " && ", (yyvsp[0].id)); }
#line 1650 "solidity.tab.c"
    break;

  case 70: /* expr: expr OR expr  */
#line 189 "solidity.y"
                       { (yyval.id) = concatenate(3, (yyvsp[-2].id), " || ", (yyvsp[0].id)); }
#line 1656 "solidity.tab.c"
    break;

  case 71: /* expr: NOT expr  */
#line 190 "solidity.y"
                       { (yyval.id) = concatenate(2, "!", (yyvsp[0].id)); }
#line 1662 "solidity.tab.c"
    break;

  case 72: /* expr: LPAREN expr RPAREN  */
#line 191 "solidity.y"
                         { (yyval.id) = concatenate(3, "(", (yyvsp[-1].id), ")"); }
#line 1668 "solidity.tab.c"
    break;

  case 73: /* expr: ID  */
#line 192 "solidity.y"
                       { (yyval.id) = (yyvsp[0].id); }
#line 1674 "solidity.tab.c"
    break;

  case 74: /* expr: ID LBRACKET expr RBRACKET  */
#line 193 "solidity.y"
                                { (yyval.id) = concatenate(4, (yyvsp[-3].id), "[", (yyvsp[-1].id), "]"); }
#line 1680 "solidity.tab.c"
    break;

  case 75: /* expr: PAYABLE LPAREN expr RPAREN  */
#line 194 "solidity.y"
                                 { (yyval.id) = concatenate(3, "payable(", (yyvsp[-1].id), ")"); }
#line 1686 "solidity.tab.c"
    break;

  case 76: /* expr: ID LPAREN arglist RPAREN  */
#line 195 "solidity.y"
                               { (yyval.id) = concatenate(3, (yyvsp[-3].id), "(", (yyvsp[-1].id), ")"); }
#line 1692 "solidity.tab.c"
    break;

  case 77: /* expr: NUM  */
#line 196 "solidity.y"
                       { (yyval.id) = create_number((yyvsp[0].num)); }
#line 1698 "solidity.tab.c"
    break;

  case 78: /* expr: TRUE  */
#line 197 "solidity.y"
                       { (yyval.id) = "true"; }
#line 1704 "solidity.tab.c"
    break;

  case 79: /* expr: FALSE  */
#line 198 "solidity.y"
                       { (yyval.id) = "false"; }
#line 1710 "solidity.tab.c"
    break;

  case 80: /* expr: MSGSENDER  */
#line 199 "solidity.y"
                       { (yyval.id) = "msg_sender"; }
#line 1716 "solidity.tab.c"
    break;

  case 81: /* expr: MSGVALUE  */
#line 200 "solidity.y"
                       { (yyval.id) = "msg_value"; }
#line 1722 "solidity.tab.c"
    break;

  case 82: /* expr: BLOCKTIMESTAMP  */
#line 201 "solidity.y"
                       { (yyval.id) = "block_timestamp"; }
#line 1728 "solidity.tab.c"
    break;

  case 83: /* expr: BLOCKNUMBER  */
#line 202 "solidity.y"
                       { (yyval.id) = "block_number"; }
#line 1734 "solidity.tab.c"
    break;

  case 84: /* expr: expr DOT ID LPAREN arglist RPAREN  */
#line 204 "solidity.y"
    {
        (yyval.id) = concatenate(5, (yyvsp[-5].id), ".", (yyvsp[-3].id), "(", (yyvsp[-1].id), ")");
    }
#line 1742 "solidity.tab.c"
    break;

  case 85: /* arglist: expr  */
#line 209 "solidity.y"
              { (yyval.id) = (yyvsp[0].id); }
#line 1748 "solidity.tab.c"
    break;

  case 86: /* arglist: expr COMMA arglist  */
#line 210 "solidity.y"
                            { (yyval.id) = concatenate(3, (yyvsp[-2].id), ", ", (yyvsp[0].id)); }
#line 1754 "solidity.tab.c"
    break;

  case 87: /* arglist: %empty  */
#line 211 "solidity.y"
                     { (yyval.id) = ""; }
#line 1760 "solidity.tab.c"
    break;

  case 96: /* returnstmt: RETURN expr  */
#line 226 "solidity.y"
    { (yyval.id) = (yyvsp[0].id); }
#line 1766 "solidity.tab.c"
    break;

  case 97: /* $@1: %empty  */
#line 228 "solidity.y"
              { printf("        {\n"); }
#line 1772 "solidity.tab.c"
    break;

  case 98: /* block: LBRACE $@1 stmtlist RBRACE  */
#line 228 "solidity.y"
                                                         { printf("        }\n"); }
#line 1778 "solidity.tab.c"
    break;

  case 99: /* sendstmt: ID DOT SEND LPAREN ID RPAREN  */
#line 231 "solidity.y"
        {
            printf("send(%s, %s);\n", (yyvsp[-5].id), (yyvsp[-1].id));
        }
#line 1786 "solidity.tab.c"
    break;

  case 100: /* callstmt: ID DOT CALL LPAREN ID RPAREN  */
#line 237 "solidity.y"
        {
            printf("call(%s, %s);\n", (yyvsp[-5].id), (yyvsp[-1].id));
        }
#line 1794 "solidity.tab.c"
    break;

  case 101: /* transferstmt: ID DOT TRANSFER LPAREN ID RPAREN  */
#line 243 "solidity.y"
            {
                printf("transfer(%s, %s);\n", (yyvsp[-5].id), (yyvsp[-1].id));
            }
#line 1802 "solidity.tab.c"
    break;

  case 102: /* selfdestructstmt: SELFDESTRUCT LPAREN ID RPAREN  */
#line 249 "solidity.y"
                {
                    printf("selfdestruct(%s);\n", (yyvsp[-1].id));
                }
#line 1810 "solidity.tab.c"
    break;


#line 1814 "solidity.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

