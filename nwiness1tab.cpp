#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    /*
      selling decision on first day,
      we can either sell left most or right most
      _______________
      |             |
      1 2 3 4 5 6 7 8 9
      _ _ _ _ _ _ _ _ _
        |             |
        ---------------
      */
    int dp[n][n]; /* dp[l][r] is the most we can earn
    from selling interval [l,r] we start with [1,N] at year 1,
    so when we are at [l,r] we are at year N-(l-1)-(N-r)*/
    memset(dp,0,n*n*sizeof(int));

    for(int i=0;i<n;i++) dp[i][i] = n*arr[i];
    for(int l=n-1;l>=0;l--){
        for(int r=l;r<n;r++){
            int nl = l<n-1?dp[l+1][r]+(n+l-r)*arr[l]:0;
            int nr = r>0?dp[l][r-1]+(n+l-r)*arr[r]:0;
            dp[l][r] = max(nl,nr);
        }
    }
    cout<<dp[0][n-1]<<endl;
}
