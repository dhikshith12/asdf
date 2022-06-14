#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> minh;


int minCostConnect(vector<int> v)
{
    int tSum=0;
    for(int i=0;i<v.size();i++)
    {
        minh.push(v[i]);
    }

    while(minh.size()>1)
    {
        int m1 = minh.top();
        minh.pop();
        int m2 = minh.top();
        minh.pop();
        tSum+=(m1+m2);
        minh.push(m1+m2);
    }
    return tSum;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int ans = minCostConnect(v);
    cout<<ans<<endl;
}
