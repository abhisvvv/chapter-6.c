#include <stdio.h>

int main()
{
//  ---------------------> char

    int i = 6;
    int *j = &i;
    int **k = &j;
    printf(" the adress of at i : %d\n", i);

    printf(" the adress of at i : %d\n", *j);

    printf(" the adress of at i : %d\n", **(&j));

    printf(" the adress of at i : %d\n", *(&j));

    return 0;
}
