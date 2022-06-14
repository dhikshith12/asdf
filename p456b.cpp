#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int a;
    if(n.length()>=2)
    {
        a = (n[n.length()-2]-'0')*10;
        a+=(n[n.length()-1]-'0');   
    }
    else
    {
        a = atoi(n.c_str());
    }
    if(a%4==0)
            cout<<"4\n";
    else
        cout<<"0\n";
}