#include <stdio.h>
#include <string.h>

// ����ü ����
struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
};

int main(void)
{
	// USERDATA ����ü ���� user ���� �� ����
	struct USERDATA user = { 0, "", "" };

	// ����ü ��� ���� �� �� ä���
	user.nAge = 10;

	strcpy(user.szName, "Hoon");
	strcpy(user.szPhone, "010-1234-1234");

	// ����ü ��� ���� �� ���
	printf("%d��, %s, %s\n", user.nAge, user.szName, user.szPhone);

	return 0;
}