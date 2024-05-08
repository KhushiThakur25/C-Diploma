#include <stdio.h>

int main()
{
    int num, bit_position, bit_value;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position ");
    scanf("%d", &bit_position);

    bit_value = (num >> bit_position) & 1;
    printf("The %d th bit of %d is : %d\n", bit_position, num, bit_value);
    return 0;
}