#include<iostream>
#include<climits>
using namespace std;

int maxarray(int input1,int input2[])
{
    int maxSoFar = INT_MIN, maxEndingHere = 0;
    for(int i = 0;i<input1; i++)
    {
        maxEndingHere+= input2[i];
        if(maxSoFar<maxEndingHere)
            maxSoFar = maxEndingHere;

        if(maxEndingHere<0)
            maxEndingHere = 0;
    }
    return maxSoFar;
}

int main()
{
    int arr[3] = {3, -1, 2};
    cout<<maxarray(3,arr);
}
