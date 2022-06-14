#include<bits/stdc++.h>
using namespace std;


int findKthMin(int arr[],int n,int k)
{
    priority_queue<int> maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}

int main()
{
    int arr[6] = {1, 3, 12, 5, 15, 11};
    int size = sizeof(arr)/sizeof(int);
    int k1th = findKthMin(arr,size,3);
    int k2th = findKthMin(arr,size,6);
    cout<<k1th<<" "<<k2th<<endl;

    int tSum = 0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>k1th&&arr[i]<k2th)
            tSum+=arr[i];
    }
    cout<<tSum<<endl;
}
