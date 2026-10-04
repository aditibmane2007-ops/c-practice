#include<stdio.h>

int main(){
    //increasing triangle
    for(int i=0; i<5 ; i++){
        for(int j=0; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
    int l;
    //pyramid stars
    for(int k=1; k<=5 ; k++){
        for( l=5-k; l>=0; l--){
            printf(" ");
        }

        for(int m=1; m<=2*k-1; m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

