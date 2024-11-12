#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;          // Pointer to the first element
    int *end = arr + n - 1;    // Pointer to the last element
    int temp;

    // Swap the elements while the start pointer is less than the end pointer
    while (start < end) {
        temp = *start;         // Store the value at start
        *start = *end;         // Assign the value at end to start
        *end = temp;           // Assign the value of temp (old start) to end

        start++;               // Move the start pointer to the right
        end--;                 // Move the end pointer to the left
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to reverse the array
    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
