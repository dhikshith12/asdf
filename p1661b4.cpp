#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
#define MAX 32768

int d[MAX];
int main()
{
    memset(d,-1,MAX*sizeof(int));
    d[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        int c1 = (x-1+MAX)%MAX;
        if(d[c1]==-1)
        {
            d[c1] = d[x]+1;
            q.push(c1);
        }
        if(x%2==0)
        {
            int c2 = x/2;
            if(d[c2]==-1)
            {
                d[c2] = d[x]+1;
                q.push(c2);
            }
            c2+=MAX/2;
            if(d[c2]==-1)
            {
                d[c2] = d[x]+1;
                q.push(c2);
            }
        }
    }
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        cout<<d[t]<<" ";
    }
}
