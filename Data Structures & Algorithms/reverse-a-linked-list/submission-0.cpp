


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* next_temp;
        while (head!=nullptr){
            next_temp=head->next;
            head->next=prev;
            prev=head;
            head=next_temp;
        }
        return prev;
    }
};
