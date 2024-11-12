#include <stdio.h>

int main() {
    int num, digitToFind, count = 0, digit;
    
    // Ask the user to input the number and the digit to search for
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the digit to find its frequency: ");
    scanf("%d", &digitToFind);
    
    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;  // Convert the number to positive
    }
    
    // Loop through each digit of the number
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        if (digit == digitToFind) {
            count++;  // Increment the count if the digit matches
        }
        num /= 10;  // Remove the last digit
    }
    
    // Output the result
    printf("The digit %d appears %d time(s) in the number.\n", digitToFind, count);
    
    return 0;
}
