#include<bits/stdc++.h>
using namespace std;

bool traverse(int i,int j,int r,int c,int m,string& M,vector<string>& A){
   if(A[i][j]=='#') return false;
   int p = 0;
   bool ret = true;
   while(p!=m&&ret){
       if(M[p]=='S'&&i>=0) ret &= (A[--i][j]!='#');
       else if(M[p]=='N'&&i<r) ret &= (A[++i][j]!='#');
       else if(M[p]=='W'&&j>=0) ret &= (A[i][--j]!='#');
       else if(M[p]=='E'&&j<c) ret &= (A[i][++j]!='#');
       else {
            if(i>=0)ret|=(A[--i][j]!='#');
            if(i<r)ret|=(A[++i][j]!='#');
            if(j>=0)ret|=(A[i][--j]!='#');
            if(j<c)ret|=(A[i][++j]!='#');
       }
       p++;
   }
   return ret;
}

int main()
{
    int r,c,m;
    string M;
    vector<string> A;
    cin>>r>>c>>m;
    for(int i=0;i<r;i++) {
        string s;
        cin>>s;
        A.push_back(s);
    }
    cin>>M;
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(A[i][j]!='#'){
               if(traverse(i,j,r,c,m,M,A)) count++;
           }
        }
    }
}
