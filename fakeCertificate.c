#include <stdio.h>
#include <string.h>

int main() {
    int T;
    printf("Enter T\n");
    scanf("%d", &T);
    getchar(); // Consume newline

    for (int t = 0; t < T; t++) {
        int N;
        printf("Enter N\n");
        scanf("%d", &N);
        getchar(); // Consume newline

        char S[1000];
        printf("Enter String\n");
        fgets(S, sizeof(S), stdin);
        strtok(S, "\n"); // Remove newline from input

        int maxPresent = 0;
        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] == '1') {
                maxPresent++;
            }
        }

        int longestZeros = 0;
        int currentZeros = 0;
        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] == '0') {
                currentZeros++;
                if (currentZeros > longestZeros) {
                    longestZeros = currentZeros;
                }
            } else {
                currentZeros = 0;
            }
        }

        printf("%d\n", maxPresent + longestZeros);
    }

    return 0;
}