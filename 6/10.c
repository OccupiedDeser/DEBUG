#include <stdio.h>
#include <string.h>

int main() {
    char pms[3];
    char change_pms[100][3];
    int i;
    i = 0;
    int j;
    int num = 0;
    int a; //�ļ�������Ȩ��ֵ
    a = 0;
    int b;
    b = 0;
    int c;
    c = 0;

    //���뵱ǰ�ļ�Ȩ��
    scanf("%s", pms);
    // printf("%s", pms);
    //�������ӻ���ɾ�����ļ�Ȩ��
    while (scanf("%s", change_pms[i++]) != EOF) {
        num++;
    }
    //�ж�ԭ�ļ���Ȩ�ޣ���ʮ���Ʊ�ʾ
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        }
    }
    // printf("%d\n", a);
    /* for (i = 0; i <= strlen(change_pms[i]); i++)
     {
         j = 0;
         if (change_pms[i][j] == '+')
         {
            if (change_pms[i][j + 1] == 'r')
            {
                 printf("111");
                b = b + 4;
             } else if (change_pms[i][j + 1] == 'w')
            {
                 printf("222");
                 b = b + 2;
             } else
            {
                printf("222");
                 b = b + 1;
             }
         }
         /*else {
             printf("00");
             if (change_pms[i][j + 1] == 'r') {
                 b = b - 4;
             } else if (change_pms[i][j + 1] == 'w') {
                 b = b - 2;
             } else {
                 b = b - 1;
             }
         }*/

    for (i = 0; i < num; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r' && (a + b) / 4 == 0) {
                b += 4;
            } else if (change_pms[i][j + 1] == 'w' && ((a + b) / 2) % 2 == 0) {
                b += 2;
            } else if ((a + b) % 2 == 0) {
                b += 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r' && (a + b) / 4) {
                b -= 4;
            } else if (change_pms[i][j + 1] == 'w' && ((a + b) / 2) % 2) {
                b -= 2;
            } else if ((a + b) % 2) {
                b -= 1;
            }
        }
    }
    /*for (i = 0; i < 4; i++) {
            printf("%c-%c\n",change_pms[i][0], change_pms[i][1]);
    }*/
    // printf("%d\n", strlen(change_pms[0]);
    // printf("%d\n", b);
    // printf("%d\n", c);
    printf("%d", a + b);
    return 0;
}