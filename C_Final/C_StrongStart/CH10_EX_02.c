#include <stdio.h>

// ���� ���� �Ű������� �ް� �ִ��� ��ȯ�ϴ� �Լ� ���� �� ����
int GetMax(int a, int b, int c)
{
	// GetMax() �Լ��� ���� ���� ���� �� ����
	int nMax = a;
	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;

	return nMax;
}

int main(void)
{
	int nResult = 0;

	// 1. �ٸ� �Լ��� ȣ���ϴµ� �μ��� ���
	// �Լ��� ��ȯ�� ���� %d �������� ����Ѵ�.
	printf("MAX : %d\n", GetMax(1, 2, 3));

	// 2. �ǿ����ڷ� �ٸ� ���꿡 ����
	// �Լ��� ��ȯ�� ���� * 2 ������ �����ϰ� %d �������� ����Ѵ�.
	printf("MAX : %d\n", GetMax(2, 3, 1) * 2);
	
	// 3. �ڷ����� ��ġ�ϴ� ������ �����Ͽ� ������ ����
	// �Լ��� ��ȯ�� ���� nResult ������ ������ ��
	// nResult�� ������ ���� %d �������� ����Ѵ�.
	printf("MAX : %d\n", nResult = GetMax(3, 1, 2));


	return 0;
}