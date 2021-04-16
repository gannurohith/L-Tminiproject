  
void main() {
	while (true) {
		printf("Set speed value for new game (1 - 100)\nSpeed : \n");
		int a;
		scanf_s("%d", &a);
		if (a > 100) a = 100;
		if (a < 1) a = 1;
		Speed = (int) 1100 - a * 10;
		GameHandler();
	}
	
}
