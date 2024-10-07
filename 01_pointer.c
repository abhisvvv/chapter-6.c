#include <stdio.h>

int main()
//  ___________________________> p is = pointer
// ----------------------------> u is unsine integer

//  --------------------> & is address location = ( & )
// ---------------->  is value  = ( * )
{
    int i = 72;
    int j = &i; //  j is a pointer pointing to i ( J IS AN INTEGER POINTER)
    int k = 67;
    printf("the address of i is %p\n", &i);
    printf(" the address of i is %p\n", j);
    printf(" the address of k is  %p\n", &k);

    printf(" the value at address of j is %d\n", *(&i));

    return 0;
}