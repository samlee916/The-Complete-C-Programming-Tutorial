//A C program that gets the total of numbers inputted
#include<stdio.h>

int main() {

    int num[10], i, n;
    int sum = 0;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("Enter the number of the subject %d: ", i+1);
        scanf("%d", &num[i]);

        sum += num[i];

    }

    printf("The sum is = %d.", sum);

    return 0;

}
