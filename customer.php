<?php 
$con=mysql_connect("localhost","root",""); 
mysql_select_db("imrd",$con); 
$q="select * from customer"; 
$result=mysql_query($q,$con); 
echo "<TABLE border=2>"; 
echo"<TR> 
 <TD>cust_no</TD> 
 <TD>cust_name</TD> 
 <TD>Item_purchase</TD> 
 <TD>mob_no</TD> 
</TR>"; 
while($row=mysql_fetch_array($result)) 
{ 
echo"<TR> 
 <TD>$row[0]</TD> 
 <TD>$row[1]</TD> 
 <TD>$row[2]</TD> 
 <TD>$row[3]</TD> 
</TR>"; 
} 
echo "</TABLE>"; 
?>