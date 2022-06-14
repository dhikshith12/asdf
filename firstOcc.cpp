#include<iostream>
using namespace std;


int firstOccurance(int arr[], int lo, int hi,int key){
    int res;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] >= key){
            if(arr[mid] == key)
                res = mid;
            hi = mid-1;
        }
        if(arr[mid]<key)
            lo = mid+1;
    }
    return res;
}

int lastOccurance(int arr[],int lo, int hi, int key){
    int res;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(arr[mid]<=key)
        {
            if(arr[mid]==key)
                res = mid;
            lo = mid+1;
        }
        if(arr[mid]>key)
            hi = mid -1;
    }
    return res;
}

int main()
{
    int arr[6] = { 2, 4, 10, 10, 18, 20 };
    int fo =firstOccurance(arr,0,5,10);
    int lo =lastOccurance(arr,0,5,10);
    cout<<"firstOccurance: "<<fo<<"\nlastOccurance: "<<lo
        <<"\n# of Occurances: "<<lo-fo+1;
    return 0;
}
