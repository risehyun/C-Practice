#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer; // �����Ҵ��� �޸��� �ּҰ� szBuffer��� �迭�� �̸�(�ּ�)�� �������ȴ�. 
					    // ���� �ȿ� �� ���� ���� �ƴ� �ּҸ� �ܼ� ���ԵǾ���.
	puts(pszData);

	// �����Ҵ��� �޸𸮸� �����ϴ� �ڵ尡 ���� �޸� ������ �߻��Ѵ�.

	return 0;
}