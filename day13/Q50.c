#include <stdio.h>
int main(){
    int n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    average = (float)sum / n;

    printf("\nSum of elements = %d\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}