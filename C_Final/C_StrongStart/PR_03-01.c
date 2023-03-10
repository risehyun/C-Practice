
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int nAge = 0;
    char szName[32] = { 0 };

    printf("나이를 입력하세요. : ");
    scanf("%d%*c", &nAge); // 문자 하나를 입력 버퍼에서 읽어온 후 그냥 버린다. 
                           // 즉, 개행문자를 버퍼에서 버려 아래 gets_s 함수가 실행되는데 문제가 없도록 한다.
    printf("이름을 입력하세요. : ");
    fflush(stdin); // 입력버퍼를 비워 개행문자를 사라지게 한다.
    gets_s(szName, sizeof(szName));

    printf("당신의 나이는 %d살이고 이름은 '%s' 입니다. \n", nAge, szName);

    return 0;

}