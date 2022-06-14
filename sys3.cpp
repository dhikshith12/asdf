#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;
int partition(ll arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}
int kthSmallest(long long arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1) {

        int index = partition(arr, l, r);

        if (index - l == k - 1)
            return arr[index];
        if (index - l > k - 1)
            return kthSmallest(arr, l, index - 1, k);

        return kthSmallest(arr, index + 1, r,
                            k - index + l - 1);
    }

    return INT_MAX;
}

void fun(ll tt)
{
    int n;
    cin>>n;
    long long arr[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>arr[i][j];
    int k=n;
    while(k>1){
        for(int i=0;i<n;i++){
            swap(arr[i][0],arr[i][kthSmallest(arr[i],0,k,k-1)]);
            swap(arr[i][1],arr[i][kthSmallest(arr[i],0,k,k)]);
            swap(arr[i][2],arr[i][kthSmallest(arr[i],0,k,k-2)]);
            for(int i=0;i<n;i++){
                for(int j=0;i<k;j++){
                    arr[i][j]*=arr[i][j+1];
                }
           }
        }
        k--;
    }
    if(k==1) {
            ll sum = 0;
            for(int i=0;i<n;i++) sum+=arr[i][0];
            cout<<sum%mod<<endl;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fun(1);
    return 0;
}
