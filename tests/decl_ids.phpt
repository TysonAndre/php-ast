--TEST--
Closures should have unique identifiers within parsed code
--FILE--
<?php

require __DIR__ . '/../util.php';

$code = <<<'PHP'
<?php
function () {}; function () {};
function test() {} function test() {}
class Test {} class Test{}
PHP;
echo ast_dump(ast\parse_code($code, $version=80)) . "\n";

?>
--EXPECTF--
AST_STMT_LIST
    0: AST_CLOSURE
        flags: 0
        name: "{closure}"
        docComment: null
        params: AST_PARAM_LIST
        uses: null
        stmts: AST_STMT_LIST
        returnType: null
        attributes: null
        __declId: 0
    1: AST_CLOSURE
        flags: 0
        name: "{closure}"
        docComment: null
        params: AST_PARAM_LIST
        uses: null
        stmts: AST_STMT_LIST
        returnType: null
        attributes: null
        __declId: 1
    2: AST_FUNC_DECL
        flags: 0
        name: "test"
        docComment: null
        params: AST_PARAM_LIST
        stmts: AST_STMT_LIST
        returnType: null
        attributes: null
        __declId: 2
    3: AST_FUNC_DECL
        flags: 0
        name: "test"
        docComment: null
        params: AST_PARAM_LIST
        stmts: AST_STMT_LIST
        returnType: null
        attributes: null
        __declId: 3
    4: AST_CLASS
        flags: 0
        name: "Test"
        docComment: null
        extends: null
        implements: null
        stmts: AST_STMT_LIST
        attributes: null
        __declId: 4
    5: AST_CLASS
        flags: 0
        name: "Test"
        docComment: null
        extends: null
        implements: null
        stmts: AST_STMT_LIST
        attributes: null
        __declId: 5
