#include <stdio.h>

// ����� ����ϰ� ����� ��ȯ�ϴ� �Լ�
int GetFactorial(int nParam)
{
	int nResult = 0;

	// ���ȣ���� ������ ���� ���ǽ�����, �ݺ����� ���ǽİ� ����.
	if (nParam == 1)
	{
		return 1;
	}
	
	// �Ű������� ���� 1 ���ҽ��� �ڱ� �ڽ��� �ٽ� ȣ���Ѵ�.
	// �̴� �ݺ����� ������ ����.
	nResult = nParam * GetFactorial(nParam - 1);
	return nResult;

}

int main(void)
{
	printf("5! == %d\n", GetFactorial(5));

	return 0;
}