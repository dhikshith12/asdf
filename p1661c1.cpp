#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    /*
    for(auto&it: arr)
        scanf("%d", &it);
    */
    int mx = *max_element(arr.begin(), arr.end());
    long long ans=1e18;
    for(int req : {mx,mx+1})
    {
        long long start = 0;
        long long end = 1e18;
        ans=min(ans,end);
        while(start<=end)
        {
            long long mid = start + (end-start)/2;
            long long cnt1 = mid/2;
            long long cnt2 = mid-cnt1;
            for(int i=0;i<n;i++)
            {
                if((req-arr[i])%2==0)
                    cnt1-=(req-arr[i])/2;
                else
                {
                    cnt2--;
                    cnt1-=(req-arr[i])/2;
                }
            }
            if(cnt1>=0&&cnt2>=0)
            {
                end = mid-1;
                ans = min(mid,ans);
            }
            else if (cnt1<0&&cnt2>0)
            {
                if(cnt2/2+cnt1>=0){
                    end = mid-1;
                    ans = min(mid,ans);
                }
                else
                    start = mid+1;
            }
            else
                start = mid+1;
        }
    }
    cout<<ans<<"\n";
    //printf("%lld\n",ans);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
