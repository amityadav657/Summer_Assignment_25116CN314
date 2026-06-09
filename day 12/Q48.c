#include <stdio.h>
int Perfect(int n){
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    if (sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);
}

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    Perfect(num);
    return 0;
}