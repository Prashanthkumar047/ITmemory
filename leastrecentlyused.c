#include<stdio.h>

int main(){
int i,pagefault=0,pagehit=0,k,j=0;
int f,n;int a[n];int b[f];

printf("enter no of frames\n,elements");
scanf("%d%d",&f,&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        i=0;
            while(i==n){
                for(k=0;k<f;k++){
                    if(b[k]==a[i]){
                        pagehit++;
                        break;
                    }
                    b[j]=a[i];
                    j++;pagefault++;
                    if(j==f){
                        j=0;
                    }
                }for(k=0;k<f;k++){
                printf("%d",b[k]);

                }
                printf("\n");


            }


        }
