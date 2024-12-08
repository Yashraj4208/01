<html> 
<body> 
<form method="POST"> 
Enter the number: 
<INPUT name="num"> 
<input type="submit" value="submit" name="submit"> 
</form> 
<?php 
if($_POST) 
{ 
$num=$_POST['num']; 
$n=$num; 
$sum=0; $rem=0; 
for($i=0;$i<=strlen($num);$i++){ 
$rem=$num%10; 
$sum=$sum+$rem; 
$num=$num/10; 
} 
echo"sum of digits $n is $sum"; 
} 
?>
</body> 
</html>