primenoingivenrange
<html>
		<body>
			<form method="post">
				Enter the First number: <INPUT name="n1"><br>
				Enter the Second number:<INPUT name="n2">
										<input type="submit" name="submit" value="submit">
			</form>
		<?php
			if($_POST)
			{
				$n1=$_POST['n1'];
				$n2=$_POST['n2'];
				for($i=$n1;$i<=$n2;$i++)
				{
					if($i==2 || $i==3|| $i==5 || $i==7) 
					{
						echo " $i ";
					}
					else 
					if(($i%2)!= 0 && ($i%3) !=0 && ($i%5) !=0 && ($i%7) !=0) 
					{
						echo " $i ";
					}
					else
				continue;
				} 
				echo "are Prime number between $n1 and $n2 ";
			}
		?>
		</body>
</html> 