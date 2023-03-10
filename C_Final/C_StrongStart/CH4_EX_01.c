// 연산의 임시 결과
#include <stdio.h>

int main(void)
{
    int nResult = 0;

    // 1. 3 + 4 = 7(임시 결과)
    // 2. 7(임시결과) - 5 = 2(최종값)
    // 3. nResult = 2 (최종값이 저장됨)
    nResult = 3 + 4 - 5;

    printf("nResult : %d\n", nResult);

    return 0;
}