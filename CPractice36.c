//A C program that uses structures and functions
#include<stdio.h>

struct student {

    char name[50];
    int roll;

};
void Display(struct student stu);
/*function prototype should be below to the structure declaration
otherwise compiler shows error category*/

int main() {

    struct student s1;
    printf("Enter the student's name: ");
    scanf("%s", &s1.name);

    printf("Enter the roll number: ");
    scanf("%d", &s1.roll);

    Display(s1);

    return 0;

}
void Display(struct student stu) {

    printf("Output: ");
    printf("Name: %s\n", stu.name);
    printf("Roll Number: %d", stu.roll);

}
