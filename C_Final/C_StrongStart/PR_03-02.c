// 사용자가 입력한 영문 중에서 두 번째 글자만 화면에 출력
#include <stdio.h>

int main(void) {
    char cBuffer = 0;

    cBuffer = getchar();
    cBuffer = getchar();

    printf("%c", cBuffer);

    return 0;
}