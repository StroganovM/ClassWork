// ����������
#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main() {
	//���������
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	int day, m, year, hour, min, sec;
	// �������������� ����������
	// ���������� ������
	printf("������� ����: ");
	scanf_s("%d.%d.%d",&day,&m,&year);
	system("cls");
	printf("������� �����: ");
	scanf_s("%d:%d:%d", &hour, &min, &sec);
	system("cls");

	// ����� ����������
	printf("� �������: %02d.%02d.%04d %02d:%02d.\n", day,m,year,hour,min);
	printf("�������, �� ��������!\n");
	// ���������� ���������
	system("pause");
	return 0;
}