#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Using relational operators
    if (a == b) {
        printf("a is equal to b\n");
    } else if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is less than b\n");
    }

    // Additional comparisons
    if (a != b) {
        printf("a is not equal to b\n");
    }
    if (a <= b) {
        printf("a is less than or equal to b\n");
    }
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    }

    return 0;
}
