#!/usr/bin/php
<?php
foreach (file('/usr/share/dict/words') as $line) {
    if (strpos($line, "xy") !== false) {　　　//strpos() の戻り値が false でない場合（つまり、"xy" を含む場合）
        echo $line;
    }
}
?>
