
/*

매개변수로 char* 두 개를 받아 
각 포인터가 가리키는 대상 문자열이 같은 문자열인지 비교하는 함수를 작성한다.

만일 같으면 0을 반환하고, 그렇지 않으면 1을 반환한다.

기본적인 기능은 strcmp() 함수와 같다.
단, 영문 대/소문자를 구별하지 않고 비교한다.
따라서 'h'와 'H'를 같다고 의식해야 한다.

*/

#include <stdio.h>
#include <string.h>

int MyStrCmp(char* a, char* b)
{
    int i = 0, j = 0, k = 0;
    char c[16] = { 0 }, d[16] = { 0 };

    if (strlen(a) != strlen(b))
    {
        return 1;
    }

    // 영문 대/소문자 구별을 하지 않는다고 했으므로 편의를 위해 모두 소문자로 변환합니다.
    while (a[i] != NULL)
    {
        if (a[i] < 97 || a[i] > 123)
        {
            c[i] = (a[i] + 32);
        }

        else
        {
            c[i] = a[i];
        }

        i++;
    }

    while (b[j] != NULL)
    {

        if (b[j] < 97 || b[j] > 123)
        {
            d[j] = (b[j] + 32);
        }

        else
        {
            d[j] = b[j];
        }

        j++;
    }

    // 최종적으로 문자를 비교 합니다.
    while (c[k] != NULL)
    {
        if (c[k] != d[k])
            return 1;
        k++;
    }

    return 0;
}

int main(void)
{
    char a[16] = { 0 }; 
    char b[16] = { 0 };

    printf("Input 1: ");
    gets(a);
    printf("Input 2: ");
    gets(b);
    printf("Result : %d\n", MyStrCmp(a, b));

	return 0;
}