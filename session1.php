session1.php 
<?php 
session_start(); 
echo "<h3> session variables that were set on previous page are</h3> <br>"; 
echo "Favorite color is " . $_SESSION["favcolor"]."<br>"; 
echo "Favorite animal is " . $_SESSION["favanimal"]; 
?>