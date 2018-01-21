//A C program that swaps two numbers
#include<stdio.h>

int main() {

    int a, b, c;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("A = %d\nB = %d", a, b);
}
