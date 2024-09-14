#include <stdio.h>

unsigned int calculateSetBits(unsigned int number);

int main()
{
    int inputNumber;

    printf("Enter any number: ");
    scanf("%d", &inputNumber);

    printf("%d", calculateSetBits(inputNumber));
    return 0;
}

unsigned int calculateSetBits(unsigned int number)
{
    unsigned int bitCount = 0;
    
    while (number != 0)
    {
        bitCount += number & 1;  // Add the least significant bit to bitCount
        number >>= 1;            // Shift bits to the right to process the next bit
    }
    
    return bitCount;
}
