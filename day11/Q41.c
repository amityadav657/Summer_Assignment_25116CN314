#include<stdio.h>
int findsum( int a, int b){
    return a+b;
}

int main(){
    int c, d, result;
    printf("enter the value of c and d :");
    scanf("%d%d", &c,&d);
     result = findsum(c,d);
     printf(" the sum of two given number is equal to :%d", result);
     return 0;
}