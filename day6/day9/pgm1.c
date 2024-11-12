public class BubbleSort {

    // Method to perform bubble sort
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        
        // Traverse through all elements of the array
        for (int i = 0; i < n - 1; i++) {
            // Flag to optimize if the array is already sorted
            boolean swapped = false;
            
            // Last i elements are already sorted, so we don't need to check them
            for (int j = 0; j < n - 1 - i; j++) {
                // Swap if the element found is greater than the next element
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    
                    // Set swapped flag to true
                    swapped = true;
                }
            }
            
            // If no two elements were swapped, then the array is already sorted
            if (!swapped) {
                break;
            }
        }
    }

    // Method to print the array
    public static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};

        System.out.println("Unsorted array:");
        printArray(arr);

        bubbleSort(arr);

        System.out.println("Sorted array:");
        printArray(arr);
    }
}
