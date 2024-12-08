<?php 
session_start(); 
$_SESSION["cnt"]=$_SESSION["cnt"]+1; 
echo "<h2>Page loaded ".$_SESSION['cnt']." Times</h2>"; 
?>
