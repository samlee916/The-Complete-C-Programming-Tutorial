//A C program to find the area of the circle
#include<stdio.h>

int main() {

    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("The area of the circle is %f.", area);

    return 0;
}
