
//   ---------------------> call by  reference
#include <stdio.h>

int sum(int *, int *);
// sum should change the value of X
int sum(int *a, int *b)
{
    *a =6;        //  sum function cannot change x using a becouse  copy            
    return (*a + *b);
}

int main()
{
    int x = 1, y = 6;
    printf("the sum of 1 and 6 is :%d\n", sum(&x, &y));
    printf("the value of x is %d", x);
    return 0;
}
