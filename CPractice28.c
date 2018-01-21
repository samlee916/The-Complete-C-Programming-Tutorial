//A C program that calls functions using string types
#include<stdio.h>

void Display (char ch[]);

int  main() {

    char c[50];
    printf("Enter the string: ");
    gets(c);
    Display(c); //passing string c into a function


    return 0;

}

void Display(char ch[]) {

    printf("String output is: ");
    puts(ch);

}
