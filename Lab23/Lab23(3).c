
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 80
char s[MAX_LEN];

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("ЛР23 Задача 3\n");



	FILE* fin = fopen("D:\\Stadies\\Project1\\text3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	FILE* fout;
	fout = fopen("D:\\Stadies\\Project1\\out3.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	
	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			int in = s['\n'];
			int flag = 0;
			int index = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (isalpha(s[i])) {
					flag=1;
				}
				index=i;
			}
			if (flag == 1) {
				s[index] = '#';
				s[index + 1] = '\n';
				s[index + 2] = '\0';
			}
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
}