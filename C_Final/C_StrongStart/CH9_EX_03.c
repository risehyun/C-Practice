#include <stdio.h>

int main(int argc, char* argv[])
{
	// ��ü ��쿡 ���� ���ݷ� ����� ���� �迭�� ���� �� ����
	double aRate[10] = {
		0.0, 0.1, 0.25,
		0.5, 0.5,
		0.6, 0.65,
		0.8, 0.82, 0.97
	};

	int nAge = 0, i = 0, nFee = 1000;

	// ���ǥ�� ����Ѵ�
	printf("���ǥ\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d�� ��� : \t%d��\n", i, (int)(nFee * aRate[i-1]));
	}
	putchar('\n');

	// ���̸� �Է¹ް� �迭 �ε��� ���� ���η� ���� ���� �����Ѵ�.
	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);
	if (nAge < 1)			nAge = 1;
	else if (nAge > 10)		nAge = 10;

	// ���̿� �´� �迭��Ҹ� �����ϰ� ���ٸ� ��� ���� ��� ���� ����Ѵ�.
	printf("������� : %d��\n", (int)(nFee*aRate[nAge - 1]));
	putchar('\n');

	return 0;
}