#include<iostream>
int trailingzeros(int input1)
{
    int twos = 0,fives = 0,tens = 0;
    for(int i=1;i<=input1;i++)
    {
        if(i%2==0) twos++;
        else if(i%5==0) fives++;
    }
    return std::min(fives,twos);
}

int main()
{
    int n; std::cin>>n;
    std::cout<<trailingzeros(n);
}
