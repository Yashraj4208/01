registration.php 
 <?php 
if(isset($_POST["submit"])) 
 { 
 $fname=$_POST['fname']; 
 $lname=$_POST['lname']; 
 $email=$_POST['email']; 
 $pass=$_POST['pass']; 
 $cpass=$_POST['cpass']; 
 $quli=$_POST['quli']; 
 $city=$_POST['list1']; 
 $country=$_POST['list2']; 
 $question=$_POST['list3']; 
 $answer=$_POST['ans']; 
 $gender=$_POST['r1']; 
 $lang1=$_POST['c1']; 
 $lang2=$_POST['c2']; 
 $lang3=$_POST['c3']; 
 $lang=$lang1." ".$lang2." ".$lang3; 
 if(empty($fname)) 
 { 
 $error[]="Emp First name should not blank"; 
 } 
 if(empty($gender)) 
 { 
 $error[]="Select Gender"; 
 } 
 if(empty($lname)) 
 { 
 $error[]="Emp Last name should not blank"; 
 } 
 if(empty($email)) 
 { 
 $error[]="Emp email should not blank"; 
 } 
 if(empty($pass) && empty($cpass) ) 
 { 
 $error[]="Emp Password should not blank"; 
 
 } 
 if(empty($quli)) 
 { 
 $error[]="Emp Qualification should not blank"; 
 } 
 if(empty($city)) 
 { 
 $error[]="Emp City should not blank"; 
 } 
 if(empty($country)) 
 { 
 $error[]="Emp Country should not blank"; 
 } 
 
 if(empty($lang1) && empty($lang2) && empty($lang3)) 
 { 
 $error[]="Emp Language should not blank"; 
 } 
 if(empty($question)) 
 { 
 $error[]="Emp Question should not blank"; 
 } 
 if(empty($answer)) 
 { 
 $error[]="Emp Answer should not blank"; 
 } 
 if((strcmp($pass,$cpass)<0) || (strcmp($pass,$cpass)>0)) 
 { 
 $error[]="Emp password and confirmation password not match"; 
 } 
 if(count($error)>0) 
 { 
 echo"<UL>"; 
 foreach($error as $e) 
 { 
 echo "<li>".$e."</li>"; 
 } 
 echo "</UL>"; 
 } 
 else 
 { 
 echo"USER INFORMATION <BR>"; 
 echo "*******************************************<br>"; 
 echo "Emp First Name :- ".$fname."<br>"; 
 echo "Emp Last Name :- ".$lname."<br>"; 
 echo "Emp Email :- ".$email."<br>"; 
 echo "Emp Password :- ".$pass."<br>"; 
 echo "Emp Qualification :- ".$quli."<br>"; 
 echo "Emp Gender :-".$gender."<br>"; 
 echo "Emp City :- ".$city."<br>"; 
 echo "Emp Country :- ".$country."<br>"; 
 echo "Emp Languages Known :- ".$lang."<br>"; 
 echo "Emp Security Question :- ".$question."<br>"; 
 echo "Emp Answer of Security Question :- ".$answer."<br>"; 
 } 
 } 
?>