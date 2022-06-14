#include"NGL.cpp"

class MSolution: public Solution{
    public:
        vector<int> NGL(const vector<int> v) const override{
            stack<int> s;
            int n = v.size();
            vector<int> out(n,-1);
            for(int i=0;i<n;i++)
            {
                if(!s.empty())
                {
                    while(!s.empty()&&v[s.top()]<=v[i])
                        s.pop();
                    if(!s.empty()&&v[s.top()]>v[i])
                        out[i] = s.top();
                }
                s.push(i);
            }
            return out;
        }

};

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    Solution* s = new MSolution();

    vector<int> out = s->NGL(v);
    for(int i=0;i<n;i++)
        cout<< i-out[i] <<" ";
    cout<<endl;
}

