#include <stdio.h>

// �ּҸ� �Ű������� ���� ���� ��� �޸��� ũ�⸦ �Բ� �޴� ���� ����.
void GetName(char* pszName, int nSize)
{

	printf("�̸��� �Է��ϼ���. :");
	// �Ű������� ���޹��� �ּҸ� �ٽ� gets_s() �Լ��� ���ڷ� �ѱ��.
	gets_s(pszName, nSize);

}

int main(int argc, char* argv[])
{
	char szName[32] = { 0 };

	// �迭(�ּ�)�� �迭�� ũ�⸦ �Լ��� �Ű������� �����Ѵ�.
	GetName(szName, sizeof(szName));
	printf("����� �̸��� %s�Դϴ�. \n", szName);

	return 0;
}