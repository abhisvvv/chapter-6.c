
//   ---------------------> call by  value 
#include <stdio.h>

int sum (int,int);

int sum (int a,int b)
{
a =6;    //  sum function cannot change x using a becouse  copy    of x is provided to sum in a       
    
    return a + b;

}

int main()
{

printf("the sum of 1 and 6 is :%d\n",sum(1,6));

    return 0;
}
