#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);


    // printf() 사용시
    // 하나의 값을 여러번 출력할 때
    // 출력할 갯수만큼 해당 값을 지정해주지 않으면
    // 나머지 값에는 쓰레기 값이 들어가게 된다.
    // printf("%d %d %d", x);
    // => x값, 쓰레기값, 쓰레기값 이 출력됨

    printf("%d %d %d", x, x, x);


    return 0;
}