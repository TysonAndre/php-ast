--TEST--
ast\get_supported_versions() function
--FILE--
<?php

var_dump(ast\get_supported_versions());
var_dump(ast\get_supported_versions(true));

?>
--EXPECT--
array(2) {
  [0]=>
  int(70)
  [1]=>
  int(80)
}
array(2) {
  [0]=>
  int(70)
  [1]=>
  int(80)
}
