#include <bits/stdc++.h>
#include "mylist.h"
using namespace std;
ListNode *detectCycle(ListNode *head) {
    if(!head)return nullptr;
    ListNode* fast=head;
    ListNode* slow=head;
    bool isCycle=true;
    int cyclelen=0;
    int cnt1=0,cnt2=0;
    while(fast&&slow) {
        fast=fast->next;
        cnt1++;
        if(fast==slow) {
            cyclelen=cnt1-cnt2;
            isCycle=false;
            break;
        }
        slow=slow->next;
        cnt2++;
        if(fast) {
            fast=fast->next;
            cnt1++;
            if(fast==slow) {
                cyclelen=cnt1-cnt2;
                isCycle=false;
                break;
            }
        }else {
            break;
        }
    }
   if(isCycle) return nullptr;
    ListNode* check=head;
    int s=cyclelen;
    for(int i=1;i<=cnt2;i++) {
        check=head;
        s=cyclelen;
        for(int k=1;k<=i;k++) {
            check=check->next;
        }
        while(s--) {
            if(fast==check)return check;
            else fast=fast->next;
        }
    }
}

int main() {

    return 0;
}
