#include <stdio.h>
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "I am a boy." };

	// �迭�� �ּҸ� ����Ѵ�.
	printf("%p\n", szBuffer);

	// ��� ���ڿ����� ���ڿ��� �˻��ϰ� ã�� ��ġ(�ּ�)�� ����Ѵ�.
	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));

	// ���ڿ��� �˻��� ��ġ���� ������ �Ǵ� �ּҸ� ����
	// �ε����� ����� �� �ִ�.
	printf("Index: %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index: %d\n", strstr(szBuffer, "boy") - szBuffer);

	return 0;
}