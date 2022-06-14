#include<bits/stdc++.h>
using namespace std;
bool sameCharAdj(string str){
    int n = str.length(), i;
    set<char> st;
    st.insert(str[0]);
    for(i = 1; i<n;i++){
        if(str[i]==str[i-1])
            continue;
        if(st.find(str[i])!=st.end())
            return false;
        st.insert(str[i]);
    }
    return true;
}
int minSwaps(string str, int l, int r, int cnt, int minm){
    if(l==r){
        if(sameCharAdj(str))
            return cnt;
        else return INT_MAX;
    }
    for(int i = l+1;i<=r;i++){
        swap(str[i],str[l]);
        cnt++;

        int x = minSwaps(str, l+1,r, cnt, minm);
        swap(str[i], str[l]);
        cnt--;

        int y = minSwaps(str,l+1,r,cnt,minm);
        minm = min(minm,min(x,y));
    }
    return minm;
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt = 0, minm=INT_MAX;
    cout<<2*minSwaps(s,0,n-1,cnt,minm)<<endl;
}
