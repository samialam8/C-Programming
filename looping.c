#include<stdio.h>
#include<stdint.h>

int main(void)
{
    int32_t start_num, end_num, even;
    printf("Enter starting and ending numbers(give space between 2 nos):");
    scanf("%d %d", &start_num, &end_num);

    if(end_num < start_num){
        printf("ending number should be > starting number\n");
        return 0;
    }

    printf("Even numbers are :\n");
    even = 0;
    while(start_num <= end_num)
    {
        if(!(start_num % 2)){
            printf("%4d\t", start_num);
            even++;
        }
        start_num++;
    }//end of while loop

    printf("\nTotal even numbers : %u\n", even);
}