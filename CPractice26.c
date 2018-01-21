//A C program that uses adds arrays with a different outlook
#include<stdio.h>

int main() {

    int a[2][2], b[2][2];
    int i, j;

     for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++) {

                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);


        }


    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++) {


            printf("Enter b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)

            a[i][j] = a[i][j] + b[i][j];

            printf("Matrix: \n");

            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++) {

                    printf("%d\t", a[i][j]);
                    if(j == 1)
                        printf("\n");

                }
    return 0;

}
