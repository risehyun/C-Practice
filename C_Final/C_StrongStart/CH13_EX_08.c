#include <stdio.h>

// �ڰ����� ����ü ����
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	struct USERDATA* pNext;
} USERDATA;

int main(void)
{
	// �迭�� USERDATA ����ü �ν��Ͻ� ���� ���� �� ����
	USERDATA userList[4] = {
		{ "ȫ�浿", "1234", NULL },
		{ "�̼���", "2345", NULL },
		{ "��ö��", "3456", NULL },
		{ "�迵��", "4567", NULL }
	};

	// ���� ����Ʈ�� ù ��° �ν��Ͻ��� �ּҸ� ������ ������.
	USERDATA* pUser = NULL;

	// pNext ����� �迭�� ������ ���� ����ü �ν��Ͻ��� �ּҷ� �����Ѵ�.
	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];

	// ������ �ν��Ͻ��� �ڿ� �ƹ��͵� �����Ƿ� NULL�� �ʱ�ȭ �Ѵ�.
	userList[3].pNext = NULL;

	// ����� ����Ʈ�� ù ��° �ν��Ͻ��� ����Ű���� �����͸� �����Ѵ�.
	pUser = &userList[0];
	while (pUser != NULL)
	{
		// �����Ͱ� ����Ű�� �ν��Ͻ��� ����� ����Ѵ�.
		printf("%s, %s\n", pUser->szName, pUser->szPhone);

		// ���� ����Ű�� �ִ� �ν��Ͻ��� ���� �ν��Ͻ��� ����Ű����
		// �����͸� �������� '�̵�' ��Ų��.
		pUser = pUser->pNext;
	}

	return 0;
}