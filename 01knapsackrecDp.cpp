#include<bits/stdc++.h>
using namespace std;
#define N 100
#define M 100

int dp[N][M];

int knapsack(int wt[],int val[],int w,int n)
{
    if(w<=0||n==0)
        return 0;
    if(dp[n][w])
        return dp[n][w];
    if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),
                knapsack(wt,val,w,n-1));
    }
    else
        return dp[n][w]=knapsack(wt,val,w,n-1);
}

int main()
{
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int n = 4,w = 7;

    int mxVal = knapsack(wt,val,w,n);
    cout<<mxVal<<endl;
}
