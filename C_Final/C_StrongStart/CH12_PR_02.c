#include <stdio.h>
#include <string.h>

int main(void)
{
	// ��ūȭ �� ��� ���ڿ�
	char szBuffer[128] = { "nData = x + y;\nnResult = a * b" };

	// ��ūȭ�� ������ �Ǵ� ������ ���ڿ�
	char *pszSep = " *+=;\n";
	char* pszToken = NULL;

	// ������ ���ڿ��� �ٰŷ� ù ��° ��ūȭ�� �õ��Ѵ�.
	pszToken = strtok(szBuffer, pszSep);
	while (pszToken != NULL)
	{
		// ã�� ��ū�� ����Ѵ�.
		puts(pszToken);

		// �� ���� ��ū�� �̾ �˻��Ѵ�.
		pszToken = strtok(NULL, pszSep);
	}

	// ����� ���� ���ڿ��� ����غ���.
	printf("\nszBuffer: %s\n", szBuffer);

	return 0;
}