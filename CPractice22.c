//A C program that displays two dimensional arrays
#include<stdio.h>

int main() {

    int a[2][2] = {{1,2},{3,4}};
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {

                printf("The array a[%d][%d] = %d.\n", i, j, a[i][j]);


        }
    }

    return 0;

}
