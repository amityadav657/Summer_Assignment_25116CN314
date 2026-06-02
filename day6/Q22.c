#include <stdio.h>
int main(){
    int num, binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    binary = num;
    while (num > 0) {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("Decimal value is: %d", decimal);
    return 0;
}