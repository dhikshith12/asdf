#include<iostream>
using namespace std;

int maxInBitonic(int arr[], int lo, int hi)
{
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        bool c1 = arr[mid-1]<arr[mid];
        bool c2 = arr[mid]<arr[mid+1];
        if(c1&&!c2)
            return mid;
        if(c1&&c2)
            lo = mid+1;
        if(!c1)
            hi = mid-1;
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 3, 8, 12, 4, 2};
    cout<<"Max in bitonic Array: "<<maxInBitonic(arr,0,5)<<endl;
    return 0;
}
