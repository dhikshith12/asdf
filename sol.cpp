#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(m.find(arr[i])==m.end())
            m[arr[i]]=1;
        else m[arr[i]]++;
    }
    int p = 0;
    for(int i=0;i<n;i++)
    {
        int l = m[k-arr[i]];
        if(m.find(k-arr[i])!=m.end()&&l>0){
            if(2*arr[i] == k) p+=(l-1);
            else p+=l;
        }
    }
    cout<<p/2<<endl;
}
