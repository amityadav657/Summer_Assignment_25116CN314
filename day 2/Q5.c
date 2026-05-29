#include<stdio.h>
int main(){
    int n, digit;
    printf("enter the  number:");
    scanf("%d",&n);
    int sum=0;
    while (n!=0)
    {

        digit= n%10;
        sum = sum+digit;
        n = n/10;

    }
    printf(" the sum of digits of the given no is %d",sum);
    return 0;
    

}