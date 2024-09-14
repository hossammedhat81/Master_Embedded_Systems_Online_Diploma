#include <stdio.h>

// Function to check if a character is a digit
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

// Function to convert ASCII array to unsigned integer
unsigned int asciiToUnsignedInt(const char *asciiArray) {
    unsigned int result = 0;
    while (*asciiArray) {
        // Check if the character is a digit
        if (!is_digit(*asciiArray)) {
            printf("Invalid input: contains non-digit characters.\n");
            return 0;  // Return 0 to indicate an error
        }

        // Convert ASCII character to digit and add to result
        result = result * 10 + (*asciiArray - '0');
        asciiArray++;
    }
    return result;
}

int main() {
    // Example ASCII array representing a decimal number
    char asciiArray[] = "12345516";
    int i;

    printf("Array that has elements as ASCII :\n");
    for (i = 0; i<9; i++)
    {
        printf("Element %d : %c\n",i+1,asciiArray[i]);
    }
    

    // Convert to unsigned integer
    unsigned int number = asciiToUnsignedInt(asciiArray);

    // Check if conversion was successful
    if (number != 0) {
        // Print the result
        printf("The converted number is: %u\n", number);
    } else {
        printf("Conversion failed due to invalid input.\n");
    }

    return 0;
}
