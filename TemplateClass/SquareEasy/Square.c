// библиотеки
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include<math.h>

int main() {
	//настройки
	setlocale(LC_ALL, "rus");
	// объявление переменных
	int storona1,storona2,storona3;
	float square,p;
	// инициальизация переменных
	printf("Введите стороны a b c треугольника: ");
	scanf_s("%d %d %d", &storona1, & storona2, & storona3);
	// выполнение задачи
	p = (storona1 + storona2 + storona3) * 0.5;
	if (storona1 > 0 && storona2 > 0 && storona3 > 0) {
		if (storona1 + storona2 >= storona3 && storona1 + storona3 >= storona2 && storona2 + storona3 >= storona1) {
			square = sqrt(p * (p - storona1) * (p - storona2) * (p - storona3));
			printf("Результат: S= %.2f\n", square);
		}
		else {
			printf("Такого треугольника не существует!\n");
		}
	}
	else {
		printf("Неверно заданы стороны!\n");
	}
	
	// завершение программы
	system("pause");
	return 0;
}