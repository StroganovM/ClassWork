#include <stdio.h>
#include <locale.h>
#include<math.h>

int main() {
	//���������
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	int storona, height;
	float square;
	// �������������� ����������
	printf("������� ������� ������������: ");
	scanf_s("%d", &storona);
	printf("������� ������ ������������: ");
	scanf_s("%d", &height);
	// ���������� ������
	square = storona * height * 0.5;
	// ����� ����������
	printf("������� ������������ �� �������� %d � ������� %d = %.1f\n", storona, height, square);
	// ���������� ���������
	system("pause");
	return 0;
}