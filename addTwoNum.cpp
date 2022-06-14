#include<bits/stdc++.h>

using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long li1=0,li2=0;
        int i=0,j=0;
        ListNode* l = new ListNode(0,NULL);
        ListNode* lc = l;
        while(l1!=NULL){
            i++;
            li1 += (l1->val)*(int)(pow(10,i-1));
            l1 = l1->next;
        }
        while(l2!=NULL){
            j++;
            li2 += (l2->val)*(int)(pow(10,j-1));
            l2 = l2->next;
        }
        unsigned long ls = li1+li2;
        while(ls!=0){
            lc->val = ls%10;
            ls/=10;
            if(ls!=0){
                lc->next = new ListNode(0,NULL);
                lc = lc->next;
            }
        }
        return l;
    }
};
int main()
{
    Solution s;
    int le1;
    cin>>le1;
    ListNode *l1 = new ListNode(0,NULL);
    ListNode *lc = l1;
    for(int i=0;i<le1;i++){
        lc->next = new ListNode(0,NULL);
        lc = lc->next;
    }
    lc = l1;
    int t;
    for(int i=0;i<le1;i++){
        cin>>t;
        if(t>=0&&t<10){
            lc->val = t;
            lc = lc->next;
        }
    }
    int le2; cin>>le2;
    ListNode *l2 = new ListNode();
    lc = l2;
    for(int i=0;i<le2;i++){
        lc->next = new ListNode(0,NULL);
        lc = lc->next;
    }
    ListNode*lc1 = l1;
    lc = l2;
    for(int i=0;i<le2;i++){
        cin>>t;
        if(t>=0&&t<10){
            lc->val = t;
            lc = lc->next;
        }
    }
    ListNode *l = s.addTwoNumbers(lc1,l2);
    while(l!=NULL){
        cout<<l->val<<" ";
        l = l->next;
    }
}
