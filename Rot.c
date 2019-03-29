
#include<stdio.h>
        int main(){
            int a[3][3];
        int col,row;
        printf("clockwise\n");

        printf("enter elements into matrix\n");
        for(row=0;row<=2;row++){
            for(col=0;col<=2;col++){
                scanf("%d",&a[row][col]);


            }
            }
            printf("entered elements are \n");
              for(row=0;row<=2;row++){
            for(col=0;col<=2;col++){
                printf("%d  ",a[row][col]);

            }
            printf("\n");
            }
            printf("After 90 degress rotation clockWise \n");
        for(col=0;col<=2;col++){

                for(row=2;row>=0;row--){
                    printf("%d ",a[row][col]);

                }
                printf("\n");

            }


            }






