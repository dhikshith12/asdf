#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> s(n),p(n);
        for(ll i = 0;i<n;i++)
            cin>>s[i];

        ll l = 0, r = 0;
        bool ans = true;
        for(ll i =0;i<n;++i)
            p[i] = i+1;
        while(r < n)
        {
            while(r<n-1 && s[r] == s[r+1])
                ++r;
            if(l==r)
                ans = false;
            else
            {
                rotate(p.begin()+l, p.begin()+r,p.begin()+ r + 1);
            }
            l = r+1;
            ++r;
        }
        if(ans){
            for (auto&x : p)
                cout<<x<<" ";
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
}