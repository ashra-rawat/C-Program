#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("filename.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        exit(1);
    }

    // Open the destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);  // Close the source file before exiting
        exit(1);
    }

    // Copy content from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Read and display content from the file
    while ((ch = fgetc(destFile)) != EOF) {
        putchar(ch);  // Display each character
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    // Display success message
    printf("File copied successfully.\n");

    return 0;
}
