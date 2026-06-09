#include <stdio.h>
int Palindrome(int n) {
    int reversed = 0, remainder, original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    Palindrome(num);
    return 0;
}