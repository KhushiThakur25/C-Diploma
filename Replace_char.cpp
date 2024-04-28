#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    char find, replace;
    printf("Enter the character to replace:");
    scanf(" %c", &find);
    printf("Enter the character to replace with:");
    scanf(" %c", &replace);

    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == find)
        {
            str[i] = replace;
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}