
//lab11
#include<stdio.h>
#include<Windows.h>

void task1() {
	printf("Task1() START\n");
	
	int n, m;

	printf("Введите количество строк ");
	scanf_s("%i", &n);
	printf("Введите количество столбцов ");
	scanf_s("%i", &m);

	int i = 1;
	do {
		int j = 1;

		do {
			printf("%i ", i * 10 + j);
			j += 1;
		} while (j <= m);

		printf("\n");
		i += 1;

	} while (i <= n);

	printf("Task1() FINISH\n");
}

void task2() {
	printf("Task2() START\n");

	int n = 10;
	int i = 1;
	do {
		int j = 1;

		do {
			printf("%  3i ", i * j);
			j += 1;
		} while (j <= n);

		printf("\n");
		i += 1;

	} while (i <= n);

	printf("Task2() FINISH\n");
}

void task3() {
	printf("Task3() START\n");

	printf("Task3() FINISH\n");
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Задача 1 (i * 10 + j) \n");
		printf("2: Задача 2 (Таблица Пифагора)\n");
		printf("3: Задача 3 (Рисунок по варианту)\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		}
	} while (n != 0);
}

