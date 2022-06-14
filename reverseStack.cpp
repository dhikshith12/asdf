#include<stack>
#include<iostream>
using namespace std;

stack<int> st;
void insertAtBottom(int val)
{
    if(st.size()==0)
        st.push(val);
    else
    {
        int t = st.top();
        st.pop();
        insertAtBottom(val);
        st.push(t);
    }
}

void reverseStack()
{
    if(st.size()==0)
        return;
    else
    {
        int t = st.top();
        st.pop();
        reverseStack();
        insertAtBottom(t);
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
    reverseStack();
    printStack();
}
