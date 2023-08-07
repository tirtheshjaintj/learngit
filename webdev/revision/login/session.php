<?php
session_start();
if(isset($_SESSION["email"])){
echo "welcome ".$_SESSION["email"];
echo"<br> <a href='logout.php'><h2>Logout</h2></a>";
}
else{
    header("location: login.php");
}

?>