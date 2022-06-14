#include<bits/stdc++.h>

class A{
public:
    virtual void horn() = 0;
};

class B{
public:
    virtual void name() = 0;
};

class C:public A, public B{
   void horn(){
       std::cout<<"Hello\n";
   }
   void name(){
       std::cout<<"Name\n";
   }
};

int main()
{
    A* a;
    B* b;
    a = new C();
    b = new C();
    a->horn();
    b->name();
}
