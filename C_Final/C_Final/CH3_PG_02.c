// ������ ���ͷ� ȯ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile;
	double meter;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1lf������ %lf�����Դϴ�.", mile, meter); // �Ҽ��� �Ʒ� �� �ڸ����� ���
	
	return 0;
}

