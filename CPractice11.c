//A C program that uses if and else statements to determine if a number is positive or negative
#include<stdio.h>
#include<string.h>

int main() {

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number < 0) {
        printf("The number you entered is negative.");
    }

    else {
        printf("The number you entered is positive.");
    }

    return 0;
}
