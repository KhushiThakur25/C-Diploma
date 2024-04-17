#include <stdio.h>
#include <math.h>
int main()
{
    int n = 142, c = 0, sum = 0;
    int org = n;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    n = org;
    while (n > 0)
    {
        sum += pow(n % 10, c);
        n /= 10;
    }
    if (org == sum)
    {
        printf("Number is Armstrong..");
    }
    else
    {
        printf("Number is not Armstrong..");
    }
    return 0;
}