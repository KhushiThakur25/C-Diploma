// arguments with no return type:
#include <stdio.h>
void sum(int a, int b); // declaration

void sum(int a, int b)
{

    printf("%d\n", (a + b));
}
int main()
{
    int a = 5;
    int b = 6;
    sum(a, b);
    return 0;
}