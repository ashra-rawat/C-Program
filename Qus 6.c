#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int freq[256] = {0};  // Array to store the frequency of each character

    //Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to read the input string

    //Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;  // Increment the frequency of the character
    }

    //Display the frequency of each character
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}
