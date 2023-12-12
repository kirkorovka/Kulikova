//lab 6.1
#include <stdio.h>

void main() {
	int i, n;

	printf("n = ");
	scanf_s("%d", &n);

	i = 1;
	do {
		printf("% d",i);
		i += 1;

	} while (i <= n);
}


//lab 6.2

#include <stdio.h>

void main() {
	int i, step;

	step = 1;
	i = 0;

	do {
		printf("2^%d=%d\n", i,step);
		i += 1;
		step = step*2;
	} while (i <= 5);
}


//lab 6.3

#include<stdio.h>

void main() {
	int sum,i;
	float perc, plusperc;

	printf(" summ = ");
	scanf_s("%d", &sum);
	printf(" percent = ");
	scanf_s("%f", &perc);
	
	i = 0;
	perc = perc * 0.01;
	

	do {

		
		plusperc = sum * perc;
		printf("%d RUB in %d year \n", sum, i);
		sum = sum + plusperc;

		i += 1;
		
	} while (i <= 10);
}


//lab 6.4

#include <stdio.h>
void main() {
	int n, i, chet;

	printf("n = ");
	scanf_s("%i", &n);
	chet = 2;
	i = 0;
	do {
		printf("%i ", chet);
		i += 1;
		chet += 2;

	} while (i < n);
}


//lab 6.5

#include <stdio.h>
void main() {
	int a, n, i, numb;

	printf("n = ");
	scanf_s("%i", &n);
	printf("a = ");
	scanf_s("%i", &a);

	i = 0;
	numb = 0;

	do {
		numb += a;
		printf("%i ",numb);
		i += 1;


	} while (i<n);
}


//lab 6.6
#include <stdio.h>
void main() {
	int n, i, numb;

	printf("n = ");
	scanf_s("%i", &n);
	

	i = 0;
	numb = 1;

	do {
	
		printf("%i ", numb);
		numb += 2;
		i += 1;


	} while (i < n);
}