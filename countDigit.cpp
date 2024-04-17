#include <stdio.h>
int main()
{
    int n = 659823652;
    int count = 0;
    while (n > 0)
    {
        count++;//1,2,3,4,5,6,7,8,9
        n /= 10;//65982365,6598236,659823,65982,6598,659,65,6,0
    }
    printf("%d\n", count);
    return 0;
}