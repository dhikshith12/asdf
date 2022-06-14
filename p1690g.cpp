#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast_io;
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            if(i==0||a[i]<a[*s.rbegin()])
            {
                s.insert(i);
            }
        }

        for(int i=0;i<m;i++)
        {
            int k, d; 
            cin>>k>>d;
            k--;
            a[k] -= d;
            auto it = s.upper_bound(k);
            if(it!=s.begin())
            {
                it = prev(it);
                if(*it == k || a[*it]>a[k])
                {
                    s.insert(k);
                }
            }else
            {
                s.insert(k);
            }
            while (1)
            {
                it = s.upper_bound(k);
                if(it != s.end()&&a[*it]>=a[k]){
                    s.erase(it);
                }else
                {
                    break;
                }
                
            }
            
            cout<<(int)s.size()<<" ";
        }
        cout<<endl;
    }
}