#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

int myisdigit(char c) {
	if (c >= '0' && c <= '9') 
		return 1;
	return 0;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Ввод строки

	char s[80];
	printf("Введите строку: ");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (myisdigit(s[i]))
			s[i] = '$';
	}

	printf("\nСтрока после обработки = \"%s\"", s);

	{
		int x;
		scanf("%d", &x);
	}
}