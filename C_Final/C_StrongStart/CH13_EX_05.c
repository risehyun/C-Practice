#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

// ����ü �ν��Ͻ��� �ƴ϶�
// ����ü�� ���� '������'�� �Ű������� �޴´�. ���� ȿ�����̴�.

void GetUserData(USERDATA* pUser)
{
	scanf("%d%*c", &pUser->nAge);
	gets_s(pUser->szName, sizeof(pUser->szName));
	gets_s(pUser->szPhone, sizeof(pUser->szPhone));
}

int main(void)
{
	USERDATA user = { 0 };

	// Call by reference�� ����
	GetUserData(&user);
	printf("%d��\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
	return 0;
}