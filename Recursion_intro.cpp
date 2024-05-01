#include <stdio.h>
void show(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    show(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n = 5;
    show(n);
    return 0;
}