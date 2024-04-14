#include <stdio.h>

int main()
{
    int arr[] = {100, 92, 83, 144, 115};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum value is %d ", max);
    return 0;
}