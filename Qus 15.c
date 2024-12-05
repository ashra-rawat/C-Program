#include <stdio.h>

int main() {
    FILE *file;  // Declare a file pointer
    char ch;     // Variable to hold each character

    // Open the file for reading
    file = fopen("destination.txt", "r");  // Replace "filename.txt" with the actual file name

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;  // Exit the program if the file cannot be opened
    }

    // Read and display content from the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display each character
    }

    // Close the file
    fclose(file);

    return 0;  // Return 0 to indicate successful execution
}
