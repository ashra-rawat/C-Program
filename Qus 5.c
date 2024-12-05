#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left, right, isPalindrome = 1;

    //Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    //Initialize pointers
    left = 0;
    right = strlen(str) - 1;

    //Check characters
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    // Result
    if (isPalindrome) {
        printf("\nThe string \"%s\" is a palindrome.\n", str);
    } else {
        printf("\nThe string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
