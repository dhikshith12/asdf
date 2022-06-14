#include<iostream>
using namespace std;

// Time Complexity O(N^2)
void sort(int arr[],int n)
{
    if(n==1)
        return;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max])
            max = i;
    }
    swap(arr[max],arr[n-1]);
    sort(arr,n-1);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {2, 3, 7, 6, 4, 5};

    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    sort(arr,n);
    print(arr,n);
}
