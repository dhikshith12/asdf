#include<bits/stdc++.h>
using namespace std;

stack<int> st;

void deleteIth(int i)
{
    if(i==1){
        st.pop();
        return;
    }
    else
    {
        int val = st.top();
        st.pop();
        deleteIth(i-1);
        st.push(val);
    }
}

void printStack()
{
    stack<int> copy = st;
    while(!copy.empty())
    {
        cout<<copy.top()<<" ";
        copy.pop();
    }
    cout<<endl;
}

int main()
{
    for(int i=1;i<=5;i++)
        st.push(i);
    printStack();
    int size = st.size();
    deleteIth(size/2+1);
    printStack();
}

