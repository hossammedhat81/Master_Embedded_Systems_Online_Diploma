#include<stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num = num / 10;    // Remove the last digit from the number
    }

    printf("sum = %d", sum);

    return 0;
}
