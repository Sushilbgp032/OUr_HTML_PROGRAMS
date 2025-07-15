#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n); // Add the nth power of each digit
        originalNum /= 10;
    }

    // Output the result
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
