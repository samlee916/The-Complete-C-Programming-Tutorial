//A C program that uses pointers
#include<stdio.h>

int main() {

    int *p, c;

    c = 22;

    printf("The address of c: %d.\n", &c);
    printf("The value of c: %d.\n", c);

    p = &c;

    printf("The address of pointer p: %d.\n", p);
    printf("The content of pointer p: %d.\n", *p);

    c = 11;

    printf("The address of pointer p: %d.\n", p);
    printf("The content of pointer p: %d.\n", *p);

    *p = 2;

    printf("The address of c: %d.\n", &c);
    printf("The value of c: %d.\n", c);

    return 0;

}
