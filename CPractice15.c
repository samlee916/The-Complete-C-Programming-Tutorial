//A C program that finds the largest number
#include<stdio.h>

int main() {

    int a, b, c;

    printf("Enter three random numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) {

        printf("The largest number is %d.", a);

    }

    if(b > a && b > c) {

        printf("The largest number is %d.", b);

    }

    if(c > a && c > b) {

        printf("The largest number is %d.", c);

    }

    return 0;

}
