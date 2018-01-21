//A C program that prints out to char inputs

#include<stdio.h>

int main() {
    char firstname[10];
    char lastname[10];

    printf("Enter the first name: ");
    scanf("%s", &firstname);

    printf("Enter the last name: ");
    scanf("%s", &lastname);

    printf("The name of the person is %s %s", firstname, lastname);
}
