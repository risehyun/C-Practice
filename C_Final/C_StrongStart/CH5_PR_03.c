#include <stdio.h>

int main()
{
	int nMax = 0, nInput = 0;
	scanf("%d", &nInput);
	nMax = nInput;

	// ������� Ȯ���� �ִ񰪰� ����ڰ� �Է��� ���� ���Ѵ�.
	// ���ο� �ִ��� �����Ѵ�.
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;


	// ���� ���� ��� �ŵ��� ���� �ִ��� �����Ѵ�.
	scanf("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("Max : %d\n", nMax);

	return 0;
}