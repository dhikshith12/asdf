#include<bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>> maxh;

vector<int> kClosestElements(vector<int>& v,int k,int x)
{
    vector<int> res;
    for(int i=0;i<v.size();i++)
    {
        maxh.push({abs(v[i]-x),v[i]});
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    while(!maxh.empty())
    {
        res.push_back(maxh.top().second);
        maxh.pop();
    }
    return res;
}

int main()
{
    vector<int> v = {5, 6, 7, 8, 9};
    vector<int> res = kClosestElements(v,3,7);
    for(int x: res)
        cout<<x<<" ";
    cout<<endl;
}
