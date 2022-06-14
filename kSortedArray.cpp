#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> minh;

void sortKsorted(vector<int>& v,int k)
{
    int idx = -1;
    for(int i=0;i<v.size();i++)
    {
        minh.push(v[i]);
        if(minh.size()>k)
        {
            idx++;
            v[idx] = minh.top();
            minh.pop();
        }
    }
    while(!minh.empty())
    {
        idx++;
        v[idx] = minh.top();
        minh.pop();
    }
}

int main()
{
    vector<int> v = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    sortKsorted(v,k);
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
}
