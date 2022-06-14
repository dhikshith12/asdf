#include<bits/stdc++.h>
using namespace std;
//pay the price if you cant make that observation
//that +1's should come before *2's
/*
 * because at ith operation we have two option's
 * either to choose +1 or *2, if we choose +1 immideately after
 * *2 we will get a odd number and we won't get a a mod target ==0
 * since target is 2<<14 even number we also can't have two +1's consecutevely
 * because a -> 2*a -> 2*a+1 -> 2*a+2 needs 4 steps but
 *         a -> a+1 ->2*(a+1) gives same result in 3 steps hence optimal.
 *
 */
const int target = 1<<15;
void solve()
{
    int a; cin>>a;
    int cntAdd = 15, cntMul = 15;
    int ans = 15;
    for(int i=cntAdd;i>=0;i--)
    {
        for(int j=cntMul;j>=0;j--)
        {
            if((a+i)*(1<<j)%target==0)
                ans = min(ans,i+j);
        }
    }
    cout<<ans<<" ";
}

int main()
{
    int n; cin>>n;
    while(n--)
    {
        solve();
        cout<<"\n";
    }
}
