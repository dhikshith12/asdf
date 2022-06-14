#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b == 0)  return a;
    else        return gcd(b, a%b);
}


int gcd(int a,int b, int& x,int& y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}
/*
    The recursive function above returns gcd and the values of coefficients to x
    and y(which are passed by reference to the function).
    This implementation of extended Euclidean algorithm produces correct results for negative integers as well.
*/
