#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int h[n][3];
    for(int i=0;i<n;i++) for(int j=0;j<3;j++) cin>>h[i][j];
    int dp[n][3];
    memset(dp,0,n*3*sizeof(int));
    dp[0][0] = h[0][0]; dp[0][1] = h[0][1]; dp[0][2] = h[0][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(i>0&&k!=j)
                    dp[i][j] = max(dp[i][j],dp[i-1][k]+h[i][j]);
            }
        }
    }
    int hmax = max(dp[n-1][0],dp[n-1][1]);
    hmax = max(hmax, dp[n-1][2]);
    cout<<hmax<<endl;
}

