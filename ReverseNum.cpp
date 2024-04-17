#include <stdio.h>
int main()
{
    int n = 2365, rev = 0; // rev = 5632
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d", rev);
    return 0;
}
