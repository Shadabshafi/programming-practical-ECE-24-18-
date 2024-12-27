#include <stdio.h>

int main() {
    int number, digit;

    
    printf("Enter a natural number: ");
    scanf("%d", &number);

    /
    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }


    printf("Digits in reverse order: ");
    while (number > 0) {
        digit = number % 10; 
        printf("%d", digit); 
        number /=
