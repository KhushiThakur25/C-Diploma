#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";
    char str1[20];
    // int n = strlen(str);
    // printf("%d", n);
    printf("Enter the string:");
    scanf("%[^\n]s", &str1);
    printf("%s", str1);
    int s = strcmp(str, str1);
    printf("%d", s);
    if (s == 0){
        printf("It is equal..");
    }
    else{
    printf("It doessn't equal..");
    }

    return 0;
}