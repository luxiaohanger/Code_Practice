#include <bits/stdc++.h>
#include "mylist.h"
using namespace std;
ListNode* swapPairs(ListNode* head) {
    if(!head)return head;
   ListNode* dummy=new ListNode();
    ListNode* back=dummy;
    ListNode* front=head;
    dummy->next=front;
    while(front&&front->next) {
        back->next=front->next;
        ListNode* temp=front->next->next;
        front->next->next=front;
        front->next=temp;
        back=front;
        front=front->next;
    }
    return dummy->next;
}
int main() {

    return 0;
}