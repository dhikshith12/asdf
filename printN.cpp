#include<iostream>
using namespace std;

int print(int n)
{
    if(n==1)
        return 1;
    int t = print(n-1);
    cout<<t<<" ";
    return n;
}
void printR(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    printR(n-1);
}

int main()
{
    print(10);
    return 0;
}
