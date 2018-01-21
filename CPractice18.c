//A C program that prints a row based on your input
#include<stdio.h>

int main() {

    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        for(j = 1; j <= i; j++) {

            printf("*");
        }

        printf("\n");
    }

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        for(j = 1; j <= i; j++) {

            printf("%d", j);
        }

        printf("\n");
    }

    return 0;

}
