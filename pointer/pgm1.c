#include <stdio.h>
#include <stdlib.h>  // For abs() function

// Function to update the values of a and b
void update(int *a, int *b) {
    // Set a to their sum
    *a = *a + *b;
    
    // Set b to their absolute difference
    *b = abs(*a - 2 * *b);  // abs(a + b - 2*b) simplifies to abs(a - b)
}

int main() {
    int x, y;

    // Read two integers
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Call the update function
    update(&x, &y);

    // Print the updated values
    printf("Updated values: a = %d, b = %d\n", x, y);

    return 0;
}
