#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string is a palindrome
bool isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;

    while (left < right) {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare the characters in a case-insensitive manner
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    char s[1000];

    // Input string
    printf("Enter a phrase: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character if it is present
    s[strcspn(s, "\n")] = '\0';

    // Check if the input string is a palindrome
    if (isPalindrome(s)) {
        printf("The phrase is a palindrome.\n");
    } else {
        printf("The phrase is NOT a palindrome.\n");
    }

    return 0;
}
