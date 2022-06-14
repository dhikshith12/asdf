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


int n, m, s, p[200100], v[200100];
vector<int> e[200100], r[2];

void initcode()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #else
        #define debug(x)
    #endif
}

void record(int k,int i)
{
    while(i>=0){
        r[k].push_back(i);
        i = p[i]; 
    }
}
void dfs(int i, int branch, int parent)
{
    if(v[i]==branch||v[i]>n)
        return;
    if(v[i]>=0)
    {
        record(0,i);
        r[1].push_back(i);
        record(1,parent);
        return;
    }
    p[i] = parent;
    v[i] = branch;
    for(int j: e[i])
    {
        dfs(j,branch,i);
        if(r[0].size())
            return;
    }
}
 
int main()
{
    initcode();
    cin>>n>>m>>s;
    s--;
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        x--; y--;
        e[x].push_back(y);
    }
    for(int i=0;i<n;i++)
        v[i] = -1;
    v[s] = n+1;
    p[s] = -1;
    for(int i: e[s])
    {
        dfs(i,i,s);
        if(r[0].size())
            break;
    }
    cout<<(r[0].size()? "Possible\n": "Impossible\n");
    if(r[0].size()){
        for(int i=0;i<2;i++){
            reverse(r[i].begin(), r[i].end());
            cout<< r[i].size() << "\n";
            for(int j: r[i])
                cout<< j + 1 << " ";
            cout<< "\n";
        }
    }
}