<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="refresh" content="20">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
    <title>PHP Revision</title>
    <style>
        *{
            background:black;
            color:white;
            font-size:xx-large;
            margin:auto;
        }
        div.cont{
            margin:auto;
        }
    </style>
</head>
<body>
    <div class="cont">
    <?php
    $hello="bro";
    echo "<h1>hello world Bro Hye</h1>";
    echo $hello;
    const HELLO="hello";
    ECHO "BRO";
    echo HELLO;
    $lang=array("hello","bro");
    echo $lang[0].$lang[1];
    $a=0;
    while($a<10){
        echo "<br>".$a."";
        $a++;
    }
    print "<br>".$a;
    date_default_timezone_set("Asia/Kolkata");
    echo "<br>Today is " . date("d/m/Y ") . "<br>";
    echo "<br>The time is " . date("h:i:sa");
    echo "<br>".rand(1000000,9999999);
?>
    </div>

</body>
</html>