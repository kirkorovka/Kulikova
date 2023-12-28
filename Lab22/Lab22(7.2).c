#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>






void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Ввод строки

	char s[80];
	printf("Введите строку: ");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);


	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}

	printf("\nСтрока после обработки = \"%s\"", s);

	{
		int x;
		scanf("%d", &x);
	}
}

int toUpperAll(int c) {
	int new_c = c;
	//eng
	if (c >= 'a' && c <= 'z') 
		new_c = 'A' + (c - 'a');

	//rus
	if (c >= 'а' && c <= 'п') 
		new_c = 'А' + (c - 'а');
	if (c >= 'р' && c <= 'я')
		new_c = 'Р' + (c - 'р');
	if (c == 'ё')
		new_c = 'Ё';
	return new_c;
}
