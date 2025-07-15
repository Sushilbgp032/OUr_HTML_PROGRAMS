#include <stdio.h>

void rotateArray(int array[], int size, int positions) {
    // Create a temporary array to store rotated elements
    int temp[size];

    // Normalize the number of positions in case it's greater than the array size
    positions = positions % size;

    // Copy rotated elements into the temporary array
    for (int i = 0; i < size; i++) {
        temp[(i + positions) % size] = array[i];
    }

    // Copy the temporary array back into the original array
    for (int i = 0; i < size; i++) {
        array[i] = temp[i];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // Define the array and the hard-coded rotation position
    int array[] = {35, 26, 17, 49, 51, 67, 39};
    int size = sizeof(array) / sizeof(array[0]);
    int rotationPosition = 3; // Number of positions to rotate to the right

    // Print the original array
    printf("Original Array:\n");
    printArray(array, size);

    // Perform the rotation
    rotateArray(array, size, rotationPosition);

    // Print the rotated array
    printf("\nRotated Array:\n");
    printArray(array, size);

    return 0;
}
