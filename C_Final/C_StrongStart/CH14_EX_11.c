#include <stdio.h>

void main()
{
	FILE* fp = NULL;

	// ���̳ʸ� �б� ���� ������ �����Ѵ�.
	fp = fopen("Test.dat", "rb");

	// ���� ����� �����͸� ������ ������ �̵���Ų��.
	fseek(fp, 0, SEEK_END);

	// ���� �������� ���� ��ġ�� ����Ѵ�.
	// �ռ� ���� ����� �����͸� �� ������ �Ű����Ƿ� ���� ũ�⸦ �� �� �ִ�.

	printf("size of Test.dat : %u\n", ftell(fp));

	fclose(fp);

}