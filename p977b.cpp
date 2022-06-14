#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d",&n);
    char arr[n+1];
    unordered_map<string,int> um;
    scanf("%s",&arr[0]);
    int maxC=0;
    string maxSt;
    for(int i=0;i<n-1;i++)
    {
        string s;
        s.push_back(arr[i]);
        s.push_back(arr[i+1]);
        if(um.find(s)!=um.end())
        {
            um[s]++;
            maxC = max(maxC,um[s]);
            if(maxC==um[s]) maxSt = s;
        }
        else{
            um[s] = 1;
            maxC = max(maxC,um[s]);
            if(maxC==um[s]) maxSt = s;
        }
    }
    printf("%s\n",maxSt.c_str());


}
