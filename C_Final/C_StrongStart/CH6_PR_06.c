#include <stdio.h>

int main()
{
	// �ݺ����� ����ϸ� ���ʿ��� �ڵ带 ���� �� �ְ�����..
	// �̹� é�� �������� ���� �ݺ����� �н����� �ʾ����Ƿ� ��¿ �� ���� �Ʒ��� ���� �ۼ��Ͽ���.

	int nMax = 0;
	int nInput = 0;

	scanf_s("%d", &nInput); // ù ��° ��
	
	if (nInput < 0)
	{
		nInput = 0;
	}
	else if (nInput > 100)
	{
		nInput = 100;
	}

	nMax = nInput;

	scanf_s("%d", &nInput); // �� ��° ��
	
	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // �� ��° ��

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // �� ��° ��

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	scanf_s("%d", &nInput); // �ټ� ��° ��

	if (nMax < nInput)
	{
		nMax = nInput;
	}

	printf("Max : %d", nMax);

	

	return 0;
}