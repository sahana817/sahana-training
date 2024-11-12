#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int num, firstMin = INT_MAX, secondMin = INT_MAX;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling the case for negative numbers (we ignore the sign)
    num = (num < 0) ? -num : num;

    // Check if the number has at least two digits
    if (num < 10) {
        printf("Number must have at least two digits.\n");
        return 0;
    }

    // Loop to find the first and second smallest digits
    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        num /= 10;              // Remove the last digit
        
        // Update first and second smallest digits
        if (digit < firstMin) {
            secondMin = firstMin;
            firstMin = digit;
        } else if (digit < secondMin && digit > firstMin) {
            secondMin = digit;
        }
    }

    // Check if there was no valid second smallest digit
    if (secondMin == INT_MAX) {
        printf("There is no second smallest digit.\n");
    } else {
        printf("The second smallest digit is: %d\n", secondMin);
    }

    return 0;
}
