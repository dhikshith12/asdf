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
bool isPalindrome(string s)
{
    int len = s.length();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1])
            return false;
    }
    return true;
}
LL factors(LL n)
{
    LL count = 0;
    for(LL i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i == i)
            {
                if(isPalindrome(to_string(i)))
                    count++;
            }
            else
            {
                if(isPalindrome(to_string(i)))
                    count++;
                if(isPalindrome(to_string(n/i)))
                    count++;
            }

        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        LL N; cin>>N;

       // cout << fixed;
       // cout << setprecision(8);
        cout << "Case #" << case_num << ": " << factors(N)<< endl;
    }
    return 0;
}
