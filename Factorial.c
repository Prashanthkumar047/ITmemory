//Factorial of a Number//
#include<stdio.h>
  int main(){
      int n,temp;
        printf("Enter number \n");
        scanf("%d",&n);
  temp=n;
    printf("entered num is %d\n",n);
        for(int i=n;i>1;i--){
         n--;
            temp=temp*n;
         



        }
        printf("Factorial  is %d",temp);

  }

