#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long for large results

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Display the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
