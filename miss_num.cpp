#include<bits/stdc++.h>
using namespace std;

struct ans
{
    int a,b;
};

ans findAb(int arr[])
{
    //a>b in this case
    bool b=true;
    int zeroes=0,ones=0;
    int ng = 0;
    for(int i=0;i<4;i++){
        if(arr[i]==1)
            ones++;
        else if(arr[i]==0)
            zeroes++;
        else if(arr[i]<0)
            ng++;
        b&=(arr[i]>=0);
    }
    if(b)
    {
        // a = b + 1;
        if(ones==2&&zeroes==0)
        {
            int apb;
            for(int i=0;i<4;i++)
            {
                if(arr[i]%2&&arr[i]!=1)
                    apb = arr[i];
            }
            int b = (apb-1)/2;
            int a = b+1;
            return {a,b};
        }
        //a = b;
        if(ones==1&&zeroes==1)
        {
            int x = 10001;
            for(int i=0;i<4;i++)
            {
                if(arr[i]!=1&&arr[i]!=0)
                {
                    x = min(x,arr[i]);
                }
            }
            return {x/2,x/2};
        }
        // a = b + x; x>0;
        if(ng==0)
        {
            int x = 10001,atb;
            int sum=0;
            for(int i=0;i<4;i++)
            {
                if(arr[i]!=1)
                {
                    x = min(x,arr[i]);
                    atb = max(atb,arr[i]);
                    sum+=arr[i];
                }
            }
            int apb = sum-x-atb;
            if(atb==apb+1){
                return {apb,1};
            }
            if((apb-x)%2==0){
                int b = (apb-x)/2;
                int a = b + x;
                return {a,b};
            }
            return {-1,-1};
        }
    }
    else
    {
        int negative = 0;
        int x=0,atb=0;
        int sum=0;
        for(int i=0;i<4;i++){
            if(arr[i]>0){
                x = min(x,arr[i]);
                atb = max(atb,arr[i]);
                sum+=arr[i];
            }
            negative = min(negative,arr[i]);
        }
        int apb = sum-x-atb;
        if(negative<0&&zeroes==1)
        {
            if(atb==apb+1)
            {
                return {1,apb};
            }
            if((apb-negative)%2==0){
                int b = (apb-negative)/2;
                int a = b+negative;
                return {a,b};
            }
            return {-1,-1};
        }
    }
    return {1,1};
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int arr[4];
        for(int i=0;i<4;i++) cin>>arr[i];
        ans answer = findAb(arr);
        cout<<answer.a<<" "<<answer.b<<endl;
    }
}
