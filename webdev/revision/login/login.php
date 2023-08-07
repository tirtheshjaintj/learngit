<?php
session_start();
if(isset($_SESSION["email"])){
    header("location: session.php");
}
$server="localhost";
$username="root";
$password="";
$con=mysqli_connect($server,$username,$password);
if ($con->connect_error) {
  die("Connection failed: " . $con->connect_error);
}
else{
  // echo "Connection successful";
} 

if(isset($_POST["email"])){
$pass = $_POST["password"];
$email = strtolower($_POST["email"]);
$query1="select password from revision.account where email='$email'";
$result=mysqli_query($con,$query1);
$row=mysqli_fetch_row($result);
if(password_verify($pass,$row[0])){
$_SESSION["password"]=$pass;
$_SESSION["email"]=$email;
header("Location: session.php");
}
else{
echo "<script>alert('Invalid email or password');</script>"; 
}
};
mysqli_close($con);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
    <title>Login</title>
</head>
<body>
  <div class="container p-5">
  <h3>Login Form</h3>
  <form action="login.php" method="post">
  <div class="mb-2">
    <label for="exampleInputEmail1" class="form-label">Email address</label>
    <input type="email" class="form-control border border-dark" name="email" id="exampleInputEmail1" aria-describedby="emailHelp" required>
    <div id="emailHelp" class="form-text">We'll never share your email with anyone else.</div>
  </div>
  <div class="mb-2">
    <label for="exampleInputPassword1"  class="form-label">Password</label>
    <input type="password" class="form-control border border-dark" name="password" id="exampleInputPassword1" required>
  </div>
  <button type="submit" class="btn btn-primary">Submit</button>
</form>
  </div>
</body>
</html>