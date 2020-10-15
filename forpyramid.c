#include<stdio.h>
#include<stdint.h>

int main(void)
{
    int32_t height, i, j;
    printf("Enter height of pyramid :");
    scanf("%d", &height);

    for(i = 1; i <= height; i++)
    {
        for(j = i; j > 0; j--)
        {
        printf("%d  ", j);
        }
        printf("\n");
    }
}