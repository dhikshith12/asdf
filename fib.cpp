#include<bits/stdc++.h>
using namespace std;
int f[31];
int fib(int n){
  if(n<=1){
      f[n] = n;
      return n;
  }
  else if(f[n]!=0){
      return f[n];
  }
  else{
     f[n] = fib(n-1)+fib(n-2);
     return f[n];
  }
}
int main()
{
    memset(f,0,31*sizeof(int));
    int n; cin>>n;
    cout<<fib(n)<<"\n";
}
