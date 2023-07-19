#!/usr/bin/php
<?php
foreach (file('/usr/share/dict/words') as $line) {
    if (strpos($line, "abc") !== false) {　　　//strpos() の戻り値が false でない場合（つまり、"abc" を含む場合）
        echo $line;
    }
}
?>
