// ����ڷκ��� �� ���� �Ǽ��� �Է¹��� ��, �հ�� ��հ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0; 
	double y = 0;
	double z = 0;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &z);

	double sum = x + y + z;
	double avg = sum / 3.0;

	printf("���� %f�̰� ����� %f�Դϴ�.", sum, avg);

	return 0;
}