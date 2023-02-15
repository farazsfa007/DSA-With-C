#include <stdio.h>

int main() {
    int arr[10] = {3, 4, 1, 7, 9, 2, 6, 8, 0, 5};
    int n = 10;
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // printf("%d",arr[0]);
    // printf("%d",arr[n-1]);

    return 0;
}
