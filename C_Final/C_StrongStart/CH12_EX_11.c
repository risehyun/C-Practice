#include <stdio.h>

void PutData(char* pszParam)
{
	// ���ڿ��� ���̸� �� �̻� ���ȣ�� ���� �ʰ� ��ȯ�Ѵ�.
	if (*pszParam == '\0')
	{
		return;
	}

	// ���� �� ������ ���� ������ �ٲٸ� ���ڿ��� �������� ��µȴ�.
	putchar(*pszParam);	   // ���
	PutData(pszParam + 1); // ��� ȣ���� �� �Ű������� ���޵� �ּҿ� 1�� �������� ȣ���ϱ� ������ ���� ���ڷ� �ε��� �̵�

}


int main(void)
{
//  ������
//	int a = 0;


	PutData("TestData"); // ���ʷ� ȣ��ɶ� �μ��� ���޵Ǵ� ���� ù ������ T�� ����� ���� �ּ��̴�.


	putchar('\n');

	return 0;
}