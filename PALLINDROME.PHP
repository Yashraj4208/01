palindrome no
<html> 
<body> 
<form method="POST"> 
Enter the Number:<br> 
<INPUT name="n"> 
<button type="submit">Click</button> 
</form> 
<?php 
if($_POST) 
{ 
$num=$_POST['n']; 
$rev=0; 
$p=$num; 
while($num!=0) 
{ 
$rev=$rev*10+$num%10; 
$num=(int)($num/10); 
} 
if($rev==$p){ 
echo $p. " is Paliondrome Number"; 
} 
else{ 
echo $p. " is not Paliondrome Number"; 
} 
} 
?>
</body> 
</html>