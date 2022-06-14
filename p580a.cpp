#include<iostream>

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    int maxInc = 0;
    int Inc = 1;
    scanf("%d",&arr[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=arr[i-1])
            Inc++;
        else{
            maxInc = std::max(maxInc,Inc);
            Inc = 1;
        }
    }
    maxInc = std::max(maxInc,Inc);
    printf("%d\n",maxInc);
}
