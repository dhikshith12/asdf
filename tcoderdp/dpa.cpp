#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[n],arr[n];
    dp[0] = 0;
    for(int i=1;i<n;i++) dp[i] = INT_MAX;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
       for(int j=1;j<=2;j++)
          if((i+j)<n)
            dp[i+j]=min(dp[i+j],dp[i]+abs(arr[i]-arr[i+j]));

    cout<<dp[n-1]<<endl;
}
