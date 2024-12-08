: Reverse a given no in php
<html> 
<body> 
<form method="POST"> 
Enter the number: <INPUT name="n"> 
<input type="submit" name="submit" value="submit"> 
</form> 
<?php 
if($_POST) 
{ 
$num=$_POST['n']; 
$rev=0; 
$n=$num; 
while($num>0){ 
$rev=$rev*10; 
$rev=$rev+$num%10; 
$num=(int)($num/10); 
} 
echo "Reverse Number of $n is : $rev"; 
} 
?>
</body> 
</html> 