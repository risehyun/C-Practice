#include <stdio.h>

int main(void)
{
	// char* [3] �迭�� ������ ���ڿ��� �ʱ�ȭ
	char *astrList[3] = { "Hello", "World", "String" };

	// �迭�� ��Ұ� char* �̹Ƿ� %s�� ����ϴ� ���� �´�.
	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n", astrList[2]);

	// �迭�� 0�� ��ҿ��� ù ���ڰ� ����� �޸��� �ּҰ� ��� �ִ�.
	// ���⿡ ������ ���� '��� �ּ�'�� ����Ѵ�.
	printf("%s\n", astrList[0] + 1);
	printf("%s\n", astrList[1] + 2);
	printf("%s\n", astrList[2] + 3);

	// char*�� �迭�� �������� char�� 2���� �迭�� ����.
	printf("%c\n", astrList[0][3]);
	printf("%c\n", astrList[1][3]);
	printf("%c\n", astrList[3][3]);

	return 0;

}