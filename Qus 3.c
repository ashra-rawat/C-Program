#include <stdio.h>

int main() {
    int n, i, target, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target value
    printf("\nEnter the value to search: ");
    scanf("%d", &target);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("\nElement found at index %d\n", i);
            found = 1; // Mark as found
            break;
        }
    }

    if (!found) {
        printf("\nElement not found in the array.\n");
    }

    return 0;
}
