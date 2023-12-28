#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 

	//task1
	char name[12];
	printf("Введите ваше имя: ");
	fgets(name, 11, stdin);
	printf("Приветствую тебя, %s\n", name);

	//task2
	printf("Введите символ = ");
	int ch = getchar();

	for (int c = ch; c <= ch + 19; c++) {
		printf("'%c' (%d)\n", c, c);
	}
	printf("\n\n\n");
	
	{
		int x;
		scanf("%d", &x);
	}
	
}