#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

#define MAX_LEN 80
char s[MAX_LEN];

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("ЛР23 Задача 2\n");


	FILE* fin = fopen("D:\\Stadies\\Project1\\text2.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	FILE* fout;
	fout = fopen("D:\\Stadies\\Project1\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toupper(s[i]);

			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
	
}