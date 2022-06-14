#include<iostream>
using namespace std;
class HelloWorld
{
    public:
        HelloWorld(){
            cout<<"constructor is called\n";
        }
        ~HelloWorld(){
            cout<<"destructor is called\n";
        }
};

HelloWorld* fun(){
    HelloWorld* hw = new HelloWorld();
    return hw;
}

int main()
{
    HelloWorld* hw = fun();
    cout<<"exit\n";

    return 0;
}
