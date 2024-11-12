#include <stdio.h>

int main() {
    int num, evenSum = 0, oddSum = 0, digit;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;  // Convert the number to positive
    }
    
    // Loop to find the sum of even and odd digits
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        if (digit % 2 == 0) {
            evenSum += digit;  // Add to evenSum if the digit is even
        } else {
            oddSum += digit;   // Add to oddSum if the digit is odd
        }
        num /= 10;  // Remove the last digit
    }
    
    // Output the result
    printf("The sum of even digits is: %d\n", evenSum);
    printf("The sum of odd digits is: %d\n", oddSum);
    
    return 0;
}
