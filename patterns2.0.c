#include<stdio.h>

int main(){
    int i,j,k,l,m,n;
    for(i=0;i<5;i++){
        for(j=4-i;j>=0;j--){
            printf(" ");
        }
        for(k=1;k<=2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(l=0;l<5;l++){
        for(m=4-l;m>=0;m--){
            printf(" ");
        }
        for(n=1;n<=2*l+1;n++){
            printf("%d",n);
        }
        printf("\n");
    }
    int num=1;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%d",num);
            num++;
        }


        printf("\n");
    }

    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(i==0||i==4||j==0||j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            printf(" ");

        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(i==4||j==1||j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        return 0;

}



