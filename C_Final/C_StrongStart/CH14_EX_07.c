#include <stdio.h>

void main()
{
	// ǥ���Է���ġ ����(stdin)�� ����Ű�� ������ ���� ���� �� ����
	FILE *fp = stdin;
	printf("Input String : ");

	// ����ڷκ��� '���ڿ�'�� �Է¹��� �� ù ���ڸ� �о�� ����Ѵ�.
	printf("getchar() - %c\n", getchar());

	// ���ۿ� �����ִ� ���� ������ ���뿡 ���� ������ ����Ѵ�.
	printf("[%d] %s", fp->_cnt, fp->_base);
	printf("READ : %d\n", fp->ptr - fp->_base);

	// �ٽ� �� ���ڸ� �о�� �� �޶��� ������ Ȯ���Ѵ�.
	printf("\n\ngetchar() - %c\n", getchar());
	printf("[%d] %s", fp->_cnt, fp->_base);
	printf("READ : %d\n", fp->_ptr - fp->_base);

	// ���� ����� ���۸� �ʱ�ȭ�� �� ����� Ȯ���Ѵ�.
	fflust(fp);
	printf("\n\nAfter flushing \n[%d] %s",
		fp->_cnt, fp->base);
	printf("READ : %d\n", fp->_ptr - fp->_base);
	
}