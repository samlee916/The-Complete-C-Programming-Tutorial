//A C program that finds the quotient and remainder of two integers
#include<stdio.h>
#include<string.h>

int main() {

    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = dividend/divisor;
    remainder = dividend%divisor;

    printf("Quotient = %d\nRemainder = %d", quotient, remainder);


    return 0;
}
