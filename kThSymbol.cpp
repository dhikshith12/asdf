#include<bits/stdc++.h>
using namespace std;
int kthSymbol(int n,int k)
{
    if(n==1&&k==1)
    {
        return 0;
    }
    else
    {
        if(k<=(1<<(n-2)))
        {
            return kthSymbol(n-1,k);
        }
        else
        {
            if(kthSymbol(n-1,k-(1<<(n-2)))==0)
                return 1;
            else
                return 0;
        }
    }
}


int main()
{
    cout<<kthSymbol(4,5)<<endl;
    return 0;
}
