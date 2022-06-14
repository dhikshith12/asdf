#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a;
    bitset<10005> seen;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        if(seen[a]) v.push_back(a);
    }

}
