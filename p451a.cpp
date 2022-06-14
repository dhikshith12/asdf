#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int mn = min(n,m);
    if(mn%2)
        printf("Akshat\n");
    else
        printf("Malvika\n");
}
