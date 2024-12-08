cookie1.php 
<?php 
if(!isset($_COOKIE["user"])) 
{ 
echo "Cookie is not set!"; 
} else 
{ 
$cookie_name=$_COOKIE["user"]; 
echo "Cookie $cookie_name is set!<br>"; 
} 
?>