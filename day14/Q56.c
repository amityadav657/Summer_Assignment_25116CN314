#include <stdio.h>
int main(){
    int arr[] = { 1,2,3,4,2,7,8,8,9,9};
    int n = 10;
    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}