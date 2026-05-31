#include<stdio.h>
#include<math.h>
int main(){
    int num ,originalnum, remainder,n=0;
    float result =0.0;
    printf(" enter an integer:");
    scanf(" %d ",&num);
    originalnum = num;
    for(originalnum = num; originalnum !=0;++n){
        originalnum = num;

    }
    while(originalnum !=0){
        remainder = originalnum%10;
        result = result + pow(remainder, n);
        originalnum = originalnum / 10;

    }
    if((int)result == num){
        printf("%d is an armstrong number.",num);
    }
    else{
        printf("%d is not an armstrong number");

    }
    return 0;
}