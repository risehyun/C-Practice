#include <stdio.h>

// ��Ʈ�ʵ� ����ü ���� �� ����
typedef struct _DATAFLAG
{
	unsigned char main : 1;  // 8��Ʈ �� ������ 1��Ʈ
	unsigned char left : 2;  // ������ 2~3��° ��Ʈ
	unsigned char right : 3; // ������ 4~6��° ��Ʈ
	unsigned char top : 2;   // ������ 7~8��° ��Ʈ (���� �� ��Ʈ)

} DATAFLAG;

int main(void)
{
	// 1��Ʈ ǥ������ : 0~1
	// 2��Ʈ ǥ������ : 0~3 (4�� ������ �Ѿ ���̴�.)
	// 3��Ʈ ǥ������ : 0~7
	DATAFLAG flagSwitch = { 0, 3, 7, 4 };

	printf("%d\n", flagSwitch.main);
	printf("%d\n", flagSwitch.left);
	printf("%d\n", flagSwitch.right);

	// 4�� 2��Ʈ ǥ�������� �Ѿ ���̹Ƿ� ����� �� ����. (0 ���).
	printf("%d\n", flagSwitch.top);

	printf("%X\n", *((unsigned char*)&flagSwitch));
	printf("%d\n", sizeof(flagSwitch));

	return 0;
}