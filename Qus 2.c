#include <stdio.h>
#include <limits.h>  0

int main() {
    int n, i;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not enough elements to find the second largest.\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Check if secondLargest was updated
    if (secondLargest == INT_MIN) {
        printf("No second largest element (all elements are the same).\n");
    } else {
        printf("\n The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
