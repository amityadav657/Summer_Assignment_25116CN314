#include <stdio.h>
int  Armstrong(int n){
    int sum = 0, remainder, original = n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    if (original == sum)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
}

int main(){
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    Armstrong(num);
    return 0;
}