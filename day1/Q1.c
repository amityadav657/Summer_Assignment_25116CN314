#include<stdio.h>
int main(){
    int n,sum;
    printf(" enter the natural number:" );
    scanf("%d", &n);
    sum =0;
    for(int i=0; i<=n; i++){
        sum =sum+i;

    }
    printf("the sum of first natural no of %d is %d", n,sum);
    return 0;
    


    }
