#include <stdio.h>

int main() {
    int n, i, j, k, l;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half of the diamond
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < 2*(n - i); j++) {
            printf(" ");
        }
        // Print numbers
        for (k = 1, l = 0; l <= i; k += 2, l++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (j = 0; j < 2*(n - i); j++) {
            printf(" ");
        }
        // Print numbers
        for (k = 1, l = 0; l <= i; k += 2, l++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
