#include<bits/stdc++.h>
using namespace std;

class WeightedQuickUnionUF{
    public:
    map<int,int> parent;
    //map<int,int> size;
    int count;
    int max_height=0;
    WeightedQuickUnionUF(int n){
        count = n;
    }
    int getCount(){
        return count;
    }
    /*void insert(int k){
        if(size[k]==0){
            parent[k]=k;
            size[k] = 1;
        }
    }
    */
    int getMaxheight()
    {
        for(int i=0;i<count;i++)
        {
            int h = 0,p = parent[i+1];
            while(p!=-1)
            {
                h++;
                p = parent[p];
            }
            h++;
            max_height = max(max_height,h);
        }
        return max_height;
    }
    int getParent(int k){
        return parent[k];
    }
    int find(int p){
            while(p!=parent[p]){
                //parent[p] = parent[parent[p]];
                p = parent[p];
            }
            return p;
    }
    bool connected(int p,int q){
        return find(p) == find(q);
    }
    /*void unite(int p,int q){
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
    }*/
};




int main()
{
    int n; cin>>n;
    WeightedQuickUnionUF qf(n);
    for(int i=0;i<n;i++)
    {
        int t; cin>>t;
        qf.parent[i+1] = t;
    }
    cout<<qf.getMaxheight()<<endl;
}
