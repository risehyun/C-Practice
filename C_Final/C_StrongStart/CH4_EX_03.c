#include <stdio.h>

int main(void)
{
	char ch = 'A';

	//char�� %c�� ���
	printf("%c\n", ch);

	//'char+int'�� int �����̴�.
	printf("%c\n", ch + 1);
	printf("%c\n", 'A' + 2);

	// 'double + int'�� double �����̴�.
	// ���� %d �������� ����� �� ����.
	printf("%d\n", 5.0 + 2);
	printf("%f\n", 5.0 + 2);

	return 0;


}