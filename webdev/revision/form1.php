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
$sql="SELECT * FROM revision.form ;";
$result=$con->query($sql);
if(mysqli_num_rows($result)>0){
    echo'<table>';
    while($row=mysqli_fetch_assoc($result)){
        print_r("
        <tr>
        <td>".$row["id"]."</td>
          <td>".ucwords($row["fname"])."</td>
          <td>".ucwords($row["lname"])."</td>
          <td>".$row["pincode"]."</td>
          <td>".ucwords($row["email"])."</td>
          <td>".ucwords($row["state"])."</td>
          <td>".ucwords($row["city"])."</td>
          <td><a href='".$row["image"]."' target='_blank'><img src='".$row["image"]."' height=100 width=200></a></td>
        </tr>
      ");
    }
    echo "</table>";
}
$con->close();
?>
