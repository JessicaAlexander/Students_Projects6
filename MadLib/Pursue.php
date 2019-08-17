<!doctype html>
<html lang="en">
<head>
	<title>Forum Posting</title>
</head>
<body>
<?php 
// --------------
// -- Programmer:  [Jessica Alexander]
// -- Course:      ITSE-1306 (Intro to PHP)
// -- Instructor:  Cesar "Coach" Marrero
// -- Assignment:  [Pursue5]
// -- Description: [Manipulates data]
// ---------------
$first_name = trim($_POST['first_name']);
$last_name = trim($_POST['last_name']);
$posting = trim($_POST['posting']);
$name = $first_name . ' ' . $last_name;
$words = str_word_count($posting);
$posting = str_ireplace('bad words', 'Curse Words', $posting);
print "<div>Thank you, $name, for your posting:
<p>$posting</p>
<p>($words words)</p></div>";
?>
</body>
</html>