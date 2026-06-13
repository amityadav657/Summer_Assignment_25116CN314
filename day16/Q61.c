#include <stdio.h>
int main(){
    int n = 5;
    int arr[] = {1, 2, 4, 5};
    int size = n - 1;
    
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for(int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    printf("The missing number is: %d\n", expectedSum - actualSum);
    
    return 0;
}