#include <stdio.h>
#include <locale.h>
#include<math.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int a, b, d,left_board,right_board;
	left_board = -100 + rand() % (100 + 100 + 1);
	right_board = left_board + rand() % (100 - left_board + 1);
	printf("Введите точки A и B принадлежащие отрезку [%d;%d]:\n",left_board, right_board);
	scanf_s("%d %d", &a,&b); 
	d=-a +b;
	if (a >= -10 && a<=10 && b >= -10 && b<=10 && a<b) {
		printf("Длинна отрезка: %d \n", d);
	}else {
		printf("Не верно введены данные!\n");
	}
	

	system("pause");
	return 0;
}