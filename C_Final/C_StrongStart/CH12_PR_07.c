#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //사용자 입력
    int user = 0, computer = 0;
    puts("0:가위, 1:바위, 2:보");
    printf("Input (0 ~2) : ");
    scanf_s("%d", &user);

    //컴퓨터 결과 출력
    srand((unsigned)time(NULL));
    computer = rand() % 3;                                  // 난수가 0~2로 총 3가지의 경우만 나올 수 있도록 제한함
    printf("computer : %d\n", computer);

    // 최종 결과 출력
    if ((user - computer) == 1 && (user - computer) == -2)
    {
        puts("이겼습니다.");
    }

    else if (user == computer)
    {
        puts("비겼습니다.");
    }

    else
    {
        puts("졌습니다.");
    }

}