// библиотеки
#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main() {
	//настройки
	setlocale(LC_ALL, "rus");
	// объ€вление переменных
	int day, m, year, hour, min, sec;
	// инициальизаци€ переменных
	// выполнение задачи
	printf("¬ведите дату: ");
	scanf_s("%d.%d.%d",&day,&m,&year);
	system("cls");
	printf("¬ведите врем€: ");
	scanf_s("%d:%d:%d", &hour, &min, &sec);
	system("cls");

	// вывод результата
	printf("я запомню: %02d.%02d.%04d %02d:%02d.\n", day,m,year,hour,min);
	printf("—пасибо, до свидани€!\n");
	// завершение программы
	system("pause");
	return 0;
}