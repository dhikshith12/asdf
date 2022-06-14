#include<bits/stdc++.h>
using namespace std;

bool recurse(vector<vector<char>>grid, string word,int
bool traverse(vector<vector<char>>grid,string word,int index)
{
    if(index>=word.size())
        return false;

    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j] == word[index])
            {

            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>grid[i][j];

    string word;
    cin>>word;

}
