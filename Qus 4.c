#include <stdio.h>

void mergeArrays(int arr1[5], int size1, int arr2[5], int size2, int merged[])
{
    int i = 0, j = 0, k = 0;
    // Traverse both arrays
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1, if any
    while (i < size1)
        merged[k++] = arr1[i++];

    // Copy remaining elements of arr2, if any
    while (j < size2)
        merged[k++] = arr2[j++];
}

int main()
{
    //declaration of two sorted arrays (we can also take input from user but not today)
    int arr1[5] = {1, 3, 5, 7,10};
    int arr2[5] = {2, 4, 6, 8,12};
    //finding the size of the arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    //declatation of resultant array
    int merged[size1 + size2];
    //printing arrays before mergre
    printf("\nfirst Array: ");
    for(int i = 0; i<size1; i++)
        printf("%d ", arr1[i]);

    //printing second array
    printf("\nsecond Array: ");
    for(int i = 0; i<size1; i++)
        printf("%d ", arr2[i]);

    printf("\n\n");

    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Print the merged array
    printf("\nMerged Array: ");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}
