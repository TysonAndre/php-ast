#include "php_ast.h"

const size_t ast_kinds_count = 98;

const zend_ast_kind ast_kinds[] = {
	ZEND_AST_FUNC_DECL,
	ZEND_AST_CLOSURE,
	ZEND_AST_METHOD,
	ZEND_AST_CLASS,
	ZEND_AST_ARG_LIST,
	ZEND_AST_LIST,
	ZEND_AST_ARRAY,
	ZEND_AST_ENCAPS_LIST,
	ZEND_AST_EXPR_LIST,
	ZEND_AST_STMT_LIST,
	ZEND_AST_IF,
	ZEND_AST_SWITCH_LIST,
	ZEND_AST_CATCH_LIST,
	ZEND_AST_PARAM_LIST,
	ZEND_AST_CLOSURE_USES,
	ZEND_AST_PROP_DECL,
	ZEND_AST_CONST_DECL,
	ZEND_AST_CLASS_CONST_DECL,
	ZEND_AST_NAME_LIST,
	ZEND_AST_TRAIT_ADAPTATIONS,
	ZEND_AST_USE,
	ZEND_AST_MAGIC_CONST,
	ZEND_AST_TYPE,
	ZEND_AST_VAR,
	ZEND_AST_CONST,
	ZEND_AST_UNPACK,
	ZEND_AST_UNARY_PLUS,
	ZEND_AST_UNARY_MINUS,
	ZEND_AST_CAST,
	ZEND_AST_EMPTY,
	ZEND_AST_ISSET,
	ZEND_AST_SILENCE,
	ZEND_AST_SHELL_EXEC,
	ZEND_AST_CLONE,
	ZEND_AST_EXIT,
	ZEND_AST_PRINT,
	ZEND_AST_INCLUDE_OR_EVAL,
	ZEND_AST_UNARY_OP,
	ZEND_AST_PRE_INC,
	ZEND_AST_PRE_DEC,
	ZEND_AST_POST_INC,
	ZEND_AST_POST_DEC,
	ZEND_AST_YIELD_FROM,
	ZEND_AST_GLOBAL,
	ZEND_AST_UNSET,
	ZEND_AST_RETURN,
	ZEND_AST_LABEL,
	ZEND_AST_REF,
	ZEND_AST_HALT_COMPILER,
	ZEND_AST_ECHO,
	ZEND_AST_THROW,
	ZEND_AST_GOTO,
	ZEND_AST_BREAK,
	ZEND_AST_CONTINUE,
	ZEND_AST_DIM,
	ZEND_AST_PROP,
	ZEND_AST_STATIC_PROP,
	ZEND_AST_CALL,
	ZEND_AST_CLASS_CONST,
	ZEND_AST_ASSIGN,
	ZEND_AST_ASSIGN_REF,
	ZEND_AST_ASSIGN_OP,
	ZEND_AST_BINARY_OP,
	ZEND_AST_GREATER,
	ZEND_AST_GREATER_EQUAL,
	ZEND_AST_AND,
	ZEND_AST_OR,
	ZEND_AST_ARRAY_ELEM,
	ZEND_AST_NEW,
	ZEND_AST_INSTANCEOF,
	ZEND_AST_YIELD,
	ZEND_AST_COALESCE,
	ZEND_AST_STATIC,
	ZEND_AST_WHILE,
	ZEND_AST_DO_WHILE,
	ZEND_AST_IF_ELEM,
	ZEND_AST_SWITCH,
	ZEND_AST_SWITCH_CASE,
	ZEND_AST_DECLARE,
	ZEND_AST_PROP_ELEM,
	ZEND_AST_CONST_ELEM,
	ZEND_AST_USE_TRAIT,
	ZEND_AST_TRAIT_PRECEDENCE,
	ZEND_AST_METHOD_REFERENCE,
	ZEND_AST_NAMESPACE,
	ZEND_AST_USE_ELEM,
	ZEND_AST_TRAIT_ALIAS,
	ZEND_AST_GROUP_USE,
	ZEND_AST_METHOD_CALL,
	ZEND_AST_STATIC_CALL,
	ZEND_AST_CONDITIONAL,
	ZEND_AST_TRY,
	ZEND_AST_CATCH,
	ZEND_AST_PARAM,
	ZEND_AST_FOR,
	ZEND_AST_FOREACH,
	AST_NAME,
	AST_CLOSURE_VAR,
};

const char *ast_kind_to_name(zend_ast_kind kind) {
	switch (kind) {
		case ZEND_AST_FUNC_DECL: return "AST_FUNC_DECL";
		case ZEND_AST_CLOSURE: return "AST_CLOSURE";
		case ZEND_AST_METHOD: return "AST_METHOD";
		case ZEND_AST_CLASS: return "AST_CLASS";
		case ZEND_AST_ARG_LIST: return "AST_ARG_LIST";
		case ZEND_AST_LIST: return "AST_LIST";
		case ZEND_AST_ARRAY: return "AST_ARRAY";
		case ZEND_AST_ENCAPS_LIST: return "AST_ENCAPS_LIST";
		case ZEND_AST_EXPR_LIST: return "AST_EXPR_LIST";
		case ZEND_AST_STMT_LIST: return "AST_STMT_LIST";
		case ZEND_AST_IF: return "AST_IF";
		case ZEND_AST_SWITCH_LIST: return "AST_SWITCH_LIST";
		case ZEND_AST_CATCH_LIST: return "AST_CATCH_LIST";
		case ZEND_AST_PARAM_LIST: return "AST_PARAM_LIST";
		case ZEND_AST_CLOSURE_USES: return "AST_CLOSURE_USES";
		case ZEND_AST_PROP_DECL: return "AST_PROP_DECL";
		case ZEND_AST_CONST_DECL: return "AST_CONST_DECL";
		case ZEND_AST_CLASS_CONST_DECL: return "AST_CLASS_CONST_DECL";
		case ZEND_AST_NAME_LIST: return "AST_NAME_LIST";
		case ZEND_AST_TRAIT_ADAPTATIONS: return "AST_TRAIT_ADAPTATIONS";
		case ZEND_AST_USE: return "AST_USE";
		case ZEND_AST_MAGIC_CONST: return "AST_MAGIC_CONST";
		case ZEND_AST_TYPE: return "AST_TYPE";
		case ZEND_AST_VAR: return "AST_VAR";
		case ZEND_AST_CONST: return "AST_CONST";
		case ZEND_AST_UNPACK: return "AST_UNPACK";
		case ZEND_AST_UNARY_PLUS: return "AST_UNARY_PLUS";
		case ZEND_AST_UNARY_MINUS: return "AST_UNARY_MINUS";
		case ZEND_AST_CAST: return "AST_CAST";
		case ZEND_AST_EMPTY: return "AST_EMPTY";
		case ZEND_AST_ISSET: return "AST_ISSET";
		case ZEND_AST_SILENCE: return "AST_SILENCE";
		case ZEND_AST_SHELL_EXEC: return "AST_SHELL_EXEC";
		case ZEND_AST_CLONE: return "AST_CLONE";
		case ZEND_AST_EXIT: return "AST_EXIT";
		case ZEND_AST_PRINT: return "AST_PRINT";
		case ZEND_AST_INCLUDE_OR_EVAL: return "AST_INCLUDE_OR_EVAL";
		case ZEND_AST_UNARY_OP: return "AST_UNARY_OP";
		case ZEND_AST_PRE_INC: return "AST_PRE_INC";
		case ZEND_AST_PRE_DEC: return "AST_PRE_DEC";
		case ZEND_AST_POST_INC: return "AST_POST_INC";
		case ZEND_AST_POST_DEC: return "AST_POST_DEC";
		case ZEND_AST_YIELD_FROM: return "AST_YIELD_FROM";
		case ZEND_AST_GLOBAL: return "AST_GLOBAL";
		case ZEND_AST_UNSET: return "AST_UNSET";
		case ZEND_AST_RETURN: return "AST_RETURN";
		case ZEND_AST_LABEL: return "AST_LABEL";
		case ZEND_AST_REF: return "AST_REF";
		case ZEND_AST_HALT_COMPILER: return "AST_HALT_COMPILER";
		case ZEND_AST_ECHO: return "AST_ECHO";
		case ZEND_AST_THROW: return "AST_THROW";
		case ZEND_AST_GOTO: return "AST_GOTO";
		case ZEND_AST_BREAK: return "AST_BREAK";
		case ZEND_AST_CONTINUE: return "AST_CONTINUE";
		case ZEND_AST_DIM: return "AST_DIM";
		case ZEND_AST_PROP: return "AST_PROP";
		case ZEND_AST_STATIC_PROP: return "AST_STATIC_PROP";
		case ZEND_AST_CALL: return "AST_CALL";
		case ZEND_AST_CLASS_CONST: return "AST_CLASS_CONST";
		case ZEND_AST_ASSIGN: return "AST_ASSIGN";
		case ZEND_AST_ASSIGN_REF: return "AST_ASSIGN_REF";
		case ZEND_AST_ASSIGN_OP: return "AST_ASSIGN_OP";
		case ZEND_AST_BINARY_OP: return "AST_BINARY_OP";
		case ZEND_AST_GREATER: return "AST_GREATER";
		case ZEND_AST_GREATER_EQUAL: return "AST_GREATER_EQUAL";
		case ZEND_AST_AND: return "AST_AND";
		case ZEND_AST_OR: return "AST_OR";
		case ZEND_AST_ARRAY_ELEM: return "AST_ARRAY_ELEM";
		case ZEND_AST_NEW: return "AST_NEW";
		case ZEND_AST_INSTANCEOF: return "AST_INSTANCEOF";
		case ZEND_AST_YIELD: return "AST_YIELD";
		case ZEND_AST_COALESCE: return "AST_COALESCE";
		case ZEND_AST_STATIC: return "AST_STATIC";
		case ZEND_AST_WHILE: return "AST_WHILE";
		case ZEND_AST_DO_WHILE: return "AST_DO_WHILE";
		case ZEND_AST_IF_ELEM: return "AST_IF_ELEM";
		case ZEND_AST_SWITCH: return "AST_SWITCH";
		case ZEND_AST_SWITCH_CASE: return "AST_SWITCH_CASE";
		case ZEND_AST_DECLARE: return "AST_DECLARE";
		case ZEND_AST_PROP_ELEM: return "AST_PROP_ELEM";
		case ZEND_AST_CONST_ELEM: return "AST_CONST_ELEM";
		case ZEND_AST_USE_TRAIT: return "AST_USE_TRAIT";
		case ZEND_AST_TRAIT_PRECEDENCE: return "AST_TRAIT_PRECEDENCE";
		case ZEND_AST_METHOD_REFERENCE: return "AST_METHOD_REFERENCE";
		case ZEND_AST_NAMESPACE: return "AST_NAMESPACE";
		case ZEND_AST_USE_ELEM: return "AST_USE_ELEM";
		case ZEND_AST_TRAIT_ALIAS: return "AST_TRAIT_ALIAS";
		case ZEND_AST_GROUP_USE: return "AST_GROUP_USE";
		case ZEND_AST_METHOD_CALL: return "AST_METHOD_CALL";
		case ZEND_AST_STATIC_CALL: return "AST_STATIC_CALL";
		case ZEND_AST_CONDITIONAL: return "AST_CONDITIONAL";
		case ZEND_AST_TRY: return "AST_TRY";
		case ZEND_AST_CATCH: return "AST_CATCH";
		case ZEND_AST_PARAM: return "AST_PARAM";
		case ZEND_AST_FOR: return "AST_FOR";
		case ZEND_AST_FOREACH: return "AST_FOREACH";
		case AST_NAME: return "AST_NAME";
		case AST_CLOSURE_VAR: return "AST_CLOSURE_VAR";
	}

	return NULL;
}

void ast_register_kind_constants(INIT_FUNC_ARGS) {
	REGISTER_NS_LONG_CONSTANT("ast", "AST_FUNC_DECL", ZEND_AST_FUNC_DECL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLOSURE", ZEND_AST_CLOSURE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_METHOD", ZEND_AST_METHOD, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLASS", ZEND_AST_CLASS, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ARG_LIST", ZEND_AST_ARG_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_LIST", ZEND_AST_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ARRAY", ZEND_AST_ARRAY, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ENCAPS_LIST", ZEND_AST_ENCAPS_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_EXPR_LIST", ZEND_AST_EXPR_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_STMT_LIST", ZEND_AST_STMT_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_IF", ZEND_AST_IF, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_SWITCH_LIST", ZEND_AST_SWITCH_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CATCH_LIST", ZEND_AST_CATCH_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PARAM_LIST", ZEND_AST_PARAM_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLOSURE_USES", ZEND_AST_CLOSURE_USES, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PROP_DECL", ZEND_AST_PROP_DECL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CONST_DECL", ZEND_AST_CONST_DECL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLASS_CONST_DECL", ZEND_AST_CLASS_CONST_DECL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_NAME_LIST", ZEND_AST_NAME_LIST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_TRAIT_ADAPTATIONS", ZEND_AST_TRAIT_ADAPTATIONS, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_USE", ZEND_AST_USE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_MAGIC_CONST", ZEND_AST_MAGIC_CONST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_TYPE", ZEND_AST_TYPE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_VAR", ZEND_AST_VAR, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CONST", ZEND_AST_CONST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_UNPACK", ZEND_AST_UNPACK, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_UNARY_PLUS", ZEND_AST_UNARY_PLUS, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_UNARY_MINUS", ZEND_AST_UNARY_MINUS, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CAST", ZEND_AST_CAST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_EMPTY", ZEND_AST_EMPTY, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ISSET", ZEND_AST_ISSET, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_SILENCE", ZEND_AST_SILENCE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_SHELL_EXEC", ZEND_AST_SHELL_EXEC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLONE", ZEND_AST_CLONE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_EXIT", ZEND_AST_EXIT, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PRINT", ZEND_AST_PRINT, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_INCLUDE_OR_EVAL", ZEND_AST_INCLUDE_OR_EVAL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_UNARY_OP", ZEND_AST_UNARY_OP, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PRE_INC", ZEND_AST_PRE_INC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PRE_DEC", ZEND_AST_PRE_DEC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_POST_INC", ZEND_AST_POST_INC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_POST_DEC", ZEND_AST_POST_DEC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_YIELD_FROM", ZEND_AST_YIELD_FROM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_GLOBAL", ZEND_AST_GLOBAL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_UNSET", ZEND_AST_UNSET, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_RETURN", ZEND_AST_RETURN, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_LABEL", ZEND_AST_LABEL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_REF", ZEND_AST_REF, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_HALT_COMPILER", ZEND_AST_HALT_COMPILER, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ECHO", ZEND_AST_ECHO, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_THROW", ZEND_AST_THROW, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_GOTO", ZEND_AST_GOTO, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_BREAK", ZEND_AST_BREAK, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CONTINUE", ZEND_AST_CONTINUE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_DIM", ZEND_AST_DIM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PROP", ZEND_AST_PROP, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_STATIC_PROP", ZEND_AST_STATIC_PROP, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CALL", ZEND_AST_CALL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLASS_CONST", ZEND_AST_CLASS_CONST, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ASSIGN", ZEND_AST_ASSIGN, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ASSIGN_REF", ZEND_AST_ASSIGN_REF, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ASSIGN_OP", ZEND_AST_ASSIGN_OP, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_BINARY_OP", ZEND_AST_BINARY_OP, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_GREATER", ZEND_AST_GREATER, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_GREATER_EQUAL", ZEND_AST_GREATER_EQUAL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_AND", ZEND_AST_AND, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_OR", ZEND_AST_OR, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_ARRAY_ELEM", ZEND_AST_ARRAY_ELEM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_NEW", ZEND_AST_NEW, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_INSTANCEOF", ZEND_AST_INSTANCEOF, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_YIELD", ZEND_AST_YIELD, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_COALESCE", ZEND_AST_COALESCE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_STATIC", ZEND_AST_STATIC, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_WHILE", ZEND_AST_WHILE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_DO_WHILE", ZEND_AST_DO_WHILE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_IF_ELEM", ZEND_AST_IF_ELEM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_SWITCH", ZEND_AST_SWITCH, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_SWITCH_CASE", ZEND_AST_SWITCH_CASE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_DECLARE", ZEND_AST_DECLARE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PROP_ELEM", ZEND_AST_PROP_ELEM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CONST_ELEM", ZEND_AST_CONST_ELEM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_USE_TRAIT", ZEND_AST_USE_TRAIT, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_TRAIT_PRECEDENCE", ZEND_AST_TRAIT_PRECEDENCE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_METHOD_REFERENCE", ZEND_AST_METHOD_REFERENCE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_NAMESPACE", ZEND_AST_NAMESPACE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_USE_ELEM", ZEND_AST_USE_ELEM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_TRAIT_ALIAS", ZEND_AST_TRAIT_ALIAS, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_GROUP_USE", ZEND_AST_GROUP_USE, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_METHOD_CALL", ZEND_AST_METHOD_CALL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_STATIC_CALL", ZEND_AST_STATIC_CALL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CONDITIONAL", ZEND_AST_CONDITIONAL, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_TRY", ZEND_AST_TRY, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CATCH", ZEND_AST_CATCH, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_PARAM", ZEND_AST_PARAM, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_FOR", ZEND_AST_FOR, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_FOREACH", ZEND_AST_FOREACH, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_NAME", AST_NAME, CONST_CS | CONST_PERSISTENT);
	REGISTER_NS_LONG_CONSTANT("ast", "AST_CLOSURE_VAR", AST_CLOSURE_VAR, CONST_CS | CONST_PERSISTENT);
}
