<?php
	require_once 'User.php';

	$users = [];
	$users[] = new User('Ruslan', 'Zeletdinov', 18);
	$users[] = new User('Artem', 'Boychenko', 18);
	$users[] = new User('Anatolik', 'Borisov', 18);

	foreach ($users as $user){
	$user->show();
	}
?>

