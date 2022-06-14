#include<bits/stdc++.h>
using namespace std;

priority_queue<int> maxh;

int findKthMin(int arr[],int n,int k)
{
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
    int arr[6] = {1,3, 12, 5, 15, 11};
    int size = sizeof(arr)/sizeof(int);
    int kthmin = findKthMin(arr,size,6);
    cout<<kthmin<<endl;
}
