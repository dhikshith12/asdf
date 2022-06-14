#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
   int n = str.length()-1;
   string rv(n,' ');
   for(int i =n-1;n>=0;n--){
       rv[i] = str[n-1-i];
   }
   return rv;
 }
