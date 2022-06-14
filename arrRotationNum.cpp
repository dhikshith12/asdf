#include<iostream>
#include<vector>
using namespace std;

int arrRotations(int arr[], int lo, int hi)
{
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1])
            return mid;
        else if(arr[mid]>=arr[lo]&&arr[mid]>=arr[hi])
            lo = mid + 1;
        else if(arr[mid]<arr[hi])
            hi = mid -1;

    }
    return -1;
}

int main(){
    int arr[8] = {11, 12, 15, 18, 2, 5, 6, 8};
    cout<<"# of times array rotated: "<<arrRotations(arr,0,7);
}
