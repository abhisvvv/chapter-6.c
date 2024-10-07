#include <stdio.h>
int retuning_5(int* ptr){
    printf("the value of ptr is %d\n",ptr);
        printf("the value at ptr is %d\n",ptr);
 
        return 5;
}

int main()
{
    int i = 2;
    int* ptr =&i;

    printf("the address of i is %u\n",&i);
    printf("the value  of i is %d\n",*ptr);
    return 0;
}
