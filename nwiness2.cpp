#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    int dp[n][n];
    memset(dp,0,n*n*sizeof(int));
    for(int l=n-1;l>=0;l--){
        for(int r=l;r<n;r++){
            int nl = (n+l-r)*p[l]+dp[l][r];
            int nr = (n+l-r)*p[r]+dp[l][r];
            if(nl>nr&&dp[l-1][r]<nl) dp[l-1][r] = nl;
            if(nr>nl&&dp[l][r-1]<nr) dp[l][r-1] = nr;
        }
    }
    int hmax = 0;
    for(int i=0;i<n;i++)
        hmax = max(dp[i][i]+n*p[i],hmax);
    cout<<hmax<<endl;
}
