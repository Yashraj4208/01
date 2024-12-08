
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

  $lang=$lang1." ".$lang2." ";
if(empty($fname))
  {
	  $error[]="First name should not blank";
  }
if(empty($gender))
  {
	  $error[]="Select Gender";
  }
if(empty($lname))
  {
	  $error[]="Last name should not blank";
  }
if(empty($email))
  {
	  $error[]="email should not blank";
  }
if(empty($pass) && empty($cpass)  )
  {
	  $error[]="Password should not blank";
	
  }
if(empty($quli))
  {
	  $error[]="Qualification should not blank";
  }
if(empty($city))
  {
	  $error[]="City should not blank";
  }
if(empty($country))
  {
	  $error[]="Country should not blank";
  }

if(empty($lang1)&& empty($lang2)&& empty($lang3))
  {
	  $error[]="Language should not blank";
  }
if(empty($question))
  {
	  $error[]="Question should not blank";
  }
if(empty($answer))
  {
	  $error[]="Answer should not blank";
  }
if((strcmp($pass,$cpass)<0) || (strcmp($pass,$cpass)>0))
   {
	 $error[]="password and confirmation password not match";
   }

	echo"USER INFORMATION <BR>";
echo "*******************************************<br>";
			echo "First Name :-  ".$fname."<br>";
			echo "Last Name :- ".$lname."<br>";
			echo "Email :- ".$email."<br>";
			echo "Password :- ".$pass."<br>";
			echo "Qualification :-  ".$quli."<br>";
			echo "Gender :-".$gender."<br>";
			echo "City :- ".$city."<br>";
			echo "Country :-  ".$country."<br>";
			echo "Languages Known :-  ".$lang."<br>";
			echo "Security Question :-  ".$question."<br>";
			echo "Answer of  Security Question :-  ".$answer."<br>";

	  }
  
 ?>
