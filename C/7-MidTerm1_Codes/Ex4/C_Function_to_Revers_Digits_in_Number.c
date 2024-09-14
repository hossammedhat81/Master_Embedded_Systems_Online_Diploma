#include <stdio.h>

int main() {
    int originalNum, reversedNum = 0;

    printf("Enter a number to reverse\n");
    scanf("%d", &originalNum);

    while (originalNum != 0) {
        int lastDigit = originalNum % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + lastDigit;  // Append last digit to reversedNum
        originalNum = originalNum / 10;  // Remove the last digit from originalNum
    }

    printf("Reverse of the number = %d\n", reversedNum);

    return 0;
}
