/*
�򰡸� ����(A, B, C, D, ...)�� �Է¹޾� ������ �ٸ��� ����غ���.

�� ����
�� : ����
A : best!!!
B : good!!
C : run!
D : slowly~
������ ���ڵ� : what?
*/


#include <stdio.h>

int main()
{
	char cInput = ' ';

	scanf("%c", &cInput);

	switch (cInput)
	{
	case 'A' :
		printf("best!!!");
		break;

	case 'B':
		printf("good!!");
		break;

	case 'C':
		printf("run!");
		break;

	case 'D':
		printf("slowly~");
		break;

	default:
		printf("what?");
		break;
	}



	return 0;
}