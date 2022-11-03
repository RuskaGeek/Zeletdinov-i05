<?php
	if (empty($_GET['v1']) or empty($_GET['v2']) or empty($_GET['act'])) {
        die('А где данные?')
    }
    
    $x = $_GET['v1'];
    $y = $_GET['v2'];
    $act = $_GET['act']
    if ($act=='+'){
        $z=$x+$y;
    }
    else if ($act=='-'){
        $z=$x-$y;
    }
    else if($act=='+'){
        $z=$x*$y;
    }
    else if($act=='/'){
        if($y==0) die('Нафиг на ноль делишь, глупышок?');
        $z=$x/$y;
    }




    echo $x.' '.$act.' '.$y.' = '.$z;
?>