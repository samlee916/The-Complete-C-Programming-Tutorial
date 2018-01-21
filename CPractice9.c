//A C program that accepts a string and find out the total number of characters
#include<stdio.h>

int main() {

    char word[20];
    int a;

    printf("Enter the string: ");
    scanf("%s", &word);

    a = strlen(word);

    printf("The length of the character is %d.", a);

    return 0;
}
