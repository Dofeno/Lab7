#include <stdio.h>

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    // Iteration Variables
    int i, j;
    // Variable Used To Store Number Swapped During Sort
    int temp;
    // Int Array To Store Numbers Of Swaps Per Index
    int SwapCount[n];
    // Array Indexes Initialized To 0
    for (i = 0; i < n; i++)
        SwapCount[i] = 0;
    // Outer Loop For Total Number Of Sort Iterations
    for (i = 0; i < n-1; i++) {
        // Nested Loop For Traversing List
        for (j = 0; j < n-i-1; j++) {
            // Sort Condition To Swap Indexes
            if (arr[j] > arr[j+1]) {
                temp = arr[j];          //
                arr[j] = arr[j+1];      // Code For BubbleSort Swap
                arr[j+1] = temp;        //
                SwapCount[j]++; // Increments Count At Current Swap Index In SwapCount Array
            }
        }
    }
    // Display Array
    printf("\nIndex Swap Counts:\n");
    for (i = 0; i < n; i++) {
        printf("Index[%d] Swap Count: %d\n", i, SwapCount[i]);
    }
    printf("\n\nSorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("[%d]:%d\n", i, arr[i]);
    }
}

int main()
{
    // Desired Array To Sort
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    // Number Of Elements 'n'
    int n = 9;
    // Function Call
    bubbleSort(arr, n);
    return 0;
}

