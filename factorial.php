<html> 
<body> 
<form method="POST"> 
Enter the Number :<br> 
<INPUT name="n1"> 
<input type="submit" value="submit" name="submit" /> 
</form> 
<?php 
if($_POST) 
{ 
$num=$_POST['n1']; 
$fact=1; 
echo " Factorial of $num <br><br>"; 
for($i=1;$i<=$num;$i++){ 
$fact=$fact*$i; 
} 
echo $fact. "<br>"; 
} 
?>
</body> 
</html>