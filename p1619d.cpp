#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

int n, m;
vector<vector<int>> p;

bool check(int x){
    vector<bool> abl(m);
    bool pair = false;
    for(int i = 0; i < n; ++i){
        int c = 0;
        for(int j = 0; j < m; ++j){
            if(p[i][j] >= x){
                abl[j] = true;
                c++;
            }
        }
        if(c > 1) pair = true;
    }
    if(!pair && m > 1) return false;
    bool ans = true;
    for(bool b: abl){
        ans = ans && b;
    }
    return ans;
}

void solve() {
    cin >> n >> m;
    p.assign(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> p[i][j];
        }
    }
    int l = 1, r = 2;
    while (check(r)) r *= 2;
    while (r - l > 1){
        int mid = (r + l) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    cout << l;
}

signed main() {
    int t = 1;
    cin >> t;
    for (; t != 0; --t) {
        solve();
        cout << "\n";
    }
    return 0;
}
