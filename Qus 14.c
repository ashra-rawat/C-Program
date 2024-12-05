#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open file for writing
    filePointer = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;  // Exit with error code
    }

    // Write data to the file
    fprintf(filePointer, "Hello, this is a test data written to the file.\n");
    fputs("This is another line of text.\n", filePointer);

    // Close the file
    fclose(filePointer);

    printf("Data successfully written to file.\n");

    return 0;
}
