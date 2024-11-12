#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Loop through each digit of the number
    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        if (digit % 2 == 0) {  // Check if the digit is even
            count++;  // Increment count if the digit is even
        }
        num /= 10;  // Remove the last digit
    }
    
    // Output the result
    printf("The number of even digits is: %d\n", count);
    
    return 0;
}
