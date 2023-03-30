#include <stdio.h>

void PutData(char* pszParam)
{
	// 문자열이 끝이면 더 이상 재귀호출 하지 않고 반환한다.
	if (*pszParam == '\0')
	{
		return;
	}

	// 다음 두 구문의 실행 순서를 바꾸면 문자열이 뒤집어져 출력된다.
	putchar(*pszParam);	   // 출력
	PutData(pszParam + 1); // 재귀 호출할 때 매개변수로 전달된 주소에 1을 증가시켜 호출하기 때문에 다음 글자로 인덱스 이동

}


int main(void)
{
//  디버깅용
//	int a = 0;


	PutData("TestData"); // 최초로 호출될때 인수로 전달되는 것은 첫 글자인 T가 저장된 기준 주소이다.


	putchar('\n');

	return 0;
}