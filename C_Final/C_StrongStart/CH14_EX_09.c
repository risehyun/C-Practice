#include <stdio.h>

typedef struct _USERDATA
{
	char szName[16];
	char szPhone[16];
} USERDATA;

void main()
{
	FILE* fp = NULL;
	USERDATA UserData = { 0 };

	// ���̳ʸ� �б� ���� ������ �����Ѵ�.
	// ���� ������ ���ٸ� ������ ���µ� �����Ѵ�.
	fp = fopen("Test.dat", "rb");
	if (fp == NULL)
	{
		return;
	}

	// ���Ͽ��� ���̳ʸ� ���� ����ü�� �� ���� �а� ����Ѵ�.
	fread(&UserData, sizeof(USERDATA), 1, fp);
	puts(UserData.szName);
	puts(UserData.szPhone);
	fclose(fp);
}