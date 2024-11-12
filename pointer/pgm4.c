#include <stdio.h>

int countOccurrences(int *arr, int n, int target) {
    int count = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        if (*ptr == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int count = countOccurrences(arr, n, target);

    printf("The element %d appears %d times in the array.\n", target, count);

    return 0;
}
