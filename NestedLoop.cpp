#include <stdio.h>
int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("%d %d\n", i, j);
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {

    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    int row = 5;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < row - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}