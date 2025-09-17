#include <bits/stdc++.h>
    using namespace std;
struct ListNode {
        int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
     };
ListNode* reverseList(ListNode* head) {
   ListNode* node=head;
    if(!head)return node;
    vector<int> vals;
    while(true) {
        vals.push_back(node->val);
        if(node->next)node=node->next;
        else break;
    }
    int n=vals.size();
    ListNode* prev=node;
    for(int i=n-2;i>=0;i--) {
        ListNode* newnode=new ListNode(vals[i]);
        prev->next= newnode;
        prev=newnode;
    }
    return node;
}
int main() {

    return 0;
}