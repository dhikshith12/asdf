#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    pair<int,int> pos[4] =
    {
         {1, 1},
         {1, m},
         {n, 1},
         {n, m}
    };
    int cf1=-1,cf2=-1;
    unsigned int maxd = 0;
    for(int c1=0;c1<4;c1++)
    {
        for(int c2=c1+1;c2<4;c2++)
        {
            unsigned int dist1 = abs(i-pos[c1].first)+abs(j-pos[c1].second);
            unsigned int dist3 = abs(pos[c1].first-pos[c2].first)+abs(pos[c1].second-pos[c2].second);
            unsigned int dist2 = abs(i-pos[c2].first)+abs(j-pos[c2].second);
            if(maxd<dist1+dist2+dist3){
                cf1 = c1;
                cf2 = c2;
                maxd = dist1+dist2+dist3;
            }
        }
    }
    if(cf1!=-1&&cf2!=-1)
        cout<<pos[cf1].first<<" "<<pos[cf1].second<<" "<<pos[cf2].first<<" "<<pos[cf2].second<<endl;
    else
        cout<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
