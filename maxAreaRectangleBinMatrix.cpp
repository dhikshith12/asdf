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

class MAH{
    NSR* nsr;
    NSL* nsl;
    public:
        long long maxArea;
        MAH(const vector<int> v){
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

/* *
 *      0 1 1 0
 *      1 1 1 1
 *      1 1 1 1
 *      1 1 0 0
 *
 *      Maximum area rectangle in binary matrix: 8
 * */

class MAR{
    MAH* mah;
    public:
        long long maxArea = 0;

        MAR(int **matrix, int m, int n)
        {
            vector<int> temp(n,0);
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==m-1&&matrix[i][j]==0){
                        temp[j] = 0;
                        continue;
                    }
                    temp[j] += matrix[i][j];
                }
                mah = new MAH(temp);
                maxArea = max(maxArea,mah->maxArea);
            }
        }
};

int main()
{
    int m,n; cin>>m>>n;
    int** matrix;
    matrix = new int*[m];
    for(int i=0;i<m;i++){
        matrix[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    MAR* mar;
    mar = new MAR(matrix,m,n);
    cout<<mar->maxArea<<endl;
    return 0;
}
