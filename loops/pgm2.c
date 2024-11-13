#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input a five-digit integer
    printf("Enter a five-digit integer: ");
    scanf("%d", &number);

    // Ensure the number is a five-digit integer
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid five-digit integer.\n");
        return 1;
    }

    // Sum the digits of the number
    while (number != 0) {
        digit = number % 10;   // Extract the last digit
        sum += digit;           // Add the digit to the sum
        number /= 10;           // Remove the last digit
    }

    // Output the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
