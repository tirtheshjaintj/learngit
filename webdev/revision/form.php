<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Basic Form</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-GLhlTQ8iRABdZLl6O3oVMWSktQOp6b7In1Zl3/Jr59b6EGGoI1aFkw7cmDA6j6gD" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js" integrity="sha384-w76AqPfDkMBDXo30jS1Sgez6pr3x5MlQ1ZAGC+nuZB+EYdgRZgiwxhTBTkF7CXvN" crossorigin="anonymous"></script>
<style>
#form{
    margin:auto;
}
</style>
</head>
<body>
<div class="container  p-5 align-center" id="form" >
<h1 class="text-center">Please Fill Your Details</h1>
<form class="row g-2 needs-validation" method="post" action="form.php" enctype="multipart/form-data">
  <div class="col-md-4">
    <label for="validationCustom01" class="form-label">First name</label>
    <input type="text" class="form-control" maxlength="10" name="fname" id="fname" value="Mark" required>
    <div class="valid-feedback">
      Looks good!
    </div>
  </div>
  <div class="col-md-4">
    <label for="validationCustom02"  class="form-label">Last name</label>
    <input type="text" class="form-control" name="lname" id="validationCustom02" value="Otto" required>
    <div class="valid-feedback">
      Looks good!
    </div>
  </div>
  <div class="col-md-4">
    <label for="validationCustomUsername" class="form-label">Email Id</label>
    <div class="input-group has-validation">
      <span class="input-group-text" id="inputGroupPrepend">@</span>
      <input type="email" name="email" class="form-control" id="validationCustomUsername" placeholder="Please Enter Your Email" aria-describedby="inputGroupPrepend" required>
      <div class="invalid-feedback">
        Please choose a username.
      </div>
    </div>
  </div>
  <div class="col-md-6">
    <label for="validationCustom03" class="form-label">City</label>
    <input type="text" class="form-control" name="city" id="validationCustom03" required>
    <div class="invalid-feedback">
      Please provide a valid city.
    </div>
  </div>
  <div class="col-md-3">
    <label for="validationCustom04" class="form-label">State</label>
    <select class="form-select" name="state" id="validationCustom04" required>
      <option selected  value="Punjab">Punjab</option>
      <option value="Gujarat">Gujarat</option>
    </select>
    <div class="invalid-feedback">
      Please select a valid state.
    </div>
  </div>
  <div class="col-md-3">
    <label for="validationCustom05" class="form-label">ZipCode</label>
    <input type="text" class="form-control" name="pincode" id="validationCustom05" required>
    <div class="invalid-feedback">
      Please provide a valid zip.
    </div>
  </div>
<div class="col-md-6">
  <label for="formFilelg" class="form-label">File Input</label>
<input class="form-control form-control" onchange="loadFile(event)" id="uploadfile" name="uploadfile" type="file"  accept="image/*" required>
<br>  
<img id="output" width=200 height=200/>
<script>
      output.style.display = 'none';
  var loadFile = function(event) {
    var output = document.getElementById('output');
    output.src = URL.createObjectURL(event.target.files[0]);
    output.onload = function() {
      URL.revokeObjectURL(output.src);
      output.style.display = 'block'; 
    }
  };
</script>
</div>
  <div class="col-12">
    <button class="btn btn-primary" type="submit" value="submit">Submit form</button>
  </div>
</form>
    </div>      
</body>
</html>
<?php
if(isset($_POST["fname"])){
if (($_FILES["uploadfile"]["type"] == "image/gif")|| ($_FILES["uploadfile"]["type"] == "image/jpeg") || ($_FILES["uploadfile"]["type"] == "image/jpg") || ($_FILES["uploadfile"]["type"] == "image/png")){
$random=rand(1000000,9999999);

$ext=pathinfo($_FILES["uploadfile"]["name"], PATHINFO_EXTENSION);


$image="image/".$random.".".$ext;
$server="localhost";
$username="root";
$password="";
$con=mysqli_connect($server,$username,$password);
date_default_timezone_set("Asia/Kolkata");
$date=date("Y-m-d H:i:s");
$fname=$_POST["fname"];
$lname=$_POST["lname"];
$city=$_POST["city"];
$state= $_POST["state"];
$email= $_POST["email"];
$pincode= $_POST["pincode"];
$sql="INSERT INTO revision.`form`(`fname`, `lname`, `email`, `city`, `state`, `pincode`,`image`) 
VALUES ('$fname','$lname','$email','$city','$state','$pincode','$image')";

if($con->query($sql)){
  move_uploaded_file($_FILES["uploadfile"]["tmp_name"],$image);
}
else{
  echo "<script>alert('Please try with another emailid');</script>";
}
$con->close();
}
else{
  echo "<script>alert('Please Add A valid Image');</script>";
}
}
?>

