//A C program that uses enumeration
#include<stdio.h>

enum week{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {

    enum week today;
    today = Sunday;
    printf("This is the %dth day of the week.", today + 1);

    return 0;

}
