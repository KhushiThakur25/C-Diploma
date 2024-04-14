#include <stdio.h>

int main()
{
    int arr[5];
    int arr1[] = {5, 6, 32, 85, 9, 563, 45};
    int n;
    n = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", n);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element of an array\n");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}