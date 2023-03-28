#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nCount = 0;
    printf("문자열의 개수를 입력해주세요 : ");
    scanf_s("%d%*c", &nCount);

    // char* 를 nCount개 저장하는 메모리 동적 할당
    char** ppszData = (char**)calloc(nCount, sizeof(char*));

    int nMaxLength = 0;
    printf("문자열의 최대 길이를 입력해주세요 : ");
    scanf_s("%d%*c", &nMaxLength);

    int i = 0;
    for (i = 0; i < nCount; i++)
    {
        // char**인 ppszData의 i번째 요소를 간접지정해 동적 할당된 char* 를 저장
        ppszData[i] = (char*)calloc(nMaxLength + 2, sizeof(char));

        printf("%d번째 문자열 : ", i + 1);
        // 방금 할당된 char* 에 문자열 쓰기
        gets_s(ppszData[i], nMaxLength + 2);
    }
    for (i = 0; i < nCount; i++)
    {
        puts(ppszData[i]);
        // ppszData의 i번째 요소를 간접지정해 나온 char*가 가리키는 주소의 메모리를 해제
        free(ppszData[i]);
    }

    // ppszData 해제
    free(ppszData);
    return 0;
}