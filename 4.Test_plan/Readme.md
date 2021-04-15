# Test Plan:
## Table no: High level test plan
|Test ID	| Description |	Exp I/P |	Exp O/P	|
| ------------- | ------------- | ------------- | ------------- |
|H_01 | check whether the console displays the game or not | NA | playing Field|
|H_02 | check whether the snake catches the food | U,D,L,R keys| Size of the snake increases|
|H_03| check whether the snake hits the wall , tail or not | Wrong move| Game over |
## Table no: low level test plan
|Test ID	| Description |	Exp I/P |	Exp O/P	|
| ------------- | ------------- | ------------- | ------------- |
|L_01 | Check if the basic requirement to the game playing field is created or not. A rectangular box should be created with snake in it and it is the first step in the program to play the game| NA | playing Field|
|L_02 | Player can the up,down right,left keys to move the snake and change directions to catch the food everytime the snake catches the food the size of the snake is increased by 1 unit| Up,Down,Left,Right keys| Size of the snake increases by 1unit|
|L_03| check whether the player make a wrong move by hitting the wall or hitting tail if he does it then the player is out of the game | Wrong move| Game over and player's score is displayed and asks whether he want to play the game again |
