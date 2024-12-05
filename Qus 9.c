#include <stdio.h>
#include <ctype.h>

// Function to count vowels in a string
int countVowels(char str[])
{
    int count = 0, i = 0;

    // Loop through the string until the null character is found
    while (str[i] != '\0')
    {
        // Convert the character to lowercase for case-insensitive comparison
        char ch = tolower(str[i]);
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;  // Increment count if it's a vowel
        i++;
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Call the countVowels function and store the result
    int vowelCount = countVowels(str);

    // Print the number of vowels in the string
    printf("\nNumber of vowels in the string: %d\n", vowelCount);

    return 0;
}
