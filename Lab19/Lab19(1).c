#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int arr[1000];
int n;

void Load() {
	
	FILE* fin = fopen("D:\\Stadies\\Labs\\19in1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}

	
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &arr[i]);
	}
	

	printf("ввели массив arr[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	fclose(fin);


}

void SaveResult() {
	
	float sa = 0;
	float s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
	}
	sa = s / n;

	
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > sa) {
			m++;
		}
	}
	FILE* fout = fopen("D:\\Stadies\\Labs\\19out1.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}

	
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (arr[i] > sa) {
			fprintf(fout, "%d ", arr[i]);
		}
	}
	
	
	printf("вывели массив arr[%d] = ", m);
	for (int i = 0; i < n; i++) {
		if (arr[i] > sa) {
			printf("%d ", arr[i]);
		}
	}


	fclose(fout);
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task1!\n");

	Load();
	SaveResult();
}