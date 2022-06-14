#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        virtual vector<int> NGL(const vector<int> v) const{
            stack<int> s;
            int n = v.size();
            vector<int> out(n,-1);
            for(int i=0;i<n;i++)
            {
                if(!s.empty())
                {
                    while(!s.empty()&&s.top()<=v[i])
                        s.pop();
                    if(!s.empty()&&s.top()>v[i])
                        out[i] = s.top();
                }
                s.push(v[i]);
            }
            return out;
        }
};


/* int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> out;
    Solution s;
    out = s.NGL(v);
    for(int x: out)
        cout<< x << " ";
}*/

