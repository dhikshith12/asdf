#include<bits/stdc++.h>
using namespace std;
class WeightedQuickUnionUF{
    map<int,int> size;
    int count;
public:
    map<int,int> parent;
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

void solve()
{
    int n; cin>>n;
    WeightedQuickUnionUF dsu(n);
    dsu.parent[1] = 1;
    for(int i=2;i<=n;i++)
    {
        int t; cin>>t;
        dsu.parent[i] = t;
    }

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
