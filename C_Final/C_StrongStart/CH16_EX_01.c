#include <stdio.h>

// ��ũ�� �Լ� ����. ��, ���� �Լ��� �ƴϴ�
#define ADD(a, b) (a + b)

// ����� ���� �Լ� ���� �� ����
int Add(int a, int b)
{
	return a + b;
}

int main(void)
{
	// Add() �Լ��� ȣ���ϰ� ��ȯ ����� ����Ѵ�.
	printf("%d\n", Add(3, 4));

	// Add() ��ũ�θ� �����ϰ� ����� ����Ѵ�.
	printf("%d\n", ADD(3, 4));
	return 0;
}