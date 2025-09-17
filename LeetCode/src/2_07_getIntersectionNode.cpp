#include <bits/stdc++.h>
#include "mylist.h"
using namespace std;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA||!headB)return nullptr;
    if(headA==headB)return headA;
    vector<ListNode*> A;
    vector<ListNode*> B;
    ListNode* a=headA;
    ListNode* b=headB;
    while(a) {
        A.push_back(a);
        a=a->next;
    }
    while(b) {
        B.push_back(b);
        b=b->next;
    }
    if(A.back()!=B.back())return nullptr;
    int ans=0;
    for(int i=A.size()-1,j=B.size()-1;;i--,j--) {
        if(A[i]!=B[j]){
            ans=i+1;
            break;
        }
        if(i==0||j==0) {
           if(i==0)return headA;
            return headB;
        }
    }

    return A[ans];
}
int main() {

    return 0;
}
