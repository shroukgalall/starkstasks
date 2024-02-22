#include <stdio.h>

// Function prototype
void calculateFactorial(int num, unsigned long long *result);

int main() {
    int number;
    unsigned long long factorial = 1;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate factorial
    calculateFactorial(number, &factorial);

    // Output the result
    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}

// Function to calculate factorial
void calculateFactorial(int num, unsigned long long *result) {
    // If the number is 0 or 1, factorial is 1
    if (num == 0 || num == 1) {
        *result = 1;
        return;
    }

    // Initialize result to 1
    *result = 1;

    // Calculate factorial using iteration
    for (int i = 2; i <= num; i++) {
        *result *= i;
    }
}