#include<iostream>

using namespace std;



int Mfloor(int arr[], int lo, int hi, int key)
{
    int res;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key)
            return arr[mid];
        if(arr[mid]<key){
            res = arr[mid];
            lo = mid+1;
        }
        if(arr[mid]>key){
            hi = mid -1;
        }
    }
    return res;
}
int Mceil(int arr[], int lo, int hi, int key)
{
    int res;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key)
            return arr[mid];
        if(arr[mid]<key){
            lo = mid+1;
        }
        if(arr[mid]>key){
            res = arr[mid];
            hi = mid -1;
        }
    }
    return res;
}

int main()
{
    int arr[6] = {1, 3, 8, 10,12, 15};
    int key = 12;
    int size = sizeof(arr)/sizeof(int);
    int ans = min(abs(Mceil(arr,0,size-1,key)-key),
            abs(Mfloor(arr,0,size-1,key)-key));
    cout<<ans<<endl;
}
