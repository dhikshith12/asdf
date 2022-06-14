#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        int l = n/10;
        int l1 = (n%10)+(n/100)*10;

        if(l1>l)
        {
            cout<<l1<<endl;
        }
        else
        {
            cout<<l<<endl;
        }
    }
    else
    {
        cout<<n<<endl;
    }
    return 0;
}
