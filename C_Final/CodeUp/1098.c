#include "stdio.h"

int main()
{
    int list[100][100] = { 0 }; //����,����

    int h, w, n, l, d, x, y;

    scanf("%d %d", &h, &w); //����,����
    scanf("%d", &n);       // ���� �� �ִ� ������ ����

    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y); //���� ���� ��ǥ , (d:���δ� 0, ���δ� 1)
        if (d == 0) {
            for (int j = 0; j < l; j++) {
                list[x][y + j] = 1;
            }
        }
        else {
            for (int j = 0; j < l; j++) {
                list[x + j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= h; i++) //�� ��(������ �Ʒ���) ��
    {
        for (int j = 1; j <= w; j++) //�� ��(���ʿ��� ����������) ��
        {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }

    return 0;
}
