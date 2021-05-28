<?php

$N = intval(trim(fgets(STDIN)));

for ($N_itr = 0; $N_itr < $N; $N_itr++) {
    $first_multiple_input = explode(' ', rtrim(fgets(STDIN)));

    $firstName = $first_multiple_input[0];

    $emailID = $first_multiple_input[1];
    
    // Without regex(
    $expArr = explode("@", $emailID);
    preg_match('/@[aA-zZ]+\.[aA-zZ]+/', $emailID, $matches);
    
    if ($matches[0] == '@gmail.com') {
        $names[] = $firstName;
    }
}

sort($names);

foreach ($names as $name) {
    echo $name . PHP_EOL;
}
