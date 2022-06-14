#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<string.h>
using namespace std;
class WeightedQuickUnionUF{
    map<int,int> parent;
    map<int,int> size;
    int count;
public:
    WeightedQuickUnionUF(int n){
        count = n;
    }
    int getCount(){
        return count;
    }
    void insert(int k){
        if(size[k]==0){
            parent[k]=k;
            size[k] = 1;
        }
    }
    int getParent(int k){
        return parent[k];
    }
    int find(int p){
            while(p!=parent[p]){
                parent[p] = parent[parent[p]];
                p = parent[p];
            }
            return p;

    }
    bool connected(int p,int q){
        return find(p) == find(q);
    }
    void unite(int p,int q){
        int rootP = find(p);
        int rootQ = find(q);
        if(rootP == rootQ) return;

        if(size[rootP] < size[rootQ]){
            parent[rootP] = rootQ;
            size[rootQ] += size[rootP];
        }
        else{
            parent[rootQ] = rootP;
            size[rootP] += size[rootQ];
        }

        count--;
    }
};
int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n],b[32];
        memset(b,0,32*sizeof(int));
        WeightedQuickUnionUF g(n);
        for(int i=0;i<n;i++){
            int r;
            cin>>r; g.insert(r);
            arr[i] = r;
            for(int j=0;j<32;j++){
                if(arr[i]&(1<<j)){
                    if(b[j]==0)
                        b[j]=arr[i];
                    else{
                        g.unite(b[j],arr[i]);
                    }
                }
            }
        }
        int arcp[n];
        memcpy(arcp,arr,n*sizeof(int));
        sort(arcp,arcp+n);
        int c = true;
        for(int i=0;i<n-1;i++){
            if(c&&!g.connected(arr[i]
                        ,arr[binarySearch(arcp,arr[i],0,n-1)])){
                cout<<"NO\n";
                c = false;
            }
        }
        if(c) cout<<"YES\n";
    }
    return 0;
}

