#include<iostream>
#include<vector>
using namespace std;

template<unsigned long N>
struct Fibonacci
{
    enum{
        value = Fibonacci<N-1>::value + Fibonacci<N-2>::value
    };
    static void add_values(vector<unsigned long>& v)
    {
        Fibonacci<N-1>::add_values(v);
        v.push_back(value);
    }
};

template<>
struct Fibonacci<0>
{
    enum
    {
        value = 0
    };
    static void add_values(vector<unsigned long>& v)
    {
        v.push_back(value);
    }
};

template<>
struct Fibonacci<1>
{
    enum
    {
        value = 1
    };
    static void add_values(vector<unsigned long>& v)
    {
        v.push_back(value);
    }
};

int main()
{
    vector<unsigned long> fibonacci_seq;
    Fibonacci<31>::add_values(fibonacci_seq);
    for(int i=0;i<=31;i++){
        cout<<"F "<<i<<"is "<<fibonacci_seq[i]<<"\n";
    }
}
