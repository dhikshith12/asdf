#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int** ra; // ra is stored in stack but the memory
             // of integer it holds can be in heap

    ra = (int**)malloc(5*sizeof(int*));


    for(int i=0;i<5;i++)
    {
        ra[i] = (int*)malloc(3*sizeof(int));
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            ra[i][j] = i+j;
            printf("%d ",ra[i][j]);
        }
        printf("\n");
        free(ra[i]);
    }

    free(ra);

}
