#include <stdio.h>
int main() {
    int arr[] = {10, 50, 30, 40, 20}, n = 5, i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Descending order: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}