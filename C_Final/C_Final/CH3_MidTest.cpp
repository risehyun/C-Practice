#include <stdio.h>

double result;

int main()
{
    printf("** 실수 값을 입력하세요 :");
    scanf_s("%lf", &result);
    printf("결과는 : %f", result);
    return 0;
}