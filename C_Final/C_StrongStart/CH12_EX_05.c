#include <stdio.h>
#include <stdlib.h>


// �ּҸ� ��ȯ�ϴ� ����� ���� �Լ� ���� �� ����
char* GetName(void)
{
	char* pszName = NULL;

	// �޸𸮸� ���� �Ҵ��Ѵ�.
	pszName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է��ϼ���. : ");

	// ���� �Ҵ��� �޸𸮿� ����ڰ� �Է��� ���ڿ��� �����Ѵ�.
	gets_s(pszName, sizeof(char) * 32);
	// ���� �Ҵ��� �޸��� �ּҸ� ȣ���� �Լ��� ��ȯ�Ѵ�.
	return pszName;

}

int main(int argc, char* argv[])
{
	char* pszName = NULL;
	// �̸��� ����� ���� �Ҵ�� �޸��� �ּҸ� ��ȯ�޴´�.
	pszName = GetName();
	printf("����� �̸��� %s �Դϴ�.\n", pszName);

	// ȣ���� �Լ��� �޸𸮸� �����ؾ� �Ѵ�.
	free(pszName);


	return 0;
}