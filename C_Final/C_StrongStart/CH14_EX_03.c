#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = NULL;

	// ���� ��ο� Test.txt ������ �����Ѵ�.
	fp = fopen("Test.txt", "w");

	// ������ ���Ͽ� ���ڿ��� ����(Ȥ�� ����Ѵ�).
	fprintf(fp, "%s\n", "Test string.");
	fprintf(fp, "%s\n", "Hello World!");

	// ������ �ݰ� �޸������� Ȯ���Ѵ�.
	fclose(fp);
	system("notepad.exe test.txt");

	return 0;
}
