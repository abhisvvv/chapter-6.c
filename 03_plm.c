#include <stdio.h>

void change_to_ten_time (int *);

void change_to_ten_time (int *a)
{
    *a = *a * 10;
}
int main()
{
    int x =45;
    printf(" the value of x is %d\n", x);
    change_to_thirty_times(&x);
    printf("the value of x is %d\n ", x);

    return 0;
}
