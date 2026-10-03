#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Hello world!\n");
    printf("What's the boolean value?");
    bool isEven = 1;
    int n;
    for (int i = 0;i<5;i++){

            printf("\n Enter no.: ");
            scanf("%d",&n);
            if (n%2 == 0){
                printf("boolean value is:%d \n",isEven);
            }
            else {
                printf("boolean value is:%d \n",!isEven);
            }

    }


    return 0;
}
