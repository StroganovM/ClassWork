// ����������
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include<math.h>

int main() {
	//���������
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	int storona1,storona2,storona3;
	float square,p;
	// �������������� ����������
	printf("������� ������� a b c ������������: ");
	scanf_s("%d %d %d", &storona1, & storona2, & storona3);
	// ���������� ������
	p = (storona1 + storona2 + storona3) * 0.5;
	if (storona1 > 0 && storona2 > 0 && storona3 > 0) {
		if (storona1 + storona2 >= storona3 && storona1 + storona3 >= storona2 && storona2 + storona3 >= storona1) {
			square = sqrt(p * (p - storona1) * (p - storona2) * (p - storona3));
			printf("���������: S= %.2f\n", square);
		}
		else {
			printf("������ ������������ �� ����������!\n");
		}
	}
	else {
		printf("������� ������ �������!\n");
	}
	
	// ���������� ���������
	system("pause");
	return 0;
}