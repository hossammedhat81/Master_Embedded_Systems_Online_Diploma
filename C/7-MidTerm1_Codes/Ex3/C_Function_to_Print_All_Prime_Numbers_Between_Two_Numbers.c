#include <stdio.h>

int main() {
    int lower, upper, num, divisor, isPrime;

    printf("Enter two numbers: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (num = lower + 1; num < upper; ++num) {
        isPrime = 1;  // Assume the current number is prime

        for (divisor = 2; divisor <= num / 2; ++divisor) {
            if (num % divisor == 0) {
                isPrime = 0;  // Not prime if divisible by any divisor
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);  // Print the number if it is prime
        }
    }

    return 0;
}
