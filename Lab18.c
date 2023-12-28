#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Куликова Дина\n");
	printf("Задача 1\n");

	
	int a, b, c, d, e;
	int p, s;

	scanf("%d%d%d", &a, &b, &c);
	printf("ввели: %d, %d, %d\n", a, b, c);

	p = a * b * c;
	printf("p =  %d\n", p);




	printf("Задача 2\n");

	FILE* fin = fopen("D:\\Stadies\\Labs\\in2.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d %d %d", &a, &b, &c);
	fclose(fin);

	 
	printf("ввели: %d, %d, %d\n", a, b, c);

	
	p = a * b * c;


	printf("p =  %d\n", p);


	FILE* fout;
	fout = fopen("D:\\Stadies\\Labs\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);



	printf("Задача 3\n");

	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);

	s = a + b + c + d + e;
	printf("s =  %d\n", s);



	printf("Задача 4\n");

	FILE* fin4 = fopen("D:\\Stadies\\Labs\\in4.txt", "rt");
	if (fin4 == NULL) {
		printf("Входной файл не найден");
		return;
	}
	scanf(fin4, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin4);

	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);


	s = a + b + c + d + e;


	printf("s =  %d\n", s);


	FILE* fout4;
	fout4 = fopen("D:\\Stadies\\Labs\\out4.txt", "wt");
	if (fout4 == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	fprintf(fout4, "%d", s);
	fclose(fout4);




	printf("Задача 5\n");

	int arr[10];
	int n; //numb of elements saved from file
	int i;

	FILE* fin5 = fopen("D:\\Stadies\\Labs\\in5.txt", "rt");
	if (fin5 == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin5, "%d", &n);
	
	for (i = 0; i < n; i++) {
		fscanf(fin5, "%d", &arr[i]);
	}

	fclose(fin5);

	printf("ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	s = 0;
	for (i = 0; i < n; i++) {
		s += arr[i];
	}
	float sa = (float)s / n;
	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if (arr[i] > sa) {
			arr[i] *= 10;
		}
	}

	printf("вывели массив arr[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	FILE* fout5;
	fout5 = fopen("D:\\Stadies\\Labs\\out5.txt", "wt");
	if (fout5 == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout5, "%d\n", n);

	for (i = 0; i < n; i++) {
		fprintf(fout5, "%d", arr[i]);
	}
	fclose(fout5);


	printf("\nЗадача 6\n");

	int arr2[10];

	FILE* fin6 = fopen("D:\\Stadies\\Labs\\in6.txt", "rt");
	if (fin6 == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin6, "%d", &n);

	for (i = 0; i < n; i++) {
		fscanf(fin6, "%d", &arr2[i]);
	}

	fclose(fin6);

	printf("ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}

	s = 0;
	for (i = 0; i < n; i++) {
		s += arr2[i];
	}
	sa = (float)s / n;
	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if (arr2[i]%2==0 && arr2[i]< sa) {
			arr2[i] /= 2;
		}
	}

	printf("вывели массив arr[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}

	FILE* fout6;
	fout6 = fopen("D:\\Stadies\\Labs\\out6.txt", "wt");
	if (fout6 == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout6, "%d\n", n);

	for (i = 0; i < n; i++) {
		fprintf(fout6, "%d", arr2[i]);
	}
	fclose(fout6);
}