#include<bits/stdc++.h>
using namespace std;

struct Pair{
    vector<int> missing;
    vector<int> duplicate;
};

Pair swapSort(int arr[], int n)
{
    int i = 0;
    vector<int> duplicate,missing;
    while(i<n)
    {
        while(arr[i]-1!=i)
        {
            if(arr[i]==arr[arr[i]-1]){
                duplicate.push_back(arr[i]);
                missing.push_back(i+1);
                break;
            }
            else
                swap(arr[i],arr[arr[i]-1]);
        }
        i++;
    }
    return { missing, duplicate};
}


int main()
{
    Pair p;
    int arr[] = { 2, 3, 1, 8, 2, 3, 5, 1};
    int size = sizeof(arr)/sizeof(int);
    p = swapSort(arr,size);
    vector<int> missing = p.missing;
    vector<int> duplicate = p.duplicate;
    cout<<"Missing elements\n";
    for(int i=0;i<missing.size();i++)
        cout<<missing[i]<<" ";
    cout<<endl;
    cout<<"Duplicate elements\n";
    for(int i=0;i<duplicate.size();i++)
        cout<<duplicate[i]<<" ";

    cout<<endl;
    return 0;
}
