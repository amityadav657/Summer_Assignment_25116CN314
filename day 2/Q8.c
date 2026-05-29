#include<stdio.h>
int main(){
    int n,t, reverse=0,remainder;
    printf(" enter the  number:");
    scanf(" %d",&n);
    t=n;
    while (n!=0)
    {
        remainder= n%10;
        reverse = reverse *10 + remainder;
        n = n/10;


    }
    if( t== reverse){
        printf( " the given number is palindrome");
    }
    else {
        printf(" this number is not palindrome");
}
    return 0;
    

}