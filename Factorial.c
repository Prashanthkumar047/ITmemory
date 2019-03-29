//Factorial of a Number//
#include<stdio.h>
  int main(){
      int n;
    int temp=1;

        printf("Enter number \n");
        scanf("%d",&n);
        printf("entered num is %d\n",n);
        for(int i=n;i>1;i--){

            temp=temp*n;
            n--;



        }
        printf("Factorial  is %d",temp);

  }

