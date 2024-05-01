// arguments with return type:
#include <stdio.h>
int sum(int a, int b); // declaration

int sum(int a, int b)
{
    printf("%d\n", (a + b));
    return (a + b);
}

int main()
{
    int a = 5;
    int b = 6;
    int result = sum(a, b);
    printf("here is the return value of a function %d", result);
    return 0;
}