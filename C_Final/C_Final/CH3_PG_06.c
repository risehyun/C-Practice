// �ڽ��� �����Ը� �Է¹޾� �޿����� �����Ը� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight_on_earth, weight_on_moon;

	printf("�����Ը� �Է��ϼ��� : ");
	scanf("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;
	printf("�޿����� �����Դ� %fkg �Դϴ�.", weight_on_moon);

	return 0;
}