<?php
$server="localhost";
$user="root";
$pass="";
$con=mysqli_connect($server,$user,$pass);
$sql="SELECT * FROM revision.form";
$result=$con->query($sql) or die("Wrong query");
if(mysqli_num_rows($result)>0){
while($row=mysqli_fetch_assoc($result)){
print_r($row);
echo "<br>";
};
}



?>