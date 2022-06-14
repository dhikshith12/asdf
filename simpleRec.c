#include<stdio.h>

int print(int n)
{
    if(n>0){
        print(n-1);
        printf("%d ",n);
    }
    return n;
}

int main()
{
    print(10);
}
