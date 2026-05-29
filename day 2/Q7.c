#include<stdio.h>
int main(){
    int n,digit,product;
    printf(" enter the number:");
    scanf("%d",&n);
    product =1;
    while (n!=0)
    {
        digit = n%10;
        product = product*digit;
        n = n/10;



    }
    printf(" the product of digits of a given number is:%d",product);
    return 0;
    
}