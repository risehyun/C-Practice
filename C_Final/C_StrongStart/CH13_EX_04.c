#include <stdio.h>

// ����ü ���� �� �� �缱��
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

// ����ü ������ ��ȯ�ϴ� �Լ� ���� �� ����
USERDATA GetUserData(void)
{
	USERDATA user = { 0 };
	// %*c�� '\n'�� �����ϱ� ���� ���̴�.
	scanf("%d%*c", &user.nAge);
	gets_s(user.szName, sizeof(user.szName));
	gets_s(user.szPhone, sizeof(user.szPhone));

	return user;
}

int main(void)
{
	USERDATA user = { 0 };

	// �Լ��� ��ȯ�� ����ü�� �����ϰ� ���
	user = GetUserData();
	printf("%��\t%s\t%s\n", user.nAge, user.szName, user.szPhone);

	return 0;
}