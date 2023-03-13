#include <stdio.h>

int main(void)
{
	int x = 0, nInput = 0;
	scanf_s("%d", &nInput);

	// nInput 변수에 저장된 사용자가 입력한 값을 x에 복사한다.
	// x에 들어있던 값은 overwrite 되고 사라진다.

	x = nInput;
	printf("%d", x);

	return 0;
}