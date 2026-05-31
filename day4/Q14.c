#include<stdio.h>
int main(){
    int n, a=0,b=1,c;
    printf(" enter the position:");
    scanf(" %d",&n);
    if(n==1){
        printf("term:%d ,a");

    }
    else{
        for(int i=3; i<=n;++i){
            c = a+b;
            a = b;
            b = c;

        }
        printf(" the %dth term is: %d", n,b);
    }
    return 0;
}