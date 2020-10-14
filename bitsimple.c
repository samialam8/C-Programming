#include <stdio.h>
#include <stdint.h>

int main (void)
{

    int32_t num1, num2;

    printf("Enter 2 numbers:");
    scanf("%d %d", &num1, &num2);

    printf("Bitwise and operator is %d\n", (num1 & num2));
    printf("Bitwise or operator is %d\n", (num1 | num2));
    printf("Bitwise xor operator is %d\n", (num1 ^ num2));
    printf("Bitwise NOT operator is %d\n", (~num1));
}