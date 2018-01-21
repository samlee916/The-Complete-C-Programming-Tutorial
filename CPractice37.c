//A C programs that uses unions
#include<stdio.h>

union job { //defining a union

    char name[32];
    float salary;
    int worker_number;

}u;

struct job1 {

    char name[32];
    float salary;
    int worker_number;

}s;

int main() {

    printf("Size of union = %d\n", sizeof(u));
    printf("Size of structure = %d", sizeof(s));

    return 0;

}
