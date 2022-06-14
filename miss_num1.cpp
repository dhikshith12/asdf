#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int a,b;
};

Pair findAb(int arr[])
{
    sort(arr,arr+4);
    if(arr[3]-arr[2]==1)
    {
        if(arr[1]==0&&arr[0]<0)
        {
            return {1,1-arr[0]};
        }
        else
        {
            if(arr[1]-arr[0]==1)
            {
                return {arr[1],1};
            }
            else
            {
                return {-1,-1};
            }
        }
    }
    else
    {
        double r = (double)(arr[2]*arr[2]/4)-(arr[3]);
        int s = sqrt(r);
        if(s*s == r)
        {
            int r1 = arr[2]/2-s,r2 = arr[2]/2+s;
            
            if(arr[0]<0)
            {
                if(r1-r2==arr[0])
                {
                    return {r1,r2};
                }
                else
                {
                    return {r1,r2-arr[0]};
                }
            } 
            else
            {
                return {r2,r1};
            }
        }
        else
        {
            return {-1,-1};
        }
    }
    return {-1,-1};
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int arr[4];
        for(int i=0;i<4;i++) cin>>arr[i];
        Pair res = findAb(arr);
        cout<<res.a<<" "<<res.b<<endl;
    }
    return 0;
}
