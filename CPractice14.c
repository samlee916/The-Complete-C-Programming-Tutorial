//A C program that uses a do while loop to print out 0-10
#include<stdio.h>

int main() {

    int f = 0;

    do {

        printf("%d\n", f);
        f++;

    } while(f <= 10);

    int g = 0;

    do {

        printf("%d", g);
        g++;

    } while(g <= 10);

    return 0;

}
