#include<stdio.h>

int main()
{
    int a = -8;         //  11111111 11111111 11111111 11111000
    unsigned int b = 8; //  00000000 00000000 00000000 00001000
    printf("%d\n", __builtin_popcount(a));
    printf("%2d", a+b);
    return 0;
}
