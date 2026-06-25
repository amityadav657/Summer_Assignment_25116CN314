#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = 4, n2 = 4;
    int res[8];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }
    while (i < n1) res[k++] = arr1[i++];
    while (j < n2) res[k++] = arr2[j++];

    printf("Merged Array: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}