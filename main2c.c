#include <stdio.h>

int main(void)
{
    int x, y,sum,diff,mult,qut;
    //
    scanf("%d %d", &x, &y);
    sum= x + y;
    diff= x - y;
    mult= x * y;
    qut= x / y;
    //
    printf("Sum:%d\n", x + y);
    printf("Difference:%d\n", x - y);
    printf("Product:%d\n", x * y);
    printf("Qutient:%d\n", x / y);
    return 0;
}