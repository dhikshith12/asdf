#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int r = 4, c = 3;
    int ** matrix = (int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++)
    {
        matrix[i] = (int*)malloc(c*sizeof(int));
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            matrix[i][j] = i+j;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
