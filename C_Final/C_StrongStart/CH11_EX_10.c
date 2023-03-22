#include <stdio.h>

// �μ��� ���޵� �� �ּ��� �޸𸮿� ��� ����(������)�� �����ϴ� �Լ���
// memcpy() �Լ��� ����ϱ� ���� ����� �����Ѵ�.

#include <string.h>

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	// �������� 4����Ʈ�� ��� �޸𸮷� �����Ѵ�.
	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	// �������� 6����Ʈ�� ��� �޸𸮷� �����Ѵ�.
	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	// ���� �޸� ��ü�� ��� �޸𸮷� ����
	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}