//A C program that demonstrates the uses of structures and pointers
#include<stdio.h>
#include<string.h>

struct student {

    int id;
    char name[20];
    float percentage;

};

int main() {

    struct student record = {1, "John", 90.5};
    struct student *pointer;
    pointer = &record;

    printf("ID is: %d\n", pointer->id);
    printf("Name is: %s\n", pointer->name);
    printf("Percentage is: %f\n", pointer->percentage);

    return 0;

}
