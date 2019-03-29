//clockWise 180 degree//

#include<stdio.h>
void main(){

            int a[3][3];
            int col,row;


            printf("ClockWise 180 Degress \n");
            printf("Enter Elements into Array\n");
                for(row=0;row<=2;row++){
                    for(col=0;col<=2;col++){
                            scanf("%d",&a[row][col]);
                }
                printf("\n");
                    }

                       printf("Entered Elements into Array is\n");
                         for(row=0;row<=2;row++){
                    for(col=0;col<=2;col++){
                            printf("%d ",a[row][col]);
                }
                printf("\n");
                    }
                printf("After 180 degress clockWise\n");

                    for(row=2;row>=0;row--){
                        for(col=2;col>=0;col--){

                            printf("%d ",a[row][col]);

                        }
                        printf("\n");
                    }


                }
