#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ������ �迭 ����� ũ�⸦ ������� �ʾ����� �ʱⰪ�� ��������
	// �ڵ����� ũ�Ⱑ ���� �ȴ�. (NULL ���� ����� ũ�� ����)
	char szBuffer[] = { "Hello" };

	// "Hello" ���ڿ��� ����� �޸��� �ּҷ� �ʱ�ȭ�Ǵ� ������ ����
	char *pszBuffer = "Hello";

	// ���� �Ҵ��� �޸��� �ּҰ� ����� ������ ���� �� ����
	char* pszData = NULL;

	// �޸𸮸� �������� �Ҵ��ϰ� "Hello" ���ڿ��� �ʱ�ȭ
	pszData = (char*)malloc(sizeof(char) * 6);
	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0'; // ���ڿ��� ���� ��Ÿ���� NULL ����

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);

	// ���� �Ҵ��� �޸� ����
	free(pszData);

	return 0;
}