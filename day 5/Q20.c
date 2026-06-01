#include<stdio.h>
int main(){
    int num,largest=0;
    printf(" enter the number");
    scanf(" %d",&num);

    for( int i =2; i<=num;i++){
        while(num %i==0){
            largest = i;
            num= num/i;
        }
    }
    printf(" largest prime factor =%d", largest);
    return 0;
}