#include <stdio.h>

int counter = 0;
int totalSum = 0;

int main()
{
    if (counter <= 100)
    {
        totalSum += counter;
        counter++;
        main();  // Recursively call main() to continue summing
    }

    if (counter == 101)
    {
        printf("\nSum of Numbers from 0 to 100 is: %d ", totalSum);
        counter = 102;  // Ensure the message is printed only once
    }

    return 0;
}
