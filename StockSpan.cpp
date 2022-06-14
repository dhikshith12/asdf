#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> stockSpan(const vector<int> v) const
        {
            stack<int> s;
            int n = v.size();
            vector<int> out(n,1);
            for(int i=0;i<n;i++)
            {
                if(!s.empty())
                {
                    while(!s.empty()&&v[i]>=v[s.top()])
                    {
                        out[i]+=out[s.top()];
                        s.pop();
                    }
                }
                s.push(i);
            }
            return out;
        }
};

int main()
{
    //vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    Solution s;
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> out = s.stockSpan(v);
    for(int x: out)
        cout<< x<< " ";
    cout<<endl;
}
