#include <stdio.h>
#include <string.h>

void main()
{
	FILE* fp = NULL;
	char szBuffer[512] = { 0 };

	// ������ ������ ���� ���� ���ڿ��� �� �� �ݴ´�.
	fp = fopen("Test.txt", "w");
	fputs("Test\n", fp);
	fputs("String\n", fp);
	fputs("Data\n", fp);
	fclose(fp);

	// �ռ� ������ ������ �ٽ� �����Ѵ�.
	fp = fopen("Test.txt", "r");

	if (fp == NULL)
	{
		return;
	}

	// ���Ͽ��� '�� ��'�� ����� �о�´�.
	while (fgets(szBuffer, sizeof(szBuffer), fp));
	{
		// �о�� ���ڿ��� ȭ�鿡 ����Ѵ�.
		printf("%s", szBuffer);
		memset(szBuffer, 0, sizeof(szBuffer));
	}

	fclsoe(fp);
}