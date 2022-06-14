#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        vector<int> NGE(const vector<int>& v)const {
            stack<int> s;
            int n = v.size();
            vector<int> out(n,-1);
            for(int i = n-1;i>=0;i--)
            {
                if(!s.empty()){
                    while(!s.empty()&&s.top()<v[i])
                        s.pop();
                    if(!s.empty()&&s.top()>v[i])
                        out[i] = s.top();
                }
                s.push(v[i]);
            }
            return out;
        }
};


int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    vector<int> out;
    Solution s;
    out = s.NGE(v);
    for(int x: out)
        cout<< x << " ";
}
