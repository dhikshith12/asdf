#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b
char A[100];
char B[100];
int lcs(int i,int j)
{
    if(A[i]=='\0'||B[j]=='\0') return 0;
    else if(A[i] == B[j]) return 1 + lcs(i+1,j+1);
    else {
        int l = lcs(i+1,j);
        int r = lcs(i,j+1);
        return max(l,r);
    }
}

int main()
{
    fgets(A,97,stdin);
    fgets(B,97,stdin);
    printf("lcs is %d \n",lcs(0,0)-1);
}
