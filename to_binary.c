#include <stdio.h>

int to_binary(int x, int y)
{
    int m;

    m = x % y;
    if ((x / y) != 0)
        to_binary(x/y, y);
        
    printf("%d", m);
    return 0;
}

int main()
{
    int x=63, y=2;
    to_binary(x, y);

    printf("\n");
    return 0;
}