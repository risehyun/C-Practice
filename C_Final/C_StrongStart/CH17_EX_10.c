#include <stdio.h>
#include <stdlib.h>

// qsort() �Լ��� ��ȣ���� �Լ��� ���� �� ����
// main() �Լ��� ���� �� �Լ��� ȣ������ �ʴ´�.
int MyCompare(const void* pParam1, const void* pParam2)
{
	return *(int*)pParam1 - *(int*)pParam2;
}

int main(void)
{
	int aList[5] = { 30, 10, 40 , 50, 20 };
	int i = 0;

	// �迭 ��Ҹ� �� ����� ������ MyCompare() �Լ��� �ּҸ�
	// qsort() �Լ��� �μ��� �����ϰ�, qsort() �Լ� ���ο��� ��ȣ�� �Ѵ�.

	qsort(aList, 5, sizeof(int), MyCompare);

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]);
	}
	
	return 0;


}