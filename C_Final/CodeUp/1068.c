/*
����(����, 0 ~ 100)�� �Է¹޾� �򰡸� ����غ���.


�� ����
���� ���� : ��
 90 ~ 100 : A
 70 ~   89 : B
 40 ~   69 : C
   0 ~   39 : D
�� �򰡵Ǿ�� �Ѵ�.
*/

#include <stdio.h>

int main(void)
{
	int nInput = 0;

	scanf("%d", &nInput);

	if (nInput >= 90 && nInput <= 100)
	{
		printf("A\n");
	}

	else if (nInput >= 70 && nInput <= 89)
	{
		printf("B\n");
	}

	else if (nInput >= 40 && nInput <= 69)
	{
		printf("C\n");
	}

	else if (nInput >= 0 && nInput <= 39)
	{
		printf("D\n");
	}

	else
	{
		printf("ERROR : ������ �´� ���� �Է��ϼ���.");
	}


	return 0;
}