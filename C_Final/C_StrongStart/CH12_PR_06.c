
/*

�Ű������� char* �� ���� �޾� 
�� �����Ͱ� ����Ű�� ��� ���ڿ��� ���� ���ڿ����� ���ϴ� �Լ��� �ۼ��Ѵ�.

���� ������ 0�� ��ȯ�ϰ�, �׷��� ������ 1�� ��ȯ�Ѵ�.

�⺻���� ����� strcmp() �Լ��� ����.
��, ���� ��/�ҹ��ڸ� �������� �ʰ� ���Ѵ�.
���� 'h'�� 'H'�� ���ٰ� �ǽ��ؾ� �Ѵ�.

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

    // ���� ��/�ҹ��� ������ ���� �ʴ´ٰ� �����Ƿ� ���Ǹ� ���� ��� �ҹ��ڷ� ��ȯ�մϴ�.
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

    // ���������� ���ڸ� �� �մϴ�.
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