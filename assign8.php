: to connect MySQL server from your website
assign8.php 
<HTML> 
 <BODY> 
 <form action="assign8.php" method="POST"> 
FirstName: <input type="text" name="fn"> <br/> 
 LastName: <input type="text" name="ln"> <br/> 
 Gender: 
 <input type="radio" name="gender" value="Male">Male 
 <input type="radio" name="gender" value="Female">Female <br/> 
 Email: <input type="text" name="emailid"> <br/> 
 City: <input type="text" name="city"> <br/> <br/> 
 <input type="submit" name="submit" value="Insert"> 
 <input type="submit" name="submit" value="Update"> 
 <input type="submit" name="submit" value="Delete" > 
 <input type="submit" name="submit" value="Show"> 
 <input type="submit" name="submit" value="OrderbyAsc"> 
 <input type="submit" name="submit" value="OrderbyDesc"> 
 <input type="submit" name="submit" value="Describe"> 
</form> 
<?php 
 $con = mysql_connect("localhost","root",""); 
 mysql_select_db("imrd",$con); 
 $fn=$_POST["fn"]; 
 $ln=$_POST["ln"]; 
 $gender=$_POST["gender"]; 
 $emailid=$_POST["emailid"]; 
 $city=$_POST["city"]; 
if(isset($_POST["submit"])&& $_POST["submit"]=="Insert") 
{ 
 $q="insert into info values('$fn','$ln','$gender','$emailid','$city')"; 
 mysql_query($q,$con); 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="Delete") 
{ 
 $q="delete from info where fn='$fn' and ln='$ln'"; 
 $result=mysql_query($q,$con); 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="Update") 
{ 
$q="update info set city='$city',emailid='$emailid' where fn='$fn' "; 
mysql_query($q,$con); 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="Show") 
{ 
$q="select * from info"; 
$result=mysql_query($q,$con); 
echo "<TABLE border=2>"; 
echo"<TR> 
 <TD>Fn</TD> 
 <TD>ln</TD> 
 <TD>gender</TD> 
 <TD>emailid</TD> 
 <TD>city</TD> 
</TR>"; 
while($row=mysql_fetch_array($result)) 
{ 
echo"<TR> 
 <TD>$row[0]</TD> 
 <TD>$row[1]</TD> 
 <TD>$row[2]</TD> 
 <TD>$row[3]</TD> 
 <TD>$row[4]</TD> 
</TR>"; 
} 
echo "</TABLE>"; 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="OrderbyAsc") 
{ 
 $q="select * from info order by fn asc"; 
 $result=mysql_query($q,$con); 
 echo "<TABLE border=2>"; 
echo"<TR> 
 <TD>fn</TD> 
 <TD>ln</TD> 
 <TD>gender</TD> 
 <TD>emailid</TD> 
 <TD>city</TD> 
 </TR>"; 
while($row=mysql_fetch_array($result)) 
{ 
echo"<TR> 
 <TD>$row[0]</TD> 
 <TD>$row[1]</TD> 
 <TD>$row[2]</TD> 
 <TD>$row[3]</TD> 
 <TD>$row[4]</TD> 
 </TR>"; 
} 
echo "</TABLE>"; 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="OrderbyDesc") 
{ 
$q="select * from info order by fn desc"; 
 $result=mysql_query($q,$con); 
 echo "<TABLE border=2>"; 
echo"<TR> 
 <TD>fn</TD> 
 <TD>ln</TD> 
 <TD>gender</TD> 
 <TD>emailid</TD> 
 <TD>city</TD> 
</TR>"; 
while($row=mysql_fetch_array($result)) 
{ 
echo"<TR> 
 <TD>$row[0]</TD> 
 <TD>$row[1]</TD> 
 <TD>$row[2]</TD> 
 <TD>$row[3]</TD> 
 <TD>$row[4]</TD> 
 </TR>"; 
} 
echo "</TABLE>"; 
} 
if(isset($_POST["submit"])&& $_POST["submit"]=="Describe") 
{ 
 $q="desc info"; 
 $result=mysql_query($q,$con); 
 echo "<TABLE border=2>"; 
 echo"<TR> 
 <TD>Field</TD> 
 <TD>Type</TD> 
 <TD>Null</TD> 
 <TD>Key</TD> 
 <TD>Default</TD> 
 <TD>Extra</TD> 
</TR>"; 
while($row=mysql_fetch_array($result)) 
{ 
echo"<TR> 
 <TD>$row[0]</TD> 
 <TD>$row[1]</TD> 
 <TD>$row[2]</TD> 
 <TD>$row[3]</TD> 
 <TD>$row[4]</TD> 
 <TD>$row[5]</TD> 
</TR>"; 
} 
echo "</TABLE>"; 
} 
?>
</form> 
 </BODY> 
</HTML> 