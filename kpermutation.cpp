#include<bits/stdc++.h>
using namespace std;
//  permutation k times in O(nlogk) time

vector<int> applyPermutation(vector<int> sequence, vector<int> permutation)
{
    vector<int> newseq(sequence.size());
    for (int i = 0; i < sequence.size(); i++)
    {
        newseq[permutation[i]] = sequence[i];
    }
    return newseq;
}

vector<int> permute(vector<int> sequence,vector<int> permutation, int k)
{
    while(k!=0){
        if(k&1)
        {
          sequence = applyPermutation(sequence,permutation);
          k--;  
        } 
        permutation = applyPermutation(permutation,permutation);
        k>>=1;
    }
    return sequence;
}