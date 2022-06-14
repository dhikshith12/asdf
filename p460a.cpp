#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int sLeft = n;
    int i=0;
    while(sLeft!=0)
    {
        i++;
        if(i%m==0)
            sLeft++;
        sLeft--;
    }
    cout<<i<<endl;
}
