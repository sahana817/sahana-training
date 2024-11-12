#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if 's' is a subsequence of 't'
bool isSubsequence(char *s, char *t) {
    int i = 0, j = 0;
    
    // Traverse both strings
    while (s[i] != '\0' && t[j] != '\0') {
        // If characters match, move both pointers
        if (s[i] == t[j]) {
            i++;
        }
        // Always move pointer 'j' for string t
        j++;
    }

    // If we've moved through all characters of s, then it's a subsequence
    return s[i] == '\0';
}

int main() {
    char s[100], t[100];

    // Input strings s and t
    printf("Enter string s: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter string t: ");
    fgets(t, sizeof(t), stdin);

    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    // Check if s is a subsequence of t
    if (isSubsequence(s, t)) {
        printf("\"%s\" is a subsequence of \"%s\"\n", s, t);
    } else {
        printf("\"%s\" is NOT a subsequence of \"%s\"\n", s, t);
    }

    return 0;
}
