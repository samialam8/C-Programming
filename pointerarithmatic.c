#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
    char* pAddress = (char*) &g_data;

    printf("Value of pAddress %p\n", pAddress);
    printf("Value at pAddress %p is %x\n", pAddress, *pAddress);

    pAddress = pAddress + 1;

     printf("Value of pAddress %p\n", pAddress);
    printf("Value at pAddress %p is %x\n", pAddress, *pAddress);
}