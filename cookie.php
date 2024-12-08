cookie.php 
<?php 
if(isset($_POST['submit'])) 
{ 
 $user=$_POST['user']; 
 $cookie_name = $user; 
setcookie("user", $cookie_name, time() + (86400 * 30), "/"); // 86400 = 1 day 
} 
if(isset($_POST['submit1'])) 
{ 
setcookie("user",$cookie_name, time() - (86400 * 30), "/"); // 86400 = 1 day
} 
?>
<HTML> 
 <HEAD> 
 <BODY> 
 <form method="post" action="cookie.php"> 
 Enter Username <input type="text" name="user"><br> 
 <input type="submit" name="submit" value="Submit"> 
 <input type="submit" name="submit1" value="Delete"> 
 </form> 
 </BODY> 
</HTML> 
