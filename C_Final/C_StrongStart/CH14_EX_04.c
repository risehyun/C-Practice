#include <stdio.h>

int main(void)
{
	int nData = 0;
	char szBuffer[128] = { 0 };
	FILE* fp = NULL;

	// '�б�' ������ ���� ������ �����ϰ� 'Test'��� ���ڿ��� ����.
	fp = fopen("fscanfTest.test", "w");
	fprintf(fp, "%d,%s\n", 20, "Test");
	fclose(fp);

	// ������ �ٽ� ���� ����� ������ �о� �´�.
	fp = fopen("fscanfTest.txt", "r");
	fscanf(fp, "%d,%s", &nData, szBuffer);
	fclose(fp);

	// �о�� ������ ȭ�鿡 ����Ѵ�.
	printf("%d, %s\n", nData, szBuffer);

	return 0;
}