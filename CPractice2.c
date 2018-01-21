//A C program that add two different input floating numbers
#include<stdio.h>

int main() {
    float num1, num2, total;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    total = num1 + num2;

    printf("The sum of two these numbers are: %f", total);

    return 0;
}
