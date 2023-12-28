
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


#define MAX_N 8
#define MAX_M 10

int arr[MAX_N][MAX_M];
int n = 3;
int m = 4;

void fillIx10();
void printElements();
void fillZero();
void randFill0_9();
void oddX10();
void multiple10();
void deleteRow();
void dublicateColumn();
void keyboardInput();

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("Содержимое массива:");
		printf("\n");
		printElements();
		printf("Выберите нужную вам операцию:\n");
		printf("1: Заолнить значениями i * 10 + j\n");
		printf("2: Заполнить нулями\n");
		printf("3: Заполнить случайными значениями\n");
		printf("4: Все нечетные увеличить в 10 раз\n");
		printf("5: Все кратные 10 уменьшить в 10 раз\n");
		printf("6: Ввод массива с клавиатуры\n");
		printf("7: Сохранить массив в файл\n");
		printf("8: Загрузить массив из готового файла\n");
		printf("9: Удалить заданную строку массива\n");
		printf("10: Продублировать заданный столбец массива\n");
		printf("11: Обнулить строки в которых больше двух нулевых элементов\n");
		
		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");

		scanf_s("%d", &item);
		switch (item) {
		case 1:
			fillIx10();
			break;
		case 2:
			fillZero();
			break;
		case 3:
			randFill0_9();
			break;
		case 4:
			oddX10();
			break;
		case 5:
			multiple10();
			break;
		case 6:
			keyboardInput();
			break;
		case 7:
		{
			FILE* fout = fopen("D:\\Stadies\\Labs\\20.txt", "wt");
			if (fout == NULL) {
				printf("Выходной файл не создался");
				return;
			}

			fprintf(fout, "%d ", n);
			fprintf(fout, "%d\n", m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					fprintf(fout, "%d ", arr[i][j]);
				}
				fprintf(fout, "\n");
			}

			fclose(fout);

		}

		break;
		case 8:
		{
			FILE* fin = fopen("D:\\Stadies\\Labs\\20.txt", "rt");
			if (fin == NULL) {
				printf("Входной файл не найден");
				return;
			}

			fscanf(fin, "%d", &n);
			fscanf(fin, "%d", &m);

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					fscanf(fin, "%d", &arr[i][j]);
				}
			}

			fclose(fin);

		}


		break;
		case 9:
		{
			printf("Номер строки, которую нужно удалить: ");
			int num = 0;
			scanf_s("%d", &num);
			deleteRow(num);
		}
		break;
		case 10:
		{
			printf("Номер столбца, который нужно продублировать: ");
			int dubl = 0;
			scanf_s("%d", &dubl);

			if (m < MAX_M) {
				
				for (int i = 0; i < n; i++) {
					arr[i][m] = arr[i][dubl];
				}
				m++;
			}

		}
		break;
		case 11:
		{
			int count = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (arr[i][j] == 0) {
						count += 1;


					}
				}
				if (count > 2) {
					deleteRow(i);
				}

			}
		}


		break;

		

		}


	} while (item != 0);
}


	void fillIx10() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				arr[i][j] = i * 10 + j;
			}
		}
	}

void printElements() {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");

	}

}

void fillZero() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			arr[i][j]=0;
		}
	}
}

void randFill0_9() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void oddX10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 != 0) {
				arr[i][j] = arr[i][j] * 10;
			}
		}
	}
}

void multiple10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] = arr[i][j] / 10;
			}
		}
	}
}

void keyboardInput() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void deleteRow(int delRow) {
	
	for (int i = delRow; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

void dublicateColumn(int dublicate) {
	m++;
	for (int i = 0; i < n; i++) {
		for (int j = dublicate; j < m; j++) {
			arr[i][j + 1] = arr[i][j];
		}
	}


}