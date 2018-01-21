//A C program that tells whether the alphabet entered by the user is vowel or consonant
#include<stdio.h>

int main() {

    char c;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {

        printf("The letter is a vowel.");

    }

    else
        printf("The letter is a consonant.");

    return 0;

}
