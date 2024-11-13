import java.util.Arrays;

public class QuickSort {

    // Main method to test the QuickSort
    public static void main(String[] args) {
        int[] arr = { 10, 7, 8, 9, 1, 5 };
        System.out.println("Original Array: " + Arrays.toString(arr));
        
        quickSort(arr, 0, arr.length - 1);
        
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    // QuickSort function
    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            // Find pivot element such that element smaller than pivot are on left
            // and elements greater than pivot are on right
            int pivotIndex = partition(arr, low, high);

            // Recursively apply quickSort to the left and right sub-arrays
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    // Partition function that rearranges the array and returns the index of the pivot
    public static int partition(int[] arr, int low, int high) {
        // Choosing the rightmost element as pivot
        int pivot = arr[high];
        int i = (low - 1); // Index of smaller element

        // Traverse through all elements, compare each with the pivot
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                // Swap if element is smaller than pivot
                i++;
                swap(arr, i, j);
            }
        }

        // Swap the pivot element with the element at i+1, so that pivot is in correct position
        swap(arr, i + 1, high);
        
        return i + 1;
    }

    // Swap function to swap two elements in the array
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
