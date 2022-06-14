#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int main()
{
    int n; cin>>n;
    int arr[n];
    int dp[n+1];
    //dp[i] is the maximum sum subarray ending at i
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dp[i]=-INF;
    }
    dp[n]=-INF;
    dp[0] = arr[0];
    for(int i=1;i<=n;i++){
        dp[i] = max(dp[i-1],dp[i-1]+arr[i-1]);
    }
    cout<<dp[n]-1<<endl;
}
