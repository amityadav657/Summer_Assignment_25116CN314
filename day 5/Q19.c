#include<stdio.h>
int main(){
    int n;

    printf(" enter the number:");
    scanf(" %d",&n);

    for( int i= 2; i<=n ;i++){
        while( n%i == 0 ){
        printf(" %d", i);
        n= n/i;
    }
}
    return 0;
}
