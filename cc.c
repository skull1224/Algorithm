#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main(void)
{
    printf("max4(%d %d %d %d) = %d", 3, 2, 3, 4, max4(1, 2, 3, 4));
}