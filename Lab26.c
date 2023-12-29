//Lab26
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* first = NULL;

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}

void deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);

}
int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}

void clearList() {

	while (first != NULL) {
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}

int sumList() {
	int k = 0;
	struct Node* sumNode = first;
	while (sumNode != NULL) {
		k += sumNode->data;
		sumNode = sumNode->next;
	}
	return k;
}

int quantityOfEvenNumbers() {
	int k = 0;
	struct Node* qNode = first;
	while (qNode != NULL) {
		if (qNode->data % 2 == 0) {
			k++;
		}
		qNode = qNode->next;
	}
	return k;
}

void oddsX10() {
	struct Node* r = first;
	while (r != NULL) {
		if (r->data % 2 != 0) {
			r->data *= 10;
		}
		r = r->next;
	}
}

void elementX5(int i) {
	int index = 0;
	struct Node* r = first;
	while (r != NULL) {
		if (index == i) {
			r->data *= 100;
			return;
		}
		r = r->next;
		index++;
	}
}
void elementIleftX10(int i) {
	int index = 0;
	struct Node* r = first;
	while (r != NULL) {
		if (index < i) {
			r->data *= 10;
		}
		r = r->next;
		index++;
	}
}
void elementIrightX10(int i) {
	int index = 0;
	struct Node* r = first;
	while (r != NULL) {
		if (index > i) {
			r->data *= 10;
		}
		r = r->next;
		index++;
	}
}

void main() {
	first = NULL;
	printList();

	addToHead(30);
	printList();

	printf("contains(30) = %d\n", contains(30));

	addToHead(50);
	printList();

	addToHead(33);
	printList();

	addToHead(773);
	printList();

	oddsX10();
	printList();

	elementX5(0);
	printList();

	elementIleftX10(2);
	printList();

	elementIrightX10(0);
	printList();

	printf("sum = %d\n", sumList());
	printList();

	printf("quantity of even numbers = %d\n", quantityOfEvenNumbers());
	deleteFromHead();
	printList();

	printf("sum = %d\n", sumList());

	clearList();
	printList();

	printf("sum = %d\n", sumList());

	{
		int x;
		scanf("%d", &x);
	}

}