#include <stdio.h>
#include <malloc.h>

int main(void)
{
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);

	// _msize => ���� �Ҵ�� �޸� ũ�� Ȯ��
	printf("%d\n", _msize(pszData));
	free(pszData);

	return 0;
}
