#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

} USERDATA;

int main(void)
{
	// USERDATA ����ü�� ���� ������ ���� ���� �� ����
	USERDATA* pUser = NULL;

	// USERDATA ����ü�� ����� �� ���� �� �ִ� ũ���� �޸� ���� �Ҵ�
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	// �������̹Ƿ� '.'�� �ƴ϶� '->' �����ڷ� ����� �����Ѵ�.
	pUser->nAge = 10;
	strcpy(pUser->szName, "Hoon");
	strcpy(pUser->szPhone, "9876");

	printf("%d��\t%s\t%s\n",
		pUser->nAge, pUser->szName, pUser->szPhone);

	// ���� �Ҵ��� �޸𸮸� �����Ѵ�.
	free(pUser);
	return 0;
}
