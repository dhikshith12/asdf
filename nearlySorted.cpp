#include<iostream>
using namespace std;
int pos(int arr[], int lo, int hi, int key)
{
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key)
            return mid;
        if(mid>lo&&arr[mid-1]==key)
            return mid-1;
        if(mid<hi&&arr[mid+1]==key)
            return mid+1;
        if(arr[mid]<key)
            lo = mid+2;
        else if(arr[mid]>key)
            hi = mid-2;
    }
    return -1;
}

int main()
{
    int arr[5] = {5, 10, 30, 20, 40};
    int key = 20;
    cout<<" position of "<<key<<" "<<pos(arr,0,4,key);
}
