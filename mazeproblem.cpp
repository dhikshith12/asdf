#include<bits/stdc++.h>
using namespace std;
#define N 4
bool isSafe(int x,int y,int maze[N][N])
{
    if(x>=0&&x<N&&y>=0&&y<N&&maze[x][y])
        return true;
    return false;
}

void printSolution(int sol[N][N])
{
    cout<<"Path Found\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<"\n";
    }
}

bool solveMazeUtil(int x, int y,int maze[N][N],int sol[N][N])
{
    if(x==N-1&&y==N-1&&maze[x][y]){
        sol[x][y] = 1;
        return true;
    }
    else
    {
        if(isSafe(x,y,maze))
        {
            sol[x][y] = 1;
            if(solveMazeUtil(x+1,y,maze,sol))
                return true;
            if(solveMazeUtil(x,y+1,maze,sol))
                return true;
            sol[x][y] = 0;
            return false;
        }
        return false;
    }
    return false;
}

void solve(int maze[N][N])
{
    int sol[N][N] =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    if(solveMazeUtil(0,0,maze,sol))
        printSolution(sol);
    else
        cout<<"Path Not Found\n";
}
int main()
{
    int maze[N][N] =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 0, 1}
    };
    solve(maze);
}

