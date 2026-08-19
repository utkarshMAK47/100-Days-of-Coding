//Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the remainder is 0 when divided by 2
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
