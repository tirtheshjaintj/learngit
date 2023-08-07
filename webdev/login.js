  const doc=document;
  function login(){
  let user=doc.getElementById("user").value;
  let pass=doc.getElementById("pass").value;
  if(user==="Duke"&&pass==="Duke"){
      localStorage.setItem("duke", "1");
location.href="https://apniwebapp.com/d3project3/duke001.html";

  }
  else{
    confirm("You Have Entered Wrong Username/Password");
  }
}
  function submitForm(event){
    event.preventDefault();
   // window.history.back();
  }