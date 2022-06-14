#include<iostream>
int digital_root(int n)
{
    while(n/10!=0){
        int t = n;
        int y = 0;
        while(t!=0){
            y += t%10;
            t/=10;
        }
        n = y;
    }
    return n;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<digital_root(n)<<std::endl;
}
