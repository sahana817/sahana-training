#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to check if a number is prime
int isPrime(int num) {
    // Handle base cases
    if (num <= 1) {
        return 0;  // Not prime
    }
    if (num == 2) {
        return 1;  // 2 is prime
    }
    
    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    
    return 1;  // Prime
}

int main() {
    int num;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check if the number is prime and print the result
    if (isPrime(num)) {
        printf("Yes\n");  // The number is prime
    } else {
        printf("No\n");   // The number is not prime
    }
    
    return 0;
}