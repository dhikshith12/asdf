#include<bits/stdc++.h>
using namespace std;

priority_queue<int> maxh;

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int sum = 0;
    for(int i=0;i<n;i++){
        int t; scanf("%d",&t);
        maxh.push(t);
        if(maxh.size()>m)
            maxh.pop();
    }
    while(!maxh.empty())
    {
        if(maxh.top()<0)
            sum+=maxh.top();
        maxh.pop();
    }
    printf("%d\n",-sum);

    return 0;
}
