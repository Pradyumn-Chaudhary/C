#include <stdio.h>

int main() {
    int Row;
    int Column;
    int arr[5][5] = {{9, 9, 9, 9, 9}, {9, 9, 9, 9, 9}, {9, 9, 9, 9, 9}, {9, 9, 9, 9, 9}, {9, 9, 9, 9, 9}};
    for (int i = 0; i < 25; i++) {
        while (1) {
            printf("Player 1 Move:\n");
            printf("Enter Row & Column:\n");
            scanf("%d %d", &Row, &Column);
            if (arr[Row][Column] == 9 && Row >= 0 && Row <= 4 && Column >= 0 && Column <= 4) {
                break;
            }
            printf("Invalid Move\nMove Again\n");
        }
        arr[Row][Column] = 0;

        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                printf("%d ", arr[j][k]);
            }
            printf("\n");
        }

        // Check for Player 1 win
        for (int j = 0; j < 5; j++) {
            if ((arr[j][0] == 0 && arr[j][1] == 0 && arr[j][2] == 0 && arr[j][3] == 0) || 
                (arr[j][1] == 0 && arr[j][2] == 0 && arr[j][3] == 0 && arr[j][4] == 0) ||
                (arr[0][j] == 0 && arr[1][j] == 0 && arr[2][j] == 0 && arr[3][j] == 0) ||
                (arr[1][j] == 0 && arr[2][j] == 0 && arr[3][j] == 0 && arr[4][j] == 0)) {
                printf("Player 1 Won!\n");
                return 0;
            }
        }
        if ((arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0 && arr[3][3] == 0) ||
            (arr[1][1] == 0 && arr[2][2] == 0 && arr[3][3] == 0 && arr[4][4] == 0) ||
            (arr[0][4] == 0 && arr[1][3] == 0 && arr[2][2] == 0 && arr[3][1] == 0) ||
            (arr[1][3] == 0 && arr[2][2] == 0 && arr[3][1] == 0 && arr[4][0] == 0) ||
            (arr[0][1] == 0 && arr[1][2] == 0 && arr[2][3] == 0 && arr[3][4] == 0) ||
            (arr[1][0] == 0 && arr[2][1] == 0 && arr[3][2] == 0 && arr[4][3] == 0) ||
            (arr[0][3] == 0 && arr[1][2] == 0 && arr[2][1] == 0 && arr[3][0] == 0) ||
            (arr[1][4] == 0 && arr[2][3] == 0 && arr[3][2] == 0 && arr[4][1] == 0)) {
            printf("Player 1 Won!\n");
            return 0;
        }

        while (1) {
            printf("Player 2 Move:\n");
            printf("Enter Row & Column:\n");
            scanf("%d %d", &Row, &Column);
            if (arr[Row][Column] == 9 && Row >= 0 && Row <= 4 && Column >= 0 && Column <= 4) {
                break;
            }
            printf("Invalid Move\nMove Again\n");
        }
        arr[Row][Column] = 1;

        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                printf("%d ", arr[j][k]);
            }
            printf("\n");
        }

        // Check for Player 2 win
        for (int j = 0; j < 5; j++) {
            if ((arr[j][0] == 1 && arr[j][1] == 1 && arr[j][2] == 1 && arr[j][3] == 1) ||
                (arr[j][1] == 1 && arr[j][2] == 1 && arr[j][3] == 1 && arr[j][4] == 1) ||
                (arr[0][j] == 1 && arr[1][j] == 1 && arr[2][j] == 1 && arr[3][j] == 1) ||
                (arr[1][j] == 1 && arr[2][j] == 1 && arr[3][j] == 1 && arr[4][j] == 1)) {
                printf("Player 2 Won!\n");
                return 0;
            }
        }
        if ((arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1 && arr[3][3] == 1) ||
            (arr[1][1] == 1 && arr[2][2] == 1 && arr[3][3] == 1 && arr[4][4] == 1) ||
            (arr[0][4] == 1 && arr[1][3] == 1 && arr[2][2] == 1 && arr[3][1] == 1) ||
            (arr[1][3] == 1 && arr[2][2] == 1 && arr[3][1] == 1 && arr[4][0] == 1) ||
            (arr[0][1] == 1 && arr[1][2] == 1 && arr[2][3] == 1 && arr[3][4] == 1) ||
            (arr[1][0] == 1 && arr[2][1] == 1 && arr[3][2] == 1 && arr[4][3] == 1) ||
            (arr[0][3] == 1 && arr[1][2] == 1 && arr[2][1] == 1 && arr[3][0] == 1) ||
            (arr[1][4] == 1 && arr[2][3] == 1 && arr[3][2] == 1 && arr[4][1] == 1)) {
            printf("Player 2 Won!\n");
            return 0;
        }

        if (i == 24) {
            printf("Tie!\n");
            return 0;
        }
    }
}
