#include<bits/stdc++.h>
using namespace std;
priority_queue<int> maxh;

int main()
{
    int k; cin>>k;
    for(int i=0;i<12;i++)
    {
        int t;
        cin>>t;
        maxh.push(t);
    }
    int tSum = 0;
    int i = 0;
    while(!maxh.empty()&&tSum<k)
    {
        tSum+=maxh.top();
        maxh.pop();
        i++;
    }
    if(tSum>=k||!maxh.empty())
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<"-1\n";
    }
}
