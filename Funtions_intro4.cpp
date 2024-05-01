// no arguments with return type:
#include <stdio.h>
int sum(); // declaration

int sum()
{
    int a = 5;
    int b = 6;
    return (a + b);
}
int main()
{

    int result = sum();
    printf("here is the return value of a function %d", result);
    return 0;
}