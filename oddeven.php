<html> 
<body> 
<form method="POST"> 
Enter the number: <input type="text" name="n"> 
<input type="submit" value="submit" name="submit"> 
</form> 
<?php 
if($_POST) 
{ 
$num=$_POST['n']; 
if($num%2==0){ 
echo "$num is Even"; 
}else{ 
echo "$num is Odd"; 
} 
} 
?>
</body> 
</html>