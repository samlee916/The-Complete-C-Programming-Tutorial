//A C program to find the square root of a number
#include<stdio.h>
#include<math.h>

int main() {

    int answer, number;

    printf("Enter the number: ");
    scanf("%d", &number);

    answer = sqrt(number);

    printf("The square root of this number is %d.", answer);

    return 0;
}
