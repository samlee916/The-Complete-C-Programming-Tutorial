#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//A C program that uses an example of dynamic memory allocation functions

int main() {

    char *a;
    //memory is allocated dynamically

    a = malloc(20 * sizeof(char));
    if (a == NULL) {

        printf("Couldn't able to allocate requested memory");

    }
    else  {

        strcpy(a, "dynamic memory allocation");

    }

    printf("Dynamically allocated memory content: " \
           "%s\n", a);

    free(a);

    char *b;
    //memory is allocated dynamically

    b = calloc(20, sizeof(char));
    if (b == NULL) {

        printf("Couldn't able to allocate requested memory");

    }
    else  {

        strcpy(b, "dynamic memory allocation");

    }

    printf("Dynamically allocated memory content: " \
           "%s\n", b);

    b = realloc(b, 100 * sizeof(char));
    if (b == NULL) {

        printf("Couldn't able to allocate requested memory");

    }
    else  {

        strcpy(b, "dynamic memory allocation");

    }

    printf("Dynamically reallocated memory content: " \
           "%s\n", b);

    free(b);


    return 0;

}
