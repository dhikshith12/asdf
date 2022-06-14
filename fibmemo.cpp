#include<bits/stdc++.h>
#define N 100
//memoaization
int F[N];
void initiate(){
    memset(F,-1,N*sizeof(int));
}
int fib(int n)
{
    if(n<=1) return n;
    else if(F[n]!=-1) return F[n];
    else{
        F[n] = fib(n-2)+fib(n-1);
        return F[n];
    }
}

int main()
{
    int n;
    std::cin>>n;
    initiate();
    std::cout<<fib(n)<<'\n';
}
