#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p2i;

priority_queue<p2i,vector<p2i>,greater<p2i>> minh;

vector<int> kFrequent(vector<int> v,int k)
{
    map<int,int> m;
    vector<pair<int,int>> freq;
    for(int i=0;i<v.size();i++)
    {
        if(m.find(v[i])==m.end()){
            m[v[i]]=1;
        }
        else
            m[v[i]]++;
    }
    map<int,int>::iterator itr = m.begin();
    while(itr!=m.end())
    {
        freq.push_back({itr->second,itr->first});
        itr++;
    }

    for(int i=0;i<freq.size();i++)
    {
        minh.push(freq[i]);
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    vector<int> res;
    while(!minh.empty())
    {
        res.push_back(minh.top().second);
        minh.pop();
    }
    return res;
}

int main()
{
    vector<int> v = {5, 5, 6, 7, 8, 8, 8, 9, 9, 0, 0};
    vector<int> res = kFrequent(v,4);
    for(int x: res)
    {
        cout<<x<<" ";
    }
}

