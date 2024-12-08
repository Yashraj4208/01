/*Check given no is perfect or not
<html> 
<head> 
<title>Find Perfect number </title> 
</head> 
<body> 
Enter a Number 
<form method="post"> 
<input type="text" name="number"/> 
<button type="submit">Check</button> 
</form> 
<?php 
if($_POST) 
{ 
$num = $_POST['number']; 
$i=1; 
$sum=0; 
while ($i < $num) { 
if ($num % $i == 0) { 
$sum = $sum + $i; 
} 
$i++; 
} 
if($num == $sum){ 
echo "<span style='color:green'>The number $i is Perfect Number!!</span>"; 
}else{ 
echo "<span style='color:red'>The number $i is not a Perfect Number!!</span>"; 
} 
} 
?>
</body> 
</html>