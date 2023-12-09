//Lab16-17

#include <stdio.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;


void printElements();
void keyboardInput();
void oddsX10();
int findMin();
int findabove10();
int findLastEven();
int findIndexMin();
int findIndexMax();

void deleteElement(int delIndex) {
	for (int i = delIndex; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}

void insertElement(int insIndex, int value) {
	for (int i = n; i > insIndex; --i) {
		arr[i] = arr[i - 1];
	}
	n++;
	arr[insIndex] = value;
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("Содержимое массива:");
		printElements();
		printf("Выберите нужную вам операцию:\n");
		printf("1: Ввести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Сколько элементов > 10\n");
		printf("5: х2 для последнего четного элемента\n");
		printf("6: Сколько четных элементов левее минимального\n");
		printf("7: х10 для нечетных элементов правее минимального\n");
		printf("8: Переставить местами min и max\n");
		printf("9: Все четные элементы массива умножить на -1\n");
		printf("10: Все элементы массива имеющие значения меньше 4 заменить на 4\n");
		printf("11: Удаления заданного элемента массива\n");
		printf("12: Вставка нового элемента в заданное место\n");
		printf("13: Удаления минимального элемента массива\n");
		printf("14: Перед минимальным элементом вставить 0\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");

		scanf_s("%d", &item);
		switch (item) {
		case 1:
			keyboardInput();
			break;

		case 2:
			oddsX10();
			break;

		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
		}
		break;
		case 4:
		{
			int above10 = findabove10();
			printf("Элементов больше 10: %d\n", above10);
		}
		break;
		case 5:
		{
			int index = findLastEven();
			if (index >= 0) {
				arr[index] *= 2;
			}
		}
		break;
		case 6:
		{
			int index = findIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("Левее минимального %d четных элементов\n", cnt);
		}
		break;

		case 7:
		{
			int index = findIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			for (int i = index +1; i < n; i++) {
				if (arr[i] % 2 == 1) {
					arr[i] = arr[i] * 10;
				}
			}

		}
		break;
		case 8:
		{
			int IndexMin = findIndexMin();
			printf("%d,\n", IndexMin);
			int IndexMax = findIndexMax();
			printf("%d,\n", IndexMin);

			int tmp = arr[IndexMin];
			arr[IndexMin] = arr[IndexMax];
			arr[IndexMax] = tmp;
		}
		break;
		case 9:
		{
			for (int i = 0; i < n; i++) {
				if (arr[i] % 2 == 1) {
					arr[i] = arr[i] * -1;
				}
			}
		}
		break;
		case 10:
		{
			for (int i = 0; i < n; i++) {
				if (arr[i] < 4 ) {
					arr[i] = 4;
				}
			}
		}
		break;
		case 11:
		{
			printf("Индекс удаляемого элемента = ");
			int index;
			scanf_s("%d", &index);
			
			deleteElement(index);
		}
		break;
		

		case 12:
		{
			printf("Перед каким элементом нужно вставить новый? Индекс = ");
			int index;
			scanf_s("%d", &index);

			printf("Значение, которое нужно вставить = ");
			int value;
			scanf_s("%d", &value);

			insertElement(index, value);
		}
		break;
		case 13:
		{
			int min = findMin();
			printf("min = %i\n", min);

			int index = findIndexMin();
			deleteElement(index);
		}
		break;

		case 14:
		{
			int indexMin = findIndexMin();
			printf("Индекс минимального элемента = % i\n", indexMin);

			insertElement(indexMin, 0);
		}
		break;
		}


	} while (item != 0);
}


void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("> \n");
}
void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}
void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}
int findMin() {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int findabove10() {
	int above10 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			above10 += 1;
		}
	}
	return above10;
}

int findLastEven() {
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			index = i;
		}
	}
	return index;
}

int findIndexMin() {
	int min = arr[0];
	int indexmin = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			indexmin = i;
		}
	}
	return indexmin;
}

int findIndexMax() {
	int max = arr[0];
	int indexmax = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			indexmax = i;
		}
	}
	return indexmax;
}


