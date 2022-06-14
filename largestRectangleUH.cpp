#include<bits/stdc++.h>
using namespace std;

class NSL{
    public:
        vector<int> out;
        NSL(const vector<int> v){
            out = getNSL(v);
        }
    private:
        vector<int> getNSL(const vector<int> v) const{
            stack<int> s;
            int n = v.size();
            vector<int> out(n,-1);
            for(int i=0;i<n;i++)
            {
                if(!s.empty())
                {
                    while(!s.empty()&&v[s.top()]>=v[i])
                        s.pop();
                    if(!s.empty()&&v[s.top()]<v[i])
                        out[i] = s.top();
                }
                s.push(i);
            }
            return out;
        }
};

class NSR{
    public:
        vector<int> out;
        NSR(const vector<int> v){
            out = getNSR(v);
        }
    private:
        vector<int> getNSR(const vector<int> v) const{
            stack<int> s;
            int n = v.size();
            vector<int> out(n,-1);
            for(int i=n-1;i>=0;i--)
            {
                if(!s.empty())
                {
                    while(!s.empty()&&v[s.top()]>=v[i])
                        s.pop();
                    if(!s.empty()&&v[s.top()]<v[i])
                        out[i] = s.top();
                }
                s.push(i);
            }
            return out;
        }
};

class Solution{
    NSR* nsr;
    NSL* nsl;
    public:
        long long maxArea;
        Solution(const vector<int> v){
            nsr = new NSR(v);
            nsl = new NSL(v);
            maxArea = getMaxArea(v);
        }

    private:
        long long getMaxArea(const vector<int> v) const{
            stack<int> s;
            int n = v.size();
            long long maxArea = 0;
            for(int i=0;i<n;i++)
            {
                maxArea = max(maxArea, (long long)v[i]*(1+(nsl->out[i]>=0?i-nsl->out[i]-1:0)+
                            (nsr->out[i]>0?nsr->out[i]-i-1:n-i-1)));
            }
            return maxArea;
        }
};

int main()
{
    int n; cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    Solution s(vec);

    cout<<s.maxArea<<endl;
}
