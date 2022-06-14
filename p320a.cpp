#include<iostream>
using namespace std;

int main()
{
    const string c1 = "1";
    const string c2 = "14";
    const string c3 = "144";
    const string w = "444";
    string n; cin>>n;
    if(n.find(w)!=string::npos)
    {
        cout<<"NO\n";
        return 0;
    }
    while(!n.empty())
    {
        size_t found = n.find(c3);
        size_t found2 = n.find(c2);
        size_t found1 = n.find(c1);
        if(found!=string::npos)
            n.erase(found,3);
        else if(found2!=string::npos)
            n.erase(found2,2);
        else if(found1!=string::npos)
            n.erase(n.begin()+found1);
        else
            break;
    }
    if(n.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
