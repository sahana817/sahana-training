#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN

int main() {
    int num, digit;
    int max_digit = INT_MIN;  // Initialize max digit to the smallest possible integer
    int min_digit = INT_MAX;  // Initialize min digit to the largest possible integer
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle the case of negative numbers
    if (num < 0) {
        num = -num;  // Convert the number to positive
    }
    
    // Loop through each digit of the number
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        if (digit > max_digit) {
            max_digit = digit;  // Update the max digit if the current digit is larger
        }
        if (digit < min_digit) {
            min_digit = digit;  // Update the min digit if the current digit is smaller
        }
        num /= 10;  // Remove the last digit
    }
    
    // Output the result
    printf("The largest digit is: %d\n", max_digit);
    printf("The smallest digit is: %d\n", min_digit);
    
    return 0;
}
