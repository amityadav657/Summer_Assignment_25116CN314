#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    int temp[7];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[j++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }
    
    return 0;
}