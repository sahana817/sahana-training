#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    
    // Loop to calculate the sum of digits
    while (num > 0) {
        sum += num % 10;  // Extract the last digit and add it to the sum
        num /= 10;         // Remove the last digit
    }
    
    return sum;
}

int findLuckyDigit(int num) {
    while (num >= 10) {  // Continue until we get a single digit number
        num = sumOfDigits(num);  // Recalculate sum of digits
    }
    return num;  // Return the final single digit
}

int main() {
    int num;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find the lucky digit (single digit sum)
    int luckyDigit = findLuckyDigit(num);
    
    // Output the lucky digit
    printf("The lucky digit is: %d\n", luckyDigit);
    
    return 0;
}
