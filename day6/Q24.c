#include <stdio.h>
int main(){
    int a, n;
     long long result = 1;

    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter exponent : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result = result * a;
    }

    printf("%d raised to the power %d is: %lld", a, n, result);
    return 0;
}