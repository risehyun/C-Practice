#include <stdio.h>
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "You are a girl." };

	// �迭�� ù ��°(0��) ����� ���� %c �������� ����Ѵ�.
	printf("%c\n", szBuffer[0]);
	
	// 0�� ��ҿ� ���� �ּ��� �迭�� �̸�(�ּ�)�� ���� �������� ������
	// �����ϰ� �� �ȿ� ��� ������ ����Ѵ�.
	printf("%c\n", *szBuffer);

	// 0�� ���ϴ��� �ּҴ� �޶����� �ʴ´�.
	printf("%c\n", (*szBuffer+0));

	// �迭 �����ڴ� '�����ּ� + �ε���' �������� ���� �ּҸ�
	// ���������� �Ͱ� ����.
	printf("%c\n", szBuffer[5]);
	printf("%c\n", *(szBuffer + 5));

	// �ּҿ���(&)�� �������� ����� ��ݵȴ�.
	// �׷��Ƿ� �Ʒ� �� ���� �ڵ�� ��� ����.
	printf("%s\n", &szBuffer[4]);
	printf("%s\n", &*(szBuffer + 4));
	printf("%s\n", szBuffer + 4);
	return 0;
}