#include<iostream>
#include<vector>
using namespace std;

void insertARR(vector<int>& v,int temp)
{
    if(v.size()==0||v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size()-1];
    v.pop_back();
    insertARR(v,temp);
    v.push_back(val);
    return;
}

void sort(vector<int>& v)
{
    if(v.size()==1)
        return;
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insertARR(v,temp);
    return;
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    for(int& x: v)
        cout<<x<<" ";
    cout<<endl;
    sort(v);
    for(int& x: v)
        cout<<x<<" ";
    return 0;
}
