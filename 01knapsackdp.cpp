#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p[n],w[n];
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>w[i];
    int dp[n+1][m+1];
    int ans[n+1];
    memset(ans,0,(n+1)*sizeof(int));
    memset(dp[0],0,(m+1)*sizeof(int));
    for(int i=1;i<=n;i++) dp[i][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int l = dp[i-1][j];
            int r = (j>=w[i-1])?dp[i-1][j-w[i-1]]+p[i-1]:0;
            dp[i][j] = max(l,r);
        }
    }
    int max = dp[n][m];
    for(int i=n;i>=1;i--){
       ans[i] = (m>=w[i-1])&&(max>=p[i-1])&&
           (dp[i-1][m]<dp[i-1][m-w[i-1]]+p[i-1]);
       if(ans[i]) max-=p[i-1];
    }
    cout<<"=======D-P=======\n";
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
    cout<<endl;
}
