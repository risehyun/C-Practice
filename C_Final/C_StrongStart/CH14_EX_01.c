#include <stdio.h>

void main(void)
{
	// ���� ��� �ʿ��� FILE ����ü�� ���� ������ ���� ���� �� ����
	FILE* fp = NULL;

	// test.txt ������ ���� ���� �����Ѵ�. 
	// ��, ���� �̸��� ������ �̹� �����ϴ� ��� ����(ũ�⸦ 0���� ����)�ϰ� �� ������ �����Ѵ�.
	// �̹� ������ ������ ���� ��� ������ �۾��� ���� �ʰ� ���� �����Ѵ�.

	fp = fopen("Test.txt", "w");
	if (fp == NULL)
	{
		puts("ERROR : Failed to open file!");
		return;
	}

	// TODO :: File I/O

	// ������ ������ �ݴ´�.
	fclose(fp);
}