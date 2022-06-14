#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxWaterTrapping(const vector<int> v) const{
             int result = 0;
             int lmax = 0, rmax = 0;
             int lo = 0, hi = v.size() -1;
             while(lo<=hi)
             {
                 if(v[lo]<v[hi])
                 {
                     if(v[lo]>lmax)
                         lmax = v[lo];
                     else
                         result += lmax-v[lo];
                     lo++;
                 }
                 else{
                     if(v[hi]>rmax)
                         rmax = v[hi];
                     else
                         result += rmax-v[hi];
                     hi--;
                 }
             }
             return result;
        }
};

int main()
{
    const vector<int> v = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    Solution s;
    cout<<s.maxWaterTrapping(v)<<endl;
}
