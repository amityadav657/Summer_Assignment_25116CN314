#include<stdio.h>
int findmax( int a,int b){
    return ( a>b ) ? a : b;
}

int main(){
    int c,d,result;
    printf(" enter the numbers which are you comparing:");
    scanf(" %d %d", &c,&d);
    result = findmax(c,d);
    printf( " the maximum nuber from the given number is: %d", result);
    return 0;

}