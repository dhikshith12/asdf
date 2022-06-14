#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    long long l = ceil((double)n/a);
    long long h = ceil((double)m/a);
    cout<<l*h<<endl;
}
