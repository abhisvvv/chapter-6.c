#include <stdio.h>

int main()
//  ___________________________> p is = pointer
// ----------------------------> u is unsine integer

//  --------------------> & is address location = ( & )
// ---------------->  is value  = ( *  )
{
    char *i = 'A';
    char *j = &i; //  j is a pointer pointing to i  ( J  IS  an CHARACTER poiter )

    float k = 5.45;
    float *k1 = &k;
    printf("the address of i is %p\n", 'A');

    printf(" the address of J is %p\n", j);

    printf(" the address of k is  %p\n", &k);

    printf(" the address of k1 is  %f\n", *(&k));

    printf(" the value at address of j is %d\n", *(&i));

    return 0;
}