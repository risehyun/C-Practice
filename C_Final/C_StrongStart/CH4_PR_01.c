
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("�� ������ �Է��ϼ���.");
	scanf("%d %d", &x, &y);

	printf("AVG : %.2f", (x+y)/2.0);
	return 0;
}