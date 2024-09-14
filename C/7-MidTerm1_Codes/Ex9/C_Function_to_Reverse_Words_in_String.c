#include <stdio.h>
#include <string.h>

int main()
{
    char input[100], reversedWords[100];
    int length, pos, start, end, wordBegin, wordFinish;

    printf("Enter any string: ");
    fgets(input, sizeof(input), stdin);  // Use fgets for safer input

    length = strlen(input);
    
    // Remove newline character from fgets input
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    pos = 0;
    wordBegin = length - 1;
    wordFinish = length - 1;

    while (wordBegin >= 0)
    {
        if (input[wordBegin] == ' ')
        {
            int k = wordBegin + 1;
            while (k <= wordFinish)
            {
                reversedWords[pos] = input[k];
                k++;
                pos++;
            }
            reversedWords[pos++] = ' ';
            wordFinish = wordBegin - 1;
        }
        wordBegin--;
    }

    // Add the first word
    for (int j = 0; j <= wordFinish; j++)
    {
        reversedWords[pos] = input[j];
        pos++;
    }

    reversedWords[pos] = '\0';

    printf("Original string \n%s\n\n", input);
    printf("Reverse ordered words \n%s", reversedWords);

    return 0;
}
