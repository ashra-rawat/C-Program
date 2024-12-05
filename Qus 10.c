#include <stdio.h>

// Function to find GCD using Euclid's algorithm
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
// Function to find LCM using the formula LCM(a, b) = |a * b| / GCD(a, b)
int lcm(int a, int b)
 {
     return (a * b) / gcd(a, b);
 }

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating LCM
    int result = lcm(num1, num2);

    // Displaying the result
    printf("\nLCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
