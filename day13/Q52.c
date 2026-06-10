#include <stdio.h>
int main(){
    int n, evenCount = 0, arr[n],oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements = %d\n", oddCount);
    return 0;
}