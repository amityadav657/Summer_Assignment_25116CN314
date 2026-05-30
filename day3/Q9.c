#include<stdio.h>
int main(){
    int n;
    printf(" enter the number to check prime or not:");
    scanf(" %d",&n);
    int flag = 1;
    if (n<=1){
        flag = 0;
    }
    for(int i=2; i<=n/2; i++){
        if( n%i==0){
            flag = 0;
            break;
        }
    }
    if (flag){
        printf(" %d is prime",n);
    }
    else{
        printf(" %d is not a prime number", n);

    }
    return 0;
}