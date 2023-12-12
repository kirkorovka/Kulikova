//lab 8.1

#include <stdio.h>
#include <Windows.h>

void aboutMe() {
	printf("Куликова\n");
	printf("Диана\n");
	printf("Рафиковна\n");
	printf("\n");
	printf("Группа: ПИбд - 13\n");
	printf("Дата: 21.10.2023\n");
	printf("Предмет: Основы алгоритмизации и програмирования\n");
	printf("Лабораторная работа №8\n");
	printf("\n");
	printf("\n");
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	aboutMe();
}