<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
if(isset($_REQUEST["name"])){
$name=$_REQUEST["name"];
$marks=$_REQUEST["marks"];
echo $name.$marks;

$conn=mysqli_connect("localhost","root","","again");
$sql="INSERT INTO `student`(`name`, `marks`) VALUES ('$name','$marks')";

if($conn->query($sql)){
echo "Added";
}

$conn->close();





}


?>

<form action="revise.php" method="post">
<label for="name">Enter __Name</label>
<input type="text" name="name" id="name" required>
<br>
<br>
<label for="marks">Enter  _Marks</label>
<input type="number" name="marks" id="marks" required>
<br>
<br>
<input type="submit" value="SUBMIT">

</form>




</body>
</html>