#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> minh;

vector<int> kLargest(vector<int> arr,int k)
{
    vector<int> v;
    for(int i:arr)
    {
        minh.push(i);
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    while(!minh.empty()){
        v.push_back(minh.top());
        minh.pop();
    }
    return v;
}

int main()
{
    vector<int> v = {7, 10, 4, 3, 20, 15};
    int size = 6;
    vector<int> res = kLargest(v,3);
    for(int i:res)
        cout<<i<<" ";
    cout<<endl;
}
