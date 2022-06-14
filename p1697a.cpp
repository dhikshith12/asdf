#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n1,q1; cin>>n1>>q1;
    int p[n1];
    for(int i=0;i<n1;i++)    cin>>p[i];
    sort(p,p+n1,greater<int>());
    long long pre[n1+1];
    pre[0] = 0;
    for(int i=0;i<n1;i++)    pre[i+1] = pre[i]+p[i];
    for(int i=0;i<q1;i++){
        int x, y;
        cin>>x>>y;
        cout<<pre[x]-pre[x-y]<<endl;
    }
}