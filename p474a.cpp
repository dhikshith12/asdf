#include<bits/stdc++.h>
using namespace std;

const string keybs[3] = {"qwertyuiop",
                         "asdfghjkl;",
                         "zxcvbnm,./"};
unordered_map<char,int> um;
void init()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            um[keybs[i][j]] = i*10+j;
        }
    }
}

int main()
{
    init();
    char offset;
    scanf("%c",&offset);
    int c = offset=='L'?1:-1;
    string str; cin>>str;
    for(int i=0;i<str.length();i++)
    {
        str[i] = keybs[um[str[i]]/10][um[str[i]]%10 + c];
    }
    cout<<str<<endl;
}
