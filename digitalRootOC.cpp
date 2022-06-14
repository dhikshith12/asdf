#include<iostream>
int digital_root(int z){
    return --z % 9 + 1;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<digital_root(n)<<std::endl;
}
