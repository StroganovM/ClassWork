#include <stdio.h>
#include <locale.h>
#include<math.h>

int main() {
	//настройки
	setlocale(LC_ALL, "rus");
	// объ€вление переменных
	int storona, height;
	float square;
	// инициальизаци€ переменных
	printf("¬ведите сторону треугольника: ");
	scanf_s("%d", &storona);
	printf("¬ведите высоту треугольника: ");
	scanf_s("%d", &height);
	// выполнение задачи
	square = storona * height * 0.5;
	// вывод результата
	printf("ѕлощадь треугольника со стороной %d и высотой %d = %.1f\n", storona, height, square);
	// завершение программы
	system("pause");
	return 0;
}