// ����ڷκ��� �ﰢ���� ���̿� �غ��� �޾Ƽ� ���̸� ����Ͽ� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	double base, height, area;

	printf("�ﰢ���� �غ� : ");
	scanf("%lf", &base);

	printf("�ﰢ���� ���� : ");
	scanf("%lf", &height);

	area = 0.5 * height * base;

	printf("�ﰢ���� ���� : %f\n", area);;




	return 0;
}