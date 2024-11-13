#include <stdio.h>

int main() {
    int num, count = 0;

    // Read input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case for negative numbers by converting to positive
    if (num < 0) {
        num = -num; // Make the number positive
    }

    // Special case for the number 0, which has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Count digits by repeatedly dividing the number by 10
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    // Output the number of digits
    printf("Number of digits: %d\n", count);

    return 0;
}
