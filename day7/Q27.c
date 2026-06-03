#include <stdio.h>
int sumofdigit(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumofdigit(n / 10);
}

int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = (num < 0) ? 
    num : num;
    result = sumofdigit(temp);
    printf("The sum of digits of %d is: %d\n", num, result);

    return 0;
}