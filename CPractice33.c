//A C program that uses pointers and functions
#include<stdio.h>

void swap(int *a, int *b);
int main() {

    int num1 = 5;
    int num2 = 10;
    swap(&num1, &num2);

    printf("Number 1 = %d.\n", num1);
    printf("Number 2 = %d.\n", num2);

    return 0;

}

void swap(int *a, int *b) {

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
