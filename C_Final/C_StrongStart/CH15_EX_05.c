#include <stdio.h>

// �Ű������� ����� �������̴�. ���� �Լ����� �����Ͱ� ����Ű��
// ��� �޸𸮿� ���⸦ �õ��� �� ����.

void PrintString(const char* pszParam)
{
	puts(pszParam);
}

int main(void)
{
	char szBuffer[32] = { "I am a boy." };

	// PrintfString() �Լ��� ȣ���ϴ��� szBuffer�� ����� ���ɼ��� ����.
	PrintString(szBuffer);
	PrintString("You are a girl.");
	return 0;

}