#include<iostream>
using namespace std;

int floor(int arr[], int lo, int hi, int key)
{
    int res;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key)
            return mid;
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
int ceil(int arr[], int lo, int hi, int key)
{
    int res;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key)
            return mid;
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

int main(){
    int arr[9] = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    cout<<"floor of 5 "<<floor(arr,0,8,5)<<endl;
    cout<<"ceil of 5 "<<ceil(arr,0,8,5)<<endl;
    return 0;
}
