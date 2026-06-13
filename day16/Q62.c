#include <stdio.h>
int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2};
    int n = 7;
    int maxElement = arr[0], maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with max frequency: %d (appears %d times)\n", maxElement, maxCount);
    return 0;
}