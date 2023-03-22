#include <stdio.h>

// malloc(), calloc()�Լ��� ���� ��� ����
#include <stdlib.h>

// memset() �Լ��� ���� ��� ����
#include <string.h>

int main(void)
{
	int* pList = NULL, * pNewList = NULL;

	// A. int�� 3�� �迭 ���� �� ����(0 �ʱ�ȭ)
	int aList[3] = { 0 };

	// B. int�� 3���� ���� �� �ִ� ũ���� �޸𸮸� �������� �Ҵ��� ��
	// �޸𸮸� ��� 0���� �ʱ�ȭ

	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	// C. int�� 3���� ���� �� �ִ� �޸𸮸� 0���� �ʱ�ȭ �� �� �Ҵ����
	pNewList = (int*)calloc(3, sizeof(int));

	// ���� �Ҵ��� �޸𸮵��� ����
	free(pList);
	free(pNewList);
	return 0;
}