#include<bits/stdc++.h>
using namespace std;
#define UNIQUE false
#define MAXN 300000
int rand(int a,int b){
    return a + rand()%(b-a+1);
}

int main(int argc, char*argv[]){
    srand(time(NULL));
    int n = rand(1,10);
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        int x = rand(0,32767);
        printf("%d ",x);
    }
    printf("\n");
}
