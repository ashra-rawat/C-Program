#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
   arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Read values into the array
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Perform operations: Print the array
    printf("\nThe array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
