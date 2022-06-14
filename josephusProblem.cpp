#include<bits/stdc++.h>
using namespace std;


void safePlace(vector<int>v,int k,int index,int& ans)
{
    if(v.size()==1)
    {
        ans = v[0];
        return;
    }
    index = (index+k)%v.size();
    v.erase(v.begin()+index);
    safePlace(v,k,index,ans);
}

int main()
{
    int n = 100, k = 2;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        v[i] = i+1;
    int ans = -1;
    safePlace(v,k-1,0,ans);
    cout<<ans<<endl;
    return 0;
}
