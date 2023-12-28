#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}



void F1(int n) {
	if (n > 2) {
		printf("%d\n", n);
		F1(n - 3);
		F1(n - 4);
	}
}

void F2(int n) {
	printf("%d\n", n);
	if (n < 5) {
		F2(n + 1);
		F2(n + 3);
	}
}

void G3(int n);
void F3(int n) {
	if (n > 0)
		G3(n - 1);
}

void G3(int n) {
	printf("*");
	if (n > 1)
		F3(n - 3);
}

void main() {
	recEGE1(3);
	F1(10);
	F2(1);
	F3(11);
}