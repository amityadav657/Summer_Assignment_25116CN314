#include <stdio.h>
int main() {
    int arr[] = {29, 10, 14, 37, 13}, n = 5, i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min]){
             min = j;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
            }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}