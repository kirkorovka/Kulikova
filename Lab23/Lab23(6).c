#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

#define MAX_LEN 80
char s[MAX_LEN];
char str[20];

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("ЛР23 Задача 6\n");


	FILE* fin = fopen("D:\\Stadies\\Project1\\text6.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	FILE* fout;
	fout = fopen("D:\\Stadies\\Project1\\out6.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			
			int count = 0;

			for (int i = 0; s[i] != '\0'; i++) {
				if ((s[i])==';') {
					count += 1;
				}
				
			}
			sprintf(str, " %d ", count);
			fprintf(fout, "%s%s\n", s, str);
			printf(">>%s%s<< \n", s, str);
			
			
		}
	}
	
	fclose(fin);
	fclose(fout);
}