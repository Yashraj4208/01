<html>
<body>
<form method="POST">
Enter the number:
<input type="text" name="n">
<input type="submit" value="submit" name="submit">
</form>
<?php
if($_POST)
{
$num=$_POST['n'];
$n1=0;
$n2=1;
$count=0;
echo "<h3> Fibonacci series are: ";
echo $n1.' '.$n2.' ';
while($count<$num-2){
$n3=$n2+$n1;
echo $n3.' ';
$n1=$n2;
$n2=$n3;
$count=$count+1;
}
}
?>
</body>
</html>