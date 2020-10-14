#include <stdio.h>

int main(){
    char number1 = 100;

    printf("Value of data is : %d\n",number1);
    printf("Address of the variable is : %p\n", &number1);
     
     //create a pointer variable and store the address of "data" variable
    char* pAddress = &number1; 

     //perform read operation on the pointer variable to fetch 1 byte of data from the pointer
    char value = *pAddress;
    printf("read value is : %d\n",value);

    //perform write operation on the pointer to store value 65
    *pAddress = 65;

    //print the value of the variable defined in step 1
    printf("Value of data is : %d\n",number1);
    return 0;
}