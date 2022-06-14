#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    vector<int> odds;
    vector<int> eves;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2)
            odds.push_back(i+1);
        else eves.push_back(i+1);
    }
    if(eves.size()==1)
        cout<<eves[0]<<" ";
    else
        cout<<odds[0]<<" ";

}
