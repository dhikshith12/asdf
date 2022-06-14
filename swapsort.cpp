#include<bits/stdc++.h>
using namespace std;

pair<int,int> findDuplicateMissing(int arr[],int n)
{
    int i = 0;
    int duplicate,missing;
    while(i<n)
    {
        while(arr[i]!=i+1)
        {
            if(arr[i]!=arr[arr[i]-1])
                swap(arr[i],arr[arr[i]-1]);
            else{
                duplicate = arr[i];
                missing = arr[i];
            }
        }
        i++;
    }
}
