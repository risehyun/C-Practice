#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nCount = 0;
    printf("���ڿ��� ������ �Է����ּ��� : ");
    scanf_s("%d%*c", &nCount);

    // char* �� nCount�� �����ϴ� �޸� ���� �Ҵ�
    char** ppszData = (char**)calloc(nCount, sizeof(char*));

    int nMaxLength = 0;
    printf("���ڿ��� �ִ� ���̸� �Է����ּ��� : ");
    scanf_s("%d%*c", &nMaxLength);

    int i = 0;
    for (i = 0; i < nCount; i++)
    {
        // char**�� ppszData�� i��° ��Ҹ� ���������� ���� �Ҵ�� char* �� ����
        ppszData[i] = (char*)calloc(nMaxLength + 2, sizeof(char));

        printf("%d��° ���ڿ� : ", i + 1);
        // ��� �Ҵ�� char* �� ���ڿ� ����
        gets_s(ppszData[i], nMaxLength + 2);
    }
    for (i = 0; i < nCount; i++)
    {
        puts(ppszData[i]);
        // ppszData�� i��° ��Ҹ� ���������� ���� char*�� ����Ű�� �ּ��� �޸𸮸� ����
        free(ppszData[i]);
    }

    // ppszData ����
    free(ppszData);
    return 0;
}