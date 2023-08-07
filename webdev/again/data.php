<style>
table, th, td {
  border:1px white dashed;
  padding:5px;
  margin:auto;
  font-size: larger;
}
*{
  background:black;
  color:white;
}
</style>
<?php
$server="localhost";
$username="root";
$password="";
$con=mysqli_connect($server,$username,$password);
$sql="SELECT * FROM again.student ;";
$result=$con->query($sql);
if(mysqli_num_rows($result)>0){
    echo'<table>';
    while($row=mysqli_fetch_assoc($result)){
        print_r("
        <tr>
        <td>".$row["name"]."</td>
          <td>".$row["rollno"]."</td>
          <td>".$row["marks"]."</td>
        </tr>
      ");
    }
    echo "</table>";
}
$con->close();
?>
