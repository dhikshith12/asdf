#include<iostream>
int foo()
{
    int n = 0;
    for(int i=0;i<10;i++)
        n+=i;
    return n;
}
int main()
{
    int n = foo();
    std::cout<<n<<'\n';
}
