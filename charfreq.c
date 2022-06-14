#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* frequency( char* input1)
{
    int f[256];
    memset(f,0,256*sizeof(int));
    long i=0;
    while(input1[i]!='\0'){
        f[input1[i]-'0']++;
        i++;
    }
    char *res = (char*) malloc(2*i*sizeof(char));
    int j = 0;
    for(int i=0;i<256;i++){
        if(f[i]>0){
            res[j]=(char)i;
            res[j+1]=f[i]+'0';
            j+=2;
        }
    }
    res[j] = '\0';
    return res;
}

int main()
{
    char in[] = "phqgh";
    printf("%s\n",frequency(in));
    return 0;
}
