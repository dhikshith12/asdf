#include<stdio.h>

int x = 0;
int f1()
{
    x = 5;
    printf("in f1 x: %d\n",x);
    return x;
}
int f2()
{
    x = 10;
    printf("in f2 x: %d\n",x);
    return x;
}
int f3()
{
    x = 3;
    printf("in f3 x: %d\n",x);
    return x;
}
int main()
{
    int p = f2()*f3()/f1();
    printf("p : %d\n",p);
    return 0;
}
