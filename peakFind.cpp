#include<iostream>
using namespace std;

int findPeakUtil(int arr[],int lo, int hi)
{
    int n = hi-lo+1;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if((mid==0||arr[mid]>=arr[mid-1])&&
           (mid==n-1||arr[mid]>=arr[mid+1]))
            return mid;
        if(mid>0&&arr[mid]<=arr[mid-1])
            hi = mid -1;
        else
            lo = mid+1;
    }
    return -1;
}

int main(){
    int arr[7] = {4, 6,5, 5, 10, 20, 22};
    int size = sizeof(arr)/sizeof(int);
    cout<<"peak of array: "<<findPeakUtil(arr,0,size-1)<<endl;
}

