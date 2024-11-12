#include <stdio.h>

int main() {
    int num, digit, smallestDigit;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Initialize the smallest digit to a large value
    smallestDigit = 9;

    // Loop through each digit of the number
    while (num > 0) {
        // Extract the last digit of the number
        digit = num % 10;

        // Check if the current digit is smaller than the smallest digit
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }

        // Remove the last digit from the number
        num = num / 10;
    }

    // Output the smallest digit
    printf("The smallest digit is: %d\n", smallestDigit);

    return 0;
}
