#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> out(n,1);
    for(int i=1;i<n;i++)
        for(int j=i-1;j>=0;j--)
            if(v[j]<=v[i])
                out[i]++;
            else
                break;

    for(int x: out)
        cout<<x<<" ";
    cout<<endl;
}
