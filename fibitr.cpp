#include<iostream>
#define N 100
int F[N];
int fib(int n)
{
    if(n<=1) return n;
    F[0]=0;F[1]=1;
    for(int i=2;i<=n;i++)
    {
        F[i] = F[i-2]+F[i-1];
    }
    return F[n];
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<fib(n);
}
