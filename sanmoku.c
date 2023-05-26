
#include <stdio.h>
int main(void) {
    int a, b, i, j, x, y,k;
    char banmen[4][4];

//盤面の初期設定
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

        ///1人目

    A:

        printf("1人目が入力してください\n");

        printf("縦列を指定してください\n");
        scanf("%d", &y);

        printf("横列を指定してください\n");
        scanf("%d", &x);

        x = x - 1;
        y = y - 1;

        if (banmen[x][y] == 0) {
            banmen[x][y] = 1;
        }
        ///何か入力されていた場合
        else {
            printf("そこはすでに入力されています\n");
            printf("別の場所を選択してください\n");
            goto A;
        }

        ///縦列の確認

        for (j = 0; j <= 3; j++) {
            for (i = 0; i <= 3; i++) {
                if (banmen[i][j] != 1) {
                    i = 5;
                }
                else if (i == 2) {
                    printf("あなたの勝利です\n");
                    return 0;
                }
            }


        }

        ///横列の確認
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                if (banmen[i][j] != 1) {
                    j = 5;
                }

                else if (j == 2) {
                    printf("あなたの勝利です\n");
                    return 0;
                }
            }

        }
        ///斜めの確認
        for (i = 0; i <= 3; i++) {
            if (banmen[i][i] != 1) {
                i = 5;
            }
            else if (i == 2) {
                printf("あなたの勝利です\n");
                return 0;
            }
        }

        for (i = 0; i <= 3; i++) {
            j = 2 - i;
            if (banmen[i][j] != 1) {
                i = 5;
            }

            else if (i == 4) {
                printf("あなたの勝利です\n");
                return 0;
            }
        }



        ///盤面の表示

        ///2人目

    B:

        printf("２人目が入力してください\n");

        printf("縦列を指定してください\n");
        scanf("%d", &y);

        printf("横列を指定してください\n");
        scanf("%d", &x);

        if (banmen[x][y] == 0) {
            banmen[x][y] = 2;
        }
        else {
            printf("そこはすでに入力されています\n");
            printf("別の場所を選択してください\n");
            goto B;
        }

///縦
        for (j = 0; j <= 3; j++) {
            for (i = 0; i <= 3; i++) {
                if (banmen[i][j] != 1) {
                    i = 5;
                }
                else if (i == 2) {
                    printf("あなたの勝利です\n");
                    return 0;
                }
            }
        }
///横列の確認
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                if (banmen[i][j] != 1) {
                    j = 5;
                }
                else if (j == 2) {
                    printf("あなたの勝利です\n");
                    return 0;
                }
            }

        }
///斜めの確認
        for (i = 0; i <= 3; i++) {
            if (banmen[i][i] != 1) {
                i = 5;
            }
            else if (i == 2) {
                printf("あなたの勝利です\n");
                return 0;
            }
        }
        for (i = 0; i <= 3; i++) {
            j = 2 - i;
            if (banmen[i][j] != 1) {
                i = 5;
            }
            else if (i == 4) {
                printf("あなたの勝利です\n");
                return 0;
            }
        }


    }

    return 0;
}
