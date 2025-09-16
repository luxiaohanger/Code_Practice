struct ListNode {
     int val;
        ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
class DeleteRepeatedElement {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
        ListNode* last=head;
        if(!ptr)return ptr;//如果head就是空指针？666
        int temp=head->val;
        ptr=ptr->next;
        while(ptr) {
            if(ptr->val==temp) {
                //delete this element
                last->next=ptr->next;
                ptr=ptr->next;
            }else {
                temp=ptr->val;
                last=ptr;
                ptr=ptr->next;
            }
        }
        return head;
    }

};