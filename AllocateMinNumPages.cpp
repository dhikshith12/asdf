#include<bits/stdc++.h>
using namespace std;
bool isPossible(int pages[],int N,int M,int curr_max)
{
    int curr_student_num = 1;
    int curr_sum_for_student = 0;
    for(int i=0;i<N;i++)
    {
        /*
            since each student is required to
            study some consecutive books, some student
            will get this book with more pages than curr_max
            and thus we should increase curr_max by moving mid to right
        */
        if(pages[i]>curr_max)
            return false;

        if(curr_sum_for_student+pages[i]>curr_max)
        {
            curr_student_num++;
            curr_sum_for_student = pages[i];

            if(curr_student_num>M)
                return false;
        }
        else
            curr_sum_for_student+=pages[i];
    }
    return true;
}

int countMinPages(int pages[],int N,int M)
{
    long long sum = 0;
    long long preSums[N];
    preSums[0] = pages[0];
    for(int i=1;i<N;i++)
        preSums[i]=preSums[i-1]+pages[i];
    if(N<M)
        return -1;
    for(int i=0;i<N;i++)
        sum+=pages[i];

    int lo = 0, hi = sum;
    int result = INT_MAX;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(isPossible(pages,N,M,mid))
        {
            result = mid;

            hi=mid-1;
        }
        else
            lo = mid+1;
    }
    return result;
}

int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    cout<<"minimum of maximum pages allocation for "<<m<<" students is "<<countMinPages(arr,size,m)<<endl;

    return 0;
}
