#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


int* pa; 
int n;

void Load() {
	FILE* fin = fopen("D:\\Stadies\\Labs\\19in4.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}

	fscanf(fin, "%d", &n);
	
	pa = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}

	printf("ввели массив pa[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", pa[i]);
	}
	printf("\n");

	fclose(fin);
}

void SaveResult() {

	float max = 0;
	float s = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] > max) {
			max = pa[i];
		}
	}
	


	int m = 0;
	for (int i = 0; i < n; i++) {
		if (pa[i] >= ((2*max)/3)) {
			m++;
		}
	}

	FILE* fout = fopen("D:\\Stadies\\Labs\\19out4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}


	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] >= ((2 * max) / 3)) {
			fprintf(fout, "%d ", pa[i]);
		}
	}

	printf("вывели массив pa[%d] = ", m);
	for (int i = 0; i < n; i++) {
		if (pa[i] >= ((2 * max) / 3)) {
			printf("%d ", pa[i]);
		}
	}

	fclose(fout);
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task4!\n");

	Load();
	SaveResult();

	free(pa);
}