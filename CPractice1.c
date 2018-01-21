//A C program that add two different input numbers
#include<stdio.h>

int main() {
    int num1, num2, total;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("The sum of two these numbers are: %d", total);

    return 0;
}
