#include <stdio.h>
#include <math.h> // For power calculation, but we can also manually calculate powers

int main() {
    int n, k, i = 0; // Initialize base, exponent, and loop counter
    printf("Enter the base (n): ");
    scanf("%d", &n); // Input the base number
    printf("Enter the exponent (k): ");
    scanf("%d", &k); // Input the maximum exponent

    // Condition: While i is less than or equal to k
    while (i <= k) {
        // Calculate n^i using pow function (alternative: use a loop for manual calculation)
        printf("%d^%d = %.0f\n", n, i, pow(n, i));
        i++; // Increment the exponent
    }

    return 0;
}
