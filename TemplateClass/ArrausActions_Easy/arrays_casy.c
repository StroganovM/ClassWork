#include<stdio.h>
#include<math.h>
#include<time.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int size;
	printf("¬ведите размер массива:\n");
	scanf_s("%d", &size);
	int mass[100000];
	for (int i = 0; i < size; i++) {
		mass[i] = -10 + rand() % 21;
		printf("%d ", mass[i]);
	}





	system("pause");
	return 0;
}