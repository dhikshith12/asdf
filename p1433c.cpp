#include<iostream>
#include<climits>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    int max = 0;
    bool alsame = true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0&&arr[i]!=arr[i-1])
            alsame=false;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]&&arr[i]>=arr[max]){
            max = i;
        }
        else if(arr[i]<arr[i+1]&&arr[i+1]>=arr[max])
        {
            max = i+1;
        }
    }
    if(!alsame){
        cout<<max+1<<endl;
    }
    else
        cout<<-1<<endl;

}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
