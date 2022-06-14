#include<bits/stdc++.h>
using namespace std;

stack<char> st;

string ns;

void insert(char x)
{
    if(st.size()==0||st.top()<=x)
    {
        st.push(x);
        return;
    }
    char val = st.top();
    st.pop();
    insert(x);
    st.push(val);
}

void sortStack()
{
    if(st.size()==1)
        return;
    else
    {
        char top = st.top();
        st.pop();
        sortStack();
        insert(top);
    }
}

void printStack()
{
    stack<char> copy = st;
    while(!copy.empty())
    {
        cout<<copy.top()<<" ";
        copy.pop();
    }
    cout<<endl;
}

int main()
{
    st.push('d');
    st.push('c');
    st.push('b');
    st.push('a');

    printStack();

    sortStack();

    printStack();

    return 0;
}
