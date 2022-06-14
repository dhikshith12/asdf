#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prdbl(x) cout<< fixed << setprecision(10) << x
#define goog(tno) cout<< "Case #" << tno << ": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin>>x
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;



int main()
{
    read(t);
    while(t--)
    {
        int n; cin>>n;
        int a = (n/3)+1;
        int b = a-2;
        int c = n-a-b;
        if(a==c)
        {
            a++;
            c--;
        }
        if(b==c)
        {
            b++;
            c--;
        }
        vector<int> ar(3);
        ar[0] = a; ar[1] = b; ar[2] = c;
        sort(all(ar));
        swap(ar[0],ar[1]);
        swap(ar[1],ar[2]);
        for(int i=0;i<3;i++)
            cout<<ar[i]<<" ";
        cout<<endl;
    }
}