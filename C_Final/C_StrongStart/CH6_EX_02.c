#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("����� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

	// if���� ����
	if (nAge >= 20)
	{
		// ���ǽ��� �������� �� ������ ������
		// ���� ������ �����ؾ� �Ѵٸ� �ݵ�� ��� �������� ���´�.

		printf("ó����, ����� ���̴� %d�� �Դϴ�.\n", nAge);
		nAge = 20;

	} // if���� ��


	printf("����� ���̴� %d�� �Դϴ�.\n", nAge);


	return 0;
}