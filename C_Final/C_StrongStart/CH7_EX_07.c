#include <stdio.h>

int main(void)
{
	int i = 0;

	//for���� i�� 9�� �� ������ �ݺ��ȴ�.
	for (i = 0; i < 10; ++i)
	{
		// i���� 5�� �Ǹ� continue���� ����ǰ� �ٽ� ���� �˻�� �Ѿ��.
		// ���� �Ʒ��� continue�� �Ʒ��� �ڵ�� ������� �ʴ´�.
		if (i > 4)
			continue;
		printf("%dth\n", i);

	}

	// break���� ����� ���� ����� ���� ����Ѵ�.
	printf("END : i == %d\n", i);

	return 0;
}