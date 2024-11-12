#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle the case of negative numbers
    if (num < 0) {
        num = -num;  // Make the number positive
    }
    
    // Special case for 0, which has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Loop to count digits
        while (num != 0) {
            num /= 10;  // Remove the last digit
            count++;    // Increment the count
        }
    }
    
    // Output the result
    printf("The number of digits is: %d\n", count);
    
    return 0;
}
