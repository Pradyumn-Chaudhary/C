#include <stdio.h>
#include <time.h>

int main() {
    int start, stop;
    int n = 10000;
    int arr[10000];
    
    FILE *file;
    file = fopen("random_numbers.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1; // Exit with an error code if the file cannot be opened
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);
    
    start = clock();

    for (int i = 0; i < n - 1; i++) {
        int custom = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                custom++;
            }
        }
        if(custom==0){
                break;
            }
    }

    stop = clock();
    double duration = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%lf\n", duration);
    
    // for (int i = 0; i < 20; i++) {
    //     printf("%d\n", arr[i]);
    // }

    return 0; 
}
