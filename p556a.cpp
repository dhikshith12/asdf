#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d",&n);
    char s[n];
    scanf("%s",&s[0]);

    int zo[2] = {0,0};
    for(int i=0;i<n;i++) zo[s[i]-'0']++;

    printf("%d",n-2*min(zo[0],zo[1]));
}
