/*
 * Generated by make_token_names.sh on Fri Mar  3 20:47:21 CST 2006
 * $Id$
 */

#ifndef TOKEN_NAMES_H_INCLUDED
#define TOKEN_NAMES_H_INCLUDED

const char *token_names[] =
{
   [CT_NONE]          = "NONE",
   [CT_SOF]           = "SOF",
   [CT_EOF]           = "EOF",
   [CT_UNKNOWN]       = "UNKNOWN",
   [CT_WHITESPACE]    = "WHITESPACE",
   [CT_NEWLINE]       = "NEWLINE",
   [CT_NL_CONT]       = "NL_CONT",
   [CT_COMMENT_CPP]   = "COMMENT_CPP",
   [CT_COMMENT]       = "COMMENT",
   [CT_COMMENT_MULTI] = "COMMENT_MULTI",
   [CT_COMMENT_EMBED] = "COMMENT_EMBED",
   [CT_COMMENT_START] = "COMMENT_START",
   [CT_COMMENT_END]   = "COMMENT_END",
   [CT_COMMENT_WHOLE] = "COMMENT_WHOLE",
   [CT_WORD]          = "WORD",
   [CT_NUMBER]        = "NUMBER",
   [CT_STRING]        = "STRING",
   [CT_IF]            = "IF",
   [CT_ELSE]          = "ELSE",
   [CT_FOR]           = "FOR",
   [CT_WHILE]         = "WHILE",
   [CT_WHILE_OF_DO]   = "WHILE_OF_DO",
   [CT_SWITCH]        = "SWITCH",
   [CT_CASE]          = "CASE",
   [CT_DO]            = "DO",
   [CT_VOLATILE]      = "VOLATILE",
   [CT_TYPEDEF]       = "TYPEDEF",
   [CT_STRUCT]        = "STRUCT",
   [CT_SUPER]         = "SUPER",
   [CT_DELEGATE]      = "DELEGATE",
   [CT_ENUM]          = "ENUM",
   [CT_SIZEOF]        = "SIZEOF",
   [CT_RETURN]        = "RETURN",
   [CT_BREAK]         = "BREAK",
   [CT_UNION]         = "UNION",
   [CT_GOTO]          = "GOTO",
   [CT_CONTINUE]      = "CONTINUE",
   [CT_CAST]          = "CAST",
   [CT_TYPE_CAST]     = "TYPE_CAST",
   [CT_TYPENAME]      = "TYPENAME",
   [CT_TEMPLATE]      = "TEMPLATE",
   [CT_ASSIGN]        = "ASSIGN",
   [CT_SASSIGN]       = "SASSIGN",
   [CT_COMPARE]       = "COMPARE",
   [CT_SCOMPARE]      = "SCOMPARE",
   [CT_BOOL]          = "BOOL",
   [CT_SBOOL]         = "SBOOL",
   [CT_ARITH]         = "ARITH",
   [CT_SARITH]        = "SARITH",
   [CT_DEREF]         = "DEREF",
   [CT_INCDEC_BEFORE] = "INCDEC_BEFORE",
   [CT_INCDEC_AFTER]  = "INCDEC_AFTER",
   [CT_MEMBER]        = "MEMBER",
   [CT_INV]           = "INV",
   [CT_NOT]           = "NOT",
   [CT_ADDR]          = "ADDR",
   [CT_NEG]           = "NEG",
   [CT_POS]           = "POS",
   [CT_STAR]          = "STAR",
   [CT_PLUS]          = "PLUS",
   [CT_MINUS]         = "MINUS",
   [CT_AMP]           = "AMP",
   [CT_POUND]         = "POUND",
   [CT_PREPROC]       = "PREPROC",
   [CT_PREPROC_BODY]  = "PREPROC_BODY",
   [CT_PP]            = "PP",
   [CT_ELIPSIS]       = "ELIPSIS",
   [CT_SEMICOLON]     = "SEMICOLON",
   [CT_COLON]         = "COLON",
   [CT_CASE_COLON]    = "CASE_COLON",
   [CT_Q_COLON]       = "Q_COLON",
   [CT_QUESTION]      = "QUESTION",
   [CT_COMMA]         = "COMMA",
   [CT_ASM]           = "ASM",
   [CT_CATCH]         = "CATCH",
   [CT_CLASS]         = "CLASS",
   [CT_DELETE]        = "DELETE",
   [CT_EXPORT]        = "EXPORT",
   [CT_FRIEND]        = "FRIEND",
   [CT_MUTABLE]       = "MUTABLE",
   [CT_NAMESPACE]     = "NAMESPACE",
   [CT_NEW]           = "NEW",
   [CT_OPERATOR]      = "OPERATOR",
   [CT_PRIVATE]       = "PRIVATE",
   [CT_THROW]         = "THROW",
   [CT_TRY]           = "TRY",
   [CT_USING]         = "USING",
   [CT_PAREN_OPEN]    = "PAREN_OPEN",
   [CT_PAREN_CLOSE]   = "PAREN_CLOSE",
   [CT_ANGLE_OPEN]    = "ANGLE_OPEN",
   [CT_ANGLE_CLOSE]   = "ANGLE_CLOSE",
   [CT_SPAREN_OPEN]   = "SPAREN_OPEN",
   [CT_SPAREN_CLOSE]  = "SPAREN_CLOSE",
   [CT_FPAREN_OPEN]   = "FPAREN_OPEN",
   [CT_FPAREN_CLOSE]  = "FPAREN_CLOSE",
   [CT_BRACE_OPEN]    = "BRACE_OPEN",
   [CT_BRACE_CLOSE]   = "BRACE_CLOSE",
   [CT_VBRACE_OPEN]   = "VBRACE_OPEN",
   [CT_VBRACE_CLOSE]  = "VBRACE_CLOSE",
   [CT_SQUARE_OPEN]   = "SQUARE_OPEN",
   [CT_SQUARE_CLOSE]  = "SQUARE_CLOSE",
   [CT_LABEL]         = "LABEL",
   [CT_LABEL_COLON]   = "LABEL_COLON",
   [CT_FUNCTION]      = "FUNCTION",
   [CT_FUNC_CALL]     = "FUNC_CALL",
   [CT_FUNC_DEF]      = "FUNC_DEF",
   [CT_FUNC_PROTO]    = "FUNC_PROTO",
   [CT_MACRO_FUNC]    = "MACRO_FUNC",
   [CT_MACRO]         = "MACRO",
   [CT_QUALIFIER]     = "QUALIFIER",
   [CT_PQUALIFIER]    = "PQUALIFIER",
   [CT_TYPE]          = "TYPE",
   [CT_PTR_TYPE]      = "PTR_TYPE",
   [CT_BIT_COLON]     = "BIT_COLON",
   [CT_PP_DEFINE]     = "PP_DEFINE",
   [CT_PP_DEFINED]    = "PP_DEFINED",
   [CT_PP_INCLUDE]    = "PP_INCLUDE",
   [CT_PP_IF]         = "PP_IF",
   [CT_PP_ELSE]       = "PP_ELSE",
   [CT_PP_ENDIF]      = "PP_ENDIF",
   [CT_PP_OTHER]      = "PP_OTHER",
   [CT_PRAGMA]        = "PRAGMA",
   [CT_LOCK]          = "LOCK",
   [CT_AS]            = "AS",
   [CT_IN]            = "IN",
   [CT_BRACED]        = "BRACED",
   [CT_PBRACED]       = "PBRACED",
   [CT_POBRACED]      = "POBRACED",
   [CT_VBRACED]       = "VBRACED",
   [CT_VERSION]       = "VERSION",
   [CT_THIS]          = "THIS",
   [CT_BASE]          = "BASE",
   [CT_DEFAULT]       = "DEFAULT",
   [CT_GETSET]        = "GETSET",
};

#endif  /* TOKEN_NAMES_H_INCLUDED */

