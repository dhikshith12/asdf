#include<iostream>
using namespace std;

bool retTrue()
{
    cout<<"retTrue() fun running"<<endl;
    return true;
}
bool check()
{
    cout<<"Check() fun running"<<endl;
    return true;
}

int main()
{
    if(retTrue()||check())
    {
        cout<<"Inside If"<<endl;
    }
    return 0;
}
