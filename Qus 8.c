#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int number)
{
    int sum = 0;
    // Loop to extract digits and add them to sum
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;  // Return the sum of digits
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to get the sum of digits and display the result
    int result = sum_of_digits(num);
    printf("\nThe sum of digits of %d is: %d\n", num, result);

    return 0;
}
