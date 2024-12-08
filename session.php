
<?php // Set session variables 
session_start(); 
if(isset($_POST['submit'])) 
{ 
 $color=$_POST['color']; 
 $animal=$_POST['animal']; 
$_SESSION["favcolor"] = $color; 
$_SESSION["favanimal"] = $animal; 
echo "<h3>Session variables are set.</h3>"; 
} 
?>
<HTML> 
 <HEAD> 
 <BODY> 
 <form method="post" action="session.php"> 
 Enter Fav Color <input type="text" name="color"><br> 
 Enter Fav Animal <input type="text" name="animal"><br> 
 <input type="submit" name="submit" value="submit"> 
 </form> 
</BODY> 
</HTML> 
