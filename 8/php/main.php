<?php

$_fp = fopen("php://stdin", "r");

$i = 0;
$phoneBook = '';
$num = intval(fgets($_fp));

while ($i < $num*2) {
    $line = fgets($_fp);

    if ($i < intval($num)) {
        $phoneBook .= $line.' ';
    } else {
        if ($line != '')
            $test[] = trim($line);
    }

    $i++;
}

$phoneBook = explode(' ', $phoneBook);

for ($i = 0; $i < count($phoneBook); ++$i) {
    if ($i % 2 != 0) {
        $numbers[] = $phoneBook[$i];
    } else {
        if ($phoneBook[$i] != null)
            $names[] = $phoneBook[$i];
    }
}

$phoneBook = array_combine($names, $numbers);

foreach ($test as $item) {
    if (isset($phoneBook[$item])) {
        echo $item.'='.$phoneBook[$item];
    } else {
        echo "Not found\n";
    }
}
fclose($_fp);


?>
