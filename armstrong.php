<html> 
<body> 
<form method="POST"> 
Enter the number: 
<input type="number" name="num"> 
<input type="submit" value="submit"> 
</form> 
<?php 
if($_POST){ 
$num=$_POST['num']; 
$a=$num; 
$sum=0; 
while($a!=0){ 
$rem=$a%10; 
$sum=$sum+($rem*$rem*$rem); 
$a=$a/10; 
} 
if($num==$sum){ 
echo "$num an Armstrong Number"; 
}else{ 
echo "$num is not Armstrong Number"; 
} 
} 
?>
</body> 
</html>