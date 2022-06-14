#include<bits/stdc++.h>
using namespace std;
int n;
int **mem;
int *arr;
bool inbounds(int l,int r){
    return l>=0&&r>=0&&l<n&&r<n;
}
int dp(int l,int r){
   if(!inbounds(l,r)) return 0;
   if(l==r+1){
      return 0;
   }
   if(mem[l][r]==0){
       int nl = l<n-1?dp(l+1,r)+(n+l-r)*arr[l]:0;
       int nr = r>0?dp(l,r-1)+(n+l-r)*arr[r]:0;
       mem[l][r] = max(nl,nr);
       mem[r][l] = mem[l][r];
       return mem[l][r];
   }
   else return mem[l][r];
}
int main()
{
    cin>>n;
    arr = new int[n];
    mem = new int*[n];
    for(int i=0;i<n;i++) mem[i] = new int[n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) mem[i][j] = 0;
    for(int i=0;i<n;i++) cin>>arr[i];
    int hmax = dp(0,n-1);
    cout<<hmax<<endl;
    delete [] arr;
    for(int i=0;i<n;i++) delete [] mem[i];
    delete [] mem;
}
