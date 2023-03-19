/*
평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.

평가 내용
평가 : 내용
A : best!!!
B : good!!
C : run!
D : slowly~
나머지 문자들 : what?
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