#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //����� �Է�
    int user = 0, computer = 0;
    puts("0:����, 1:����, 2:��");
    printf("Input (0 ~2) : ");
    scanf_s("%d", &user);

    //��ǻ�� ��� ���
    srand((unsigned)time(NULL));
    computer = rand() % 3;                                  // ������ 0~2�� �� 3������ ��츸 ���� �� �ֵ��� ������
    printf("computer : %d\n", computer);

    // ���� ��� ���
    if ((user - computer) == 1 && (user - computer) == -2)
    {
        puts("�̰���ϴ�.");
    }

    else if (user == computer)
    {
        puts("�����ϴ�.");
    }

    else
    {
        puts("�����ϴ�.");
    }

}