#include<bits/stdc++.h>
using namespace std;
typedef pair<unsigned long,int> puli;

priority_queue<puli> maxh;

vector<int> kClosestPoints(int* arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        maxh.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],i});
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    vector<int> res(k,0);
    int i = k-1;
    while(!maxh.empty())
    {
        res[i--]=maxh.top().second;
        maxh.pop();
    }
    return res;
}

int main()
{
    int cpr[4][2] = {{1,3},{-2,2},{5,8},{0,1}};
    int** arr;
    arr = (int**)malloc(4*sizeof(int*));
    for(int i=0;i<4;i++)
    {
        arr[i] = (int*) malloc(2*sizeof(int));
        arr[i][0] = cpr[i][0];
        arr[i][1] = cpr[i][1];
    }

    int k = 2;
    vector<int> res = kClosestPoints(arr,4,k);
    for(int i=0;i<4;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    for(int x:res)
        cout<<cpr[x][0]<<", "<<cpr[x][1]<<endl;
}

