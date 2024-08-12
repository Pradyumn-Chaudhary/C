#include <stdio.h>
#include <time.h>

void main() {
    int start, stop;
    int n = 10000;
    int arr[10000];

    FILE *file;
    file = fopen("random_numbers.txt", "r");

    for (int i = 0; i < 10000; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);

    start = clock();

    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[k] > arr[j]) {
                k = j;
            }
        }
        if (k != i) {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }

    stop = clock();

    double duration = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%lf\n", duration);

    for (int i = 0; i < 20; i++) {
        printf("%d\n", arr[i]);
    }
}
