#include <stdio.h>
#include <math.h>

int main()
{
    double num, root; // Declare two double variables to store the number and its square root

    printf("Enter any number to find square root: ");
    scanf("%lf", &num); // Read a double value from the user

    root = sqrt(num); // Calculate the square root of the input number using the sqrt() function

    printf("Square root of %.0lf = %.3lf", num, root); // Print the original number and its square root

    return 0; // Indicate that the program ended successfully
}
