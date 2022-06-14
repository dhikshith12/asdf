#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    string str;
    getline(cin, str);
    cin>>n;
    stringstream ss(str);
    map<string,int> count;
    string word;
    while(ss>>word){
        if(count.find(word)==count.end()){
            count[word]=1;
        }
        else{
            count[word]++;
        }
    }
    for(auto x: count){
        if(x.second>=n){
            cout<<x.first<<' ';
        }
    }
}
