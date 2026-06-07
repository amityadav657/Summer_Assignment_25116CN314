#include <stdio.h>
int Factorial(int n) {
    if ( n == 0 || n == 1){
        return 1;
    }
    return n* Factorial(n - 1);
}

int main() {
    int num ;
    printf(" enter the number,whose you want factorial:");
    scanf(" %d", &num);
    printf("Factorial of %d is %d\n", num, Factorial(num));
    return 0;
}