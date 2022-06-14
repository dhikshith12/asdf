#include<bits/stdc++.h>
#define MAX_W 50
using namespace std;
bitset<MAX_W> can;
int main(){
    int n, W;
    cin>>n>>W;
    can[0] = true;
    for(int id=0;id<n;id++){
        int x;
        cin>>x;
        can|=(can<<x);
    }
    puts(can[W] ? "YES": "NO");
}
