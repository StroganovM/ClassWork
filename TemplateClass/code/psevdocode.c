#include<math.h>
#include<locale.h>
#include<stdio.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int x, y, rez;
	printf("¬ведите X и Y:\n");
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		if (x > -10 && x < 10 && y > -10 && y < 10) {
			rez = x - y;
		}
		if (x > 10 && y > 10) {
			rez = sqrt(x) + sqrt(y);
		}
		if ((x = -10 && x = 10 && y = -10 && y = 10)) {
			printf("ничего не сделал");
		}
	}
	else {
		
	}

	system("pause");
	return 0;
}