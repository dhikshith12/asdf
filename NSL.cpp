#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void NSL(vector<int>& v) const{
        stack<int> s;
        int n = v.size();
        int tmp;
        for(int i=0;i<n;i++)
        {
            tmp = v[i];
            if(s.empty())
                v[i] = -1;
            else{
                while(!s.empty()&&s.top()>v[i])
                    s.pop();
                if(s.empty())
                    v[i] = -1;
                else if(!s.empty()&&s.top()<v[i]){
                    v[i] = s.top();
                }
            }
            s.push(tmp);
        }
    }
};

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    Solution s;
    s.NSL(v);
    for(int x: v)
        cout<< x << " ";
}
