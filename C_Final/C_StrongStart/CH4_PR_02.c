#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int input = 0;
	
	int hour = 0;
	int min = 0;
	int second = 0;

	scanf_s("%d", &input);

	hour = input / 3600;
	min = (input % 3600) / 60;
	second = (input % 3600) % 60;


	// �Ҽ��� �� ��°�ڸ����� �����ϰ�, �� �ڸ� �ۿ� ���ٸ� ���ʺ��� 0�� ä���� (%02d)
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", input, hour, min, second);


	return 0;
}