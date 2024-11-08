#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input elements in array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array with -1
    }

    // Calculate frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Set freq[j] to 0 to avoid counting it again
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Display frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}