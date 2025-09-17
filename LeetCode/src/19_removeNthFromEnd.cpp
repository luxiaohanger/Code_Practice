#include <bits/stdc++.h>
#include "mylist.h"
using namespace std;
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* front=head;
    ListNode* back=head;
    ListNode* dummy=new ListNode;
    dummy->next=head;
    ListNode* prev=dummy;
    while(n--) {
        front=front->next;
    }
    while(front) {
        front=front->next;
        back=back->next;
        prev=prev->next;
    }
    prev->next=back->next;
    ListNode* ans=dummy->next;
    delete dummy;
    return ans;
}

int main() {

    return 0;
}
