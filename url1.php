url1.php 
<?php 
 if(isset($_GET['submit'])) 
 { 
 $number=$_GET['no']; 
 $fact=1; 
 $number; 
 for($i=1;$i<=$number;$i++) 
 { 
 $fact=$fact*$i; 
 } 
 echo "<h1>Factorial of $number is :- ".$fact."</h1>"; 
 } 
?>