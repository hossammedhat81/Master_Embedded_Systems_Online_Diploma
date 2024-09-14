#include <stdio.h>

int CountConsecutiveOnes(int value);

int main()
{
    int inputNumber;

    printf("Enter an integer number in decimal format: ");
    scanf("%d", &inputNumber);

    printf("\nThe entered number is: %d, and maximum number of consecutive One-digits is %d.", inputNumber, CountConsecutiveOnes(inputNumber));

    return 0;
}

int CountConsecutiveOnes(int value)
{
    int shiftedValue, currentStreak = 0, maxStreak = 0, bitPosition = 31;

    while (bitPosition >= 0)
    {
        shiftedValue = value >> bitPosition;

        if (shiftedValue & 1)
        {
            currentStreak++;
        }
        else
        {
            if (currentStreak > maxStreak)
            {
                maxStreak = currentStreak;
            }
            currentStreak = 0;
        }
        bitPosition--;
    }

    // Final check in case the longest streak ends at the last bit
    if (currentStreak > maxStreak)
    {
        maxStreak = currentStreak;
    }

    return maxStreak;
}
