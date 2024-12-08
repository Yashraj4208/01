exception.php 
<?php 
//create function with an exception 
function checkNum($number) 
{ 
 if($number>5) 
 { 
 throw new Exception("Value must be 5 or below"); 
 } 
} 
if(isset($_POST['submit'])) 
{ 
$number=$_POST['no']; 
//trigger exception in a "try" block 
try { 
 checkNum($number); 
 //If the exception is thrown, this text will not be shown 
 echo 'If you see this, the number is 5 or below'; 
} 
//catch exception 
catch(Exception $e) 
 { 
 echo 'Message: ' .$e->getMessage(); 
 } } 
?>
<HTML> 
 <HEAD> 
 <BODY> 
 <form method="post" action="exception.php"> 
 Enter Username <input type="text" name="no"><br> 
 <input type="submit" name="submit" value="submit"> 
 </form> 
 </BODY> 
</HTML>