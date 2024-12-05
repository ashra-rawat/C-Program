#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    // Take user input for the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to read input, allowing spaces

    ptr = str;  // Pointer points to the first character of the string

    // Traverse the string using the pointer
    while (*ptr != '\0') {
        length++;        // Increment length for each character
        ptr++;           // Move the pointer to the next character
    }

    printf("\nLength of the string is: %d\n", length);

    return 0;
}
