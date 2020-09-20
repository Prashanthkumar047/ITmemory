#include<stdio.h>

void main(){

        int bt[10],at[10],wt,tat;

        int pid[100],n,i,j=0,k,temp;

        printf("enter how many processes you want to enter \n");
        scanf("%d",&n);
        printf("process id\n");
        for(int i=0;i<n;i++){
            scanf("%d",&pid[i]);
            }
            printf("enter burst time\n");
            for(int i=0;i<n;i++){
                scanf("%d",&bt[i]);
                }
                printf("enter arrival time\n");

            for(i=0;i<n;i++){
                scanf("%d",&at[i]);

            }
            printf("entered process id ,burst time\t arrival time\n");
    for(i=0;i<n;i++){
        printf("%d %d %d\n",pid[i],bt[i],at[i]);
    }

                for(i=0;i<n;i++){

                    if(bt[j]<bt[j+1]){

                    }
                    else if(bt[j]>bt[j+1]){

                            temp=bt[j];
                            bt[j]=bt[j+1];
                            bt[j+1]=temp;
                            temp=pid[j];
                            pid[j]=pid[j+1];
                            pid[j+1]=temp;
                                            }
           if(bt[j+1]>bt[j+2]){

                temp=bt[j+1];
                bt[j+1]=bt[j+2];
                bt[j+2]=temp;
                temp=pid[j+1];
                pid[j+1]=pid[j+2];
                pid[j+2]=temp;

           }
                else if(bt[j+1]>bt[j+2]){
                        temp=bt[j+1];
                        bt[j+1]=bt[j+2];
                        bt[j+2]=temp;
                              temp=pid[j+1];
                              pid[j+1]=pid[j+2];
                              pid[j+2]=temp;
}
            if(bt[j+2]>bt[j+3]){
                temp=bt[j+2];
                bt[j+2]=bt[j+3];
                bt[j+3]=temp;
                temp=pid[j+2];
                pid[j+2]=pid[j+3];
                pid[j+3]=temp;


            }
                }
            printf("pid \t bt\n");

        for(i=0;i<n;i++){

            printf("%d %d\n",pid[i],bt[i]);


        }


}
