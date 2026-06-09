#include <stdio.h>
int Fibonacci(int terms){
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    Fibonacci(n);
    return 0;
}