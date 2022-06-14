#include<bits/stdc++.h>
using namespace std;
void printDivisors(long long n)
{
    for (int i=3; i<=sqrt(n); i+=2)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
                    cout<<"YES"<<endl;
                    return;
            }
            else {
                if(i%2)
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else if((n/i)%2)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        printDivisors(n);
    }
}
