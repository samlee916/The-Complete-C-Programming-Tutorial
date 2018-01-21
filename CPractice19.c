//A C program that uses the add and subtract function
#include<stdio.h>

int main() {

    int num1, num2, sum, subtract, a;
    printf("Enter 1 for addition or 2 for subtraction: ");
    scanf("%d", &a);

    if(a == 1) {
        printf("Enter the two values: \n");
        scanf("%d %d", &num1, &num2);

        sum = add(num1, num2);
        printf("The sum of these two numbers are %d.", sum);

    }

    if(a == 2) {

        printf("Enter the two values: \n");
        scanf("%d %d", &num1, &num2);

        subtract = sub(num1, num2);
        printf("The subtraction on these two number are %d.", subtract);
    }

    else if(a > 2) {

        printf("Enter number is not in the range specified.");

    }

    return 0;

}

int add(int a, int b) {

    int add;
    add = a + b;
    return add;

}

int sub(int a, int b) {

    int result;
    result = a - b;

    return result;


}
