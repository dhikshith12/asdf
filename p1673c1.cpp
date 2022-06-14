#include<bits/stdc++.h>
using namespace std;
#define M 40001
#define N 498
int pal[N+1];
unsigned long long dp[M+1][N+1];

const unsigned long long MOD = 1000000007;

int main()
{
    int count = 1;
    for(int d1=1;d1<10;d1++)
    {
        pal[count++] = d1;
    }
    for(int d1=1;d1<10;d1++)
    {
        pal[count++] = d1+10*d1;
    }
    for(int d1=1;d1<10;d1++)
    {
        for(int d2=0;d2<10;d2++)
        {
            pal[count++] = d1+d2*10+d1*100;
        }
    }
    for(int d1=1;d1<10;d1++)
    {
        for(int d2=0;d2<10;d2++)
        {
            pal[count++] = d1+d2*10+d2*100+d1*1000;
        }
    }
    for(int d1 = 1;d1<4;d1++)
    {
        for(int d2=0;d2<10;d2++)
        {
            for(int d3=0;d3<10;d3++)
            {
                pal[count++] = d1+10*d2+100*d3+1000*d2+10000*d1;
            }
        }
    }

    for(int i=0;i<M;i++)    dp[i][1] = 1;

    for(int i=0;i<=M;i++)
    {
        for(int j=2;j<=N;j++)
        {
            unsigned long long add = 0;
            if(i>=pal[j])   add = dp[i-pal[j]][j];
            dp[i][j] = (dp[i][j-1]+add)%MOD; 
        }
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<dp[n][N]<<"\n";
    }

}