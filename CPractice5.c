//A C program that uses operators
#include<stdio.h>

int main() {

    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("A = %d\nB = %d", a, b);

}
