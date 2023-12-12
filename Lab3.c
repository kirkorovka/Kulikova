//lab 3.1

#include <stdio.h>
#include <Windows.h>

void main()
{
	int a, b, min, max;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Ввдите первое число ");
	scanf_s("%i", &a);
	printf("Введите второе число ");
	scanf_s("%i", &b);
	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("бОльшее число = %i\n", max);
	printf("меньшее число = %i\n", min);
}

//lab 3.2
#include<stdio.h>
#include<Windows.h>

void main() {

	int v1, v2, v3, v4, v5;
	int max;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите пять чисел: ");
	scanf_s("%i%i%i%i%i", &v1, &v2, &v3, &v4, &v5);
	
	max = v1;
	if (v2 > max) {
		max = v2;
	}
	if (v3 > max) {
		max = v3;
	}
	if (v4 > max) {
		max = v4;
	}
	if (v5 > max) {
		max = v5;
	}

	printf("Самое большое число %i", max);
}


//lab 3.3
#include <stdio.h>
#include <Windows.h>

void main() {

	int temp;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите температуру в помещении ");
	scanf_s("%i", &temp);

	if (temp < 18) {
		printf("холодно");
	}
	if (temp >= 18 && temp < 22) {
		printf("прохладно");
	}
	if (temp >= 22 && temp < 26) {
		printf("тепло");
	}
	if (temp >= 26) {
		printf("жарко");
	}
}

//lab 3.4

#include <stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Ульяновск, июль\n");
	int temp;
	printf("Введите температуру ");
	scanf_s("%i", &temp);

	if (temp < 18) {
		printf("дубачелло");
	}
	if (temp >= 18 && temp < 22) {
		printf("прохладненько");
	}
	if (temp >= 22 && temp < 28) {
		printf("тепло");
	}
	if (temp >= 28) {
		printf("жара");
	}

}

//lab 3.5
#include <stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int price;
	printf("Введите стоимость пива ");
	scanf_s("%i", &price);

	if (price < 71) {
		printf("дешево");
	}
	if (price >= 71 && price < 101) {
		printf("нормально");
	}
	if (price >= 101 && price < 181) {
		printf("дорого");
	}
	if (price >= 181) {
		printf("ужас");
	}
}

//lab 3.6
#include <stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int time;
	printf("Введите время затраченное на проезд до УлГТУ в минутах ");
	scanf_s("%i", &time);

	if (time < 30) {
		printf("очень быстро");
	}
	if (time >= 30 && time < 40) {
		printf("быстро");
	}
	if (time >= 40 && time < 51) {
		printf("нормально");
	}
	if (time >= 51 && time < 61) {
		printf("медленно");
	}
	if (time >= 61) {
		printf("очень медленно");
	}
}