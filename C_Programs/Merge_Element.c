#include <stdio.h>
#include <stdlib.h>

// Function to compare two elements for sorting in descending order
int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    // Input arrays
    int arr1[] = {5, 9, 3, 2, 4, 7};
    int arr2[] = {5, 1, 6, 0};
    
    // Calculate sizes of both arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;

    // Merged array
    int merged[mergedSize];

    // Merge arr1 and arr2 into merged array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Remove the element at index 3
    for (int i = 3; i < mergedSize - 1; i++) {
        merged[i] = merged[i + 1];
    }
    mergedSize--; // Reduce size after removal

    // Sort the array in descending order
    qsort(merged, mergedSize, sizeof(int), compareDescending);

    // Print the resulting array
    printf("Array after removing element at index 3 and sorting in descending order:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
