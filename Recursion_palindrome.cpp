#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }

    if (str[start] != str[end])
    {
        return 0;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[50];

    printf("Enter the string:");
    scanf("%s", str);

    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
    {
        printf("The string is palindrome..");
    }
    else
    {
        printf("The string is not a palindrome..");
    }
    return 0;
}