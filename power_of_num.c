#include<stdio.h>
void main(){
    int n,pow,temp;
    int i;
    printf("enter number and a power of num\n");
    scanf("%d%d",&n,&pow);
    temp=n;

    for(i=1;i<pow;i++){
        temp=temp*n;
    }
printf("power of num is  %d",temp);
}
