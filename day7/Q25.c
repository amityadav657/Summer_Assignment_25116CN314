#include<stdio.h>
int factorial(int num){
    if( num == 0 || num ==1){
        return 1;

    }
    return num*factorial(num -1);
}
int main(){
    int num = 5;
    printf(" factorial of %d is %d\n", num , factorial(num));
    return 0;

}