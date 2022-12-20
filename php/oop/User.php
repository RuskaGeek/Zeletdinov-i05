<?php
	class User {
		private $name;
		private $surname;
		private $age;

		public function show(){
			echo $this->name.' '.$this->surname.' '.$this->age' let'.PHP_EOL;
		}

	public function set($n,$s,$a) {
		$this->name = $n;
		$this->surname = $s;
		$this->age = $a;
	}
}
	$x = new User('Ruslan', 'Zeletdinov', 35);
	$x->show();
?>

