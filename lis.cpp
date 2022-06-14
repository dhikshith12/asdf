#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int a,prev;
    int dpi=1,dpim=0;
    for(int i=0;i<n;i++)
    {
        if(i>0){
            prev = a;
        }
        else{
            dpi = 1;
        }
        cin>>a;
        if(i>0)
            dpi = max(dpi,dpim+(int)(a>prev));
        dpim = dpi;
        dpi = 1;
    }

    cout<<dpim<<endl;

    return 0;
}
