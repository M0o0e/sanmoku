
#include <stdio.h>
int main(void) {
    int a, b, i, j, x, y,k;
    char banmen[4][4];

//�Ֆʂ̏����ݒ�
    for (j = 0; j <= 3; j++) {
        for (i = 0; i <= 3; i++) {
            banmen[j][i] = 0;
        }
        i = 0;
    }

    printf("\t1\t2\t3\n");

    for (i = 1; i <= 4; i++) {
        printf("%d|\t-\t-\t-\n", i);
    }

    for (k = 1; k <= 4; k++) {

        ///1�l��

    A:

        printf("1�l�ڂ����͂��Ă�������\n");

        printf("�c����w�肵�Ă�������\n");
        scanf("%d", &y);

        printf("������w�肵�Ă�������\n");
        scanf("%d", &x);

        x = x - 1;
        y = y - 1;

        if (banmen[x][y] == 0) {
            banmen[x][y] = 1;
        }
        ///�������͂���Ă����ꍇ
        else {
            printf("�����͂��łɓ��͂���Ă��܂�\n");
            printf("�ʂ̏ꏊ��I�����Ă�������\n");
            goto A;
        }

        ///�c��̊m�F

        for (j = 0; j <= 3; j++) {
            for (i = 0; i <= 3; i++) {
                if (banmen[i][j] != 1) {
                    i = 5;
                }
                else if (i == 2) {
                    printf("���Ȃ��̏����ł�\n");
                    return 0;
                }
            }


        }

        ///����̊m�F
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                if (banmen[i][j] != 1) {
                    j = 5;
                }

                else if (j == 2) {
                    printf("���Ȃ��̏����ł�\n");
                    return 0;
                }
            }

        }
        ///�΂߂̊m�F
        for (i = 0; i <= 3; i++) {
            if (banmen[i][i] != 1) {
                i = 5;
            }
            else if (i == 2) {
                printf("���Ȃ��̏����ł�\n");
                return 0;
            }
        }

        for (i = 0; i <= 3; i++) {
            j = 2 - i;
            if (banmen[i][j] != 1) {
                i = 5;
            }

            else if (i == 4) {
                printf("���Ȃ��̏����ł�\n");
                return 0;
            }
        }



        ///�Ֆʂ̕\��

        ///2�l��

    B:

        printf("�Q�l�ڂ����͂��Ă�������\n");

        printf("�c����w�肵�Ă�������\n");
        scanf("%d", &y);

        printf("������w�肵�Ă�������\n");
        scanf("%d", &x);

        if (banmen[x][y] == 0) {
            banmen[x][y] = 2;
        }
        else {
            printf("�����͂��łɓ��͂���Ă��܂�\n");
            printf("�ʂ̏ꏊ��I�����Ă�������\n");
            goto B;
        }

///�c
        for (j = 0; j <= 3; j++) {
            for (i = 0; i <= 3; i++) {
                if (banmen[i][j] != 1) {
                    i = 5;
                }
                else if (i == 2) {
                    printf("���Ȃ��̏����ł�\n");
                    return 0;
                }
            }
        }
///����̊m�F
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                if (banmen[i][j] != 1) {
                    j = 5;
                }
                else if (j == 2) {
                    printf("���Ȃ��̏����ł�\n");
                    return 0;
                }
            }

        }
///�΂߂̊m�F
        for (i = 0; i <= 3; i++) {
            if (banmen[i][i] != 1) {
                i = 5;
            }
            else if (i == 2) {
                printf("���Ȃ��̏����ł�\n");
                return 0;
            }
        }
        for (i = 0; i <= 3; i++) {
            j = 2 - i;
            if (banmen[i][j] != 1) {
                i = 5;
            }
            else if (i == 4) {
                printf("���Ȃ��̏����ł�\n");
                return 0;
            }
        }


    }

    return 0;
}
