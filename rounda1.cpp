#include<bits/stdc++.h>
using namespace std;

void run(int ii)
{
    string I,P;
    cin>>I>>P;
    int ans = P.length()-I.length();
    int i=0,j=0;
    while(i<I.length()&&j<P.length())
    {
        if(I[i]==P[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if(i!=I.length())
        cout<<"Case #"<<ii<<": "<<"IMPOSSIBLE\n";
    else cout<<"Case #"<<ii<<": "<<ans<<endl;
}
int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        run(i);
    }
}
