#include <stdio.h>

int main(void)
{
	int nAge = 0;
	int nHeight = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%d", &nAge);
	scanf("%d", &nHeight);

	// ��� �� ������ ���ʿ��� ���������� ����ȴ�.
	// ���� �������� �� ������ �ʿ䰡 ���ٰ� �����ȴٸ�
	// �������� ���� ������ ������ ������� ���� ����� ����.
	printf("��� %d (1: �հ�, 0: ���հ�)\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150);



	return 0;
}