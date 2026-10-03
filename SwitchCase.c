#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Enter your choice: ");
    int n;
    scanf("%d",&n);
    if (n<4){
        switch(n){
        case(0):
            printf("A");
            break;
        case(1):
            printf("B");
            break;
        case(2):
            printf("C");
            break;
        case(3):
            printf("D");
            break;


        }
    }
    else{
        printf("Invalid input!");
    }


    return 0;
}

