#include <stdio.h>

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int temp[n];
    int j = 0;

    // Copy only unique elements to temp array
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    // Copy back to original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j;
}

// Function to rotate last four elements to the front
void rotateFourthPosition(int arr[], int n) {
    if (n <= 4) return;  // No rotation needed if array is too small

    int temp[4];

    // Store the last four elements
    for (int i = 0; i < 4; i++) {
        temp[i] = arr[n - 4 + i];
    }

    // Shift remaining elements to the right
    for (int i = n - 5; i >= 0; i--) {
        arr[i + 4] = arr[i];
    }

    // Move stored elements to the front
    for (int i = 0; i < 4; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;

    // Taking input from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting array (necessary for duplicate removal)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Remove duplicates
    n = removeDuplicates(arr, n);

    // Rotate last four elements to front
    rotateFourthPosition(arr, n);

    // Print final array
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
