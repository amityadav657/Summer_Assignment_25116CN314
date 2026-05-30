#include<stdio.h>
int main(){
    int firstno, lastno, flag;
    printf(" enter the first and last number :\n");
    scanf("%d %d ", &firstno,&lastno);
    for(int i=firstno;  i<=lastno; i++)
    {
        flag =1;
        if( i<=1){
            flag=0;
        }
        for(int j=2; j<=i/2; j++){

            if (i %j ==0){
                flag =0;
                break;
            }

            if(flag){
                printf(" %d",i);
            }

    }
}
    return 0;

}