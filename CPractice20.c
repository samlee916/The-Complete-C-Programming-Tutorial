//A C program that demonstrates the uses of arrays
#include<stdio.h>

int main() {

    int i;
    int age[5] = {2,3,4,5,6};

    for(i = 0; i < 5; i++) {

        printf("The value in a[%d] is %d.\n", i, age[i]);
    }

    return 0;

}
