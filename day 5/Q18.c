#include<stdio.h>
int main(){
    int num,fac,rem,sum=0,temp;
    printf(" enter the number:");
    scanf(" %d",&num);
    int i;
    temp = num;
    while( num!=0){
        i=fac=1;
        rem = num%10;

        while(i<=rem){
            fac=fac*i;
            i++;
        }
        sum = sum+fac;
        num=num/10;
    }
    if(sum == temp){
        printf(" %d is a strong number",temp);
    }
    else{
        printf(" %d is nota strong number", temp);

    }
    return 0;

} 