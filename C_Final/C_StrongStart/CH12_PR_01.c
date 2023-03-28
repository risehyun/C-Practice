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

	// ���ڿ��� �����Ϸ��� ���� ���ڿ��� ���̰� �ʿ��ϴ�.
	// �׷��� �̶� ������ ������ �׳� �������� ���� �����̱� ������ 9~10�� ��ó�� ��� �޸��� ������ ũ�⸦ Ȯ���Ѵ�.
	if (nLenSrc + 1 > nDstSize) // '\0'(�ι���)���� ����� ������ ����ϱ� ���� +1�� ���־���.
	{
		return nDstSize - (nLenSrc + 1);
	}

	while (pszSrc[i] != NULL)
	{
		pszDst[i] = pszSrc[i];
		++i;
	}

	pszDst[i] = '\0'; // ���ڿ��� ���� '\0'�̹Ƿ� ���ڵ��� ��� �����ϰ� �� �ڿ��� ������ ���� �ݵ��
				      // '\0'�� �־� ���ڿ��� ���� ����ؾ� �Ѵ�.
					  // ���� �׷��� ������ ���ڿ� ��ü�� �� ����Ǵ��� Ȱ��� �̻��� ������ ���� �ȿ� �� ���� �ִ�.

	return nLenSrc; // ������ Ȯ���� ���� ũ�⸦ ȣ���� �Լ��� ��ȯ���־� �Լ��� ����� �۵��ߴٴ� ��ǰ�
					// ���ڿ� �������� �� ������ �ѹ��� �����Ѵ�.
					// �̶� ���ڿ��� ����� ����Ǿ��ٸ� ��� 0�̻��� ���� ��ȯ�� ���̰�,
	                // ������ ũ�Ⱑ �۾Ƽ� ����� ������� ���ߴٸ� ������ ��ȯ�� ���̴�.
					// ���� ������ ��ȯ�Ǵ� ��� ��� �޸𸮰� ���ġ �ʴٴ� �� �����԰� ���ÿ�
	                // ���� �޸𸮱��� ��ŭ�� ũ�Ⱑ ���������� �� �� �ְ� �ȴ�. 
					// ���� ����� ��ȯ�ǳ��� �޸𸮰� ���������� ����Ǿ��ٴ� ��ǰ� ���Ҿ�
					// �� ��° �μ��� ���޵� ���ڿ��� ���̸� �� �� �ְ� �ȴ�.
}


int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);

	puts(szBufferDst);

	return 0;
}