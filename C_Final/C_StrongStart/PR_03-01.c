
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int nAge = 0;
    char szName[32] = { 0 };

    printf("���̸� �Է��ϼ���. : ");
    scanf("%d%*c", &nAge); // ���� �ϳ��� �Է� ���ۿ��� �о�� �� �׳� ������. 
                           // ��, ���๮�ڸ� ���ۿ��� ���� �Ʒ� gets_s �Լ��� ����Ǵµ� ������ ������ �Ѵ�.
    printf("�̸��� �Է��ϼ���. : ");
    fflush(stdin); // �Է¹��۸� ��� ���๮�ڸ� ������� �Ѵ�.
    gets_s(szName, sizeof(szName));

    printf("����� ���̴� %d���̰� �̸��� '%s' �Դϴ�. \n", nAge, szName);

    return 0;

}