//A C program that demonstrates the uses of structures
#include<stdio.h>
#include<string.h>

struct student {

    int id;
    char name[20];
    float percentage;

}record;

int main() {

    //struct student record = {0}; //initializing to null

    record.id = 1;
    strcpy(record.name, "John");
    record.percentage = 86.5;

    printf("ID is: %d.\n", record.id);
    printf("Name is: %s.\n", record.name);
    printf("Percentage is: %f.\n", record.percentage);

    return 0;

}
