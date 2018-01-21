//A C program that uses a preprocessor
#include<stdio.h>
#define PI 3.1415
#define area(r) (3.1415 * (r) * (r))

int main() {

    int radius;
    float area;
    printf("Enter the radius: ");
    scanf("%d", &radius);

    area = area(radius);
    //area = PI * radius * radius;
    printf("Area = %.2f.", area);




    return 0;

}
