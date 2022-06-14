#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
using namespace std;
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))

using namespace std;

int recdp(int l,int r,int *a,int N)
{
    int count = 0;
    if(l==r)
    {

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int N,D; cin>>N>>D;
        int a[N];
        for(int i=0;i<N;i++) cin>>a[i];


        int ans = 0;
        cout << "Case #" << case_num << ": " << ans << endl;
    }
    return 0;
}
