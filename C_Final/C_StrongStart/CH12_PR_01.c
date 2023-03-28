#include <stdio.h>

int GetLength(char* _src)
{
	int nLength = 0;

	while (_src[nLength] != '\0')
	{
		nLength++;
	}

	return nLength;
}

char* MyStrcpy(char* pszDst, int nDstSize, const char* pszSrc)
{
	int i = 0;
	int nLenSrc = 0;

	nLenSrc = GetLength(pszSrc);

	// 문자열을 복사하려면 원본 문자열의 길이가 필요하다.
	// 그런데 이때 측정된 정보가 그냥 버려지는 것은 낭비이기 때문에 9~10번 행처럼 대상 메모리의 적절한 크기를 확인한다.
	if (nLenSrc + 1 > nDstSize) // '\0'(널문자)까지 저장될 공간을 고려하기 위해 +1을 해주었다.
	{
		return nDstSize - (nLenSrc + 1);
	}

	while (pszSrc[i] != NULL)
	{
		pszDst[i] = pszSrc[i];
		++i;
	}

	pszDst[i] = '\0'; // 문자열의 끝은 '\0'이므로 문자들을 모두 복사하고 난 뒤에는 마지막 끝에 반드시
				      // '\0'를 넣어 문자열의 끝을 명시해야 한다.
					  // 만약 그렇지 않으면 문자열 자체는 잘 복사되더라도 활용시 이상한 쓰레기 값이 안에 들어갈 수도 있다.

	return nLenSrc; // 위에서 확인한 적정 크기를 호출자 함수에 반환해주어 함수가 제대로 작동했다는 사실과
					// 문자열 길이정보 두 가지를 한번에 전달한다.
					// 이때 문자열이 제대로 복사되었다면 적어도 0이상의 값이 반환될 것이고,
	                // 버퍼의 크기가 작아서 제대로 복사되지 못했다면 음수가 반환될 것이다.
					// 따라서 음수가 반환되는 경우 대상 메모리가 충분치 않다는 걸 인지함과 동시에
	                // 적정 메모리까지 얼만큼의 크기가 부족한지를 알 수 있게 된다. 
					// 만약 양수가 반환되낟면 메모리가 성공적으로 복사되었다는 사실과 더불어
					// 세 번째 인수로 전달된 문자열의 길이를 알 수 있게 된다.
}


int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);

	puts(szBufferDst);

	return 0;
}