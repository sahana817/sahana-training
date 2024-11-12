#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Loop through each digit of the number
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;         // Remove the last digit
    }
    
    // Output the result
    printf("The sum of the digits is: %d\n", sum);
    
    return 0;
}
