#include <stdio.h>
void decimalToBinary(int num)
{
    int binary[32];
    int i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation:");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);

    decimalToBinary(num);
    return 0;
}