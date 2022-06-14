/*
The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

The MEX of [2,2,1] is 0 because 0 does not belong to the array.
The MEX of [3,1,0,1] is 2 because 0 and 1 belong to the array, but 2 does not.
The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
You're given an array A containing 2⋅N integers where 0≤Ai≤N. Is it possible to reorder the elements of the array in such a way that the MEX of the first N elements is equal to the MEX of the last N elements?

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N.
The second line contains 2⋅N space-separated integers A1,A2,…,A2⋅N.

Output Format
For each test case, print YES if there is a valid reordering of the given array and NO otherwise.

Sample Input 1 
4
2
0 0 0 1
2
0 0 1 1
3
1 3 2 3 3 2
3
0 0 1 1 1 2

Sample Output 1 
NO
YES
YES
NO

Explanation
Test case 1: There is no way to reorder the elements of the array [0,0,0,1] which satisfies the given conditions.

Test case 2: One possible reordering is [0,1,0,1]. Here the MEX of the first half is MEX([0,1])=2 and the MEX of the second half is MEX([0,1])=2.

Test case 3: The given array already satisfies the conditions. Here the MEX of the first half is MEX([1,3,2])=0 and the MEX of the second half is MEX([3,3,2])=0.

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, (a))
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define F0Rd(i, a) FORd(i, (a), 0)
#define trav(a, x) for (auto &a : x)
#define MIN(a, b) a = min(a, b)
#define MAX(a, b) a = max(a, b)

const ll MOD = 1000000007;
const ll INF = 1e18;
const ll LINF = 1e60;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(2 * n);
        F0R(i, sz(v)) cin >> v[i];

        int mx = -1, mn = INF;
        F0R(i, sz(v)) {
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }

        bool ok = false;
        F0R(i, sz(v)) {
            if(v[i] != mx && v[i] != mn) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}

