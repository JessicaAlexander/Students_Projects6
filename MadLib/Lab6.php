<!doctype html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Forum Posting</title>
</head>
<body>
<?php 
// --------------
// -- Programmer:  [Jessica Alexander]
// -- Course:      ITSE-1306 (Intro to PHP)
// -- Instructor:  Cesar "Coach" Marrero
// -- Assignment:  [Lab6]
// -- Description: [Mad Lib]
// ---------------
if(isset($_POST['gethint'])){ 
   $noun=$_POST['noun']; 
   $verb=$_POST['verb']; 
   $adjective=$_POST['adjective']; 
   $adverb=$_POST['adverb']; 

   echo('   <link rel="stylesheet" href="Lab6.css">');
   echo "<p><br>My super sassy, super ".$adjective.", and beloved ".$noun." ".$verb." " .$adverb. "! 
   That's the truth!</br>Isn't that annoying!!!</P>";
}
?>
</body>
</html>