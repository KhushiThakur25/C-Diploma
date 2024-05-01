// no arguments with no return type:
#include <stdio.h>
void sum(); // declaration

void sum()
{
    int a = 5;
    int b = 6;
    printf("%d\n", (a + b));
    
}
int main()
{
    
    sum();
    return 0;
}