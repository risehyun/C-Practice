#include <stdio.h>

typedef struct MYBODY
{
	int nHeight;
	int nWeight;
} MYBODY;

// MYBODY ����ü�� ����� ������ USERDATA ����ü ����
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	MYBODY body;

}USERDATA;

USERDATA user = {
	"Hoon",
	"1234",
	{175, 70} // MYBODY ����ü ��� �ʱ�ȭ
};

int main(void)
{
	printf("%s\t%s\t%d\t%d\n", user.szName, user.szPhone,
		// ��� ���� ������ �� �� �Ѵ�.
		user.body.nHeight, user.body.nWeight);

	return 0;
}