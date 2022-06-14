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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int r,a,b; cin >> r>>a>>b;
        double ans = M_PI*r*r;
        long long rd = r;
        int i=0;

        while(rd)
        {
            i++;
            if(i%2)
            {
                rd=rd*a;
            }
            else
            {
                rd=rd/b;
            }
            ans=ans+M_PI*rd*rd;
        }
        cout << fixed;
        cout << setprecision(8);
        cout << "Case #" << case_num << ": " << ans << endl;
    }
    return 0;
}
