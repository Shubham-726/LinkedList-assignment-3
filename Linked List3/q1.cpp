class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(10);
        ListNode* temp = dummy;
        temp->next = head;
        while(head){
            if(head->next != NULL && head->val == head->next->val){
                while(head->next != NULL && head->val == head->next->val){
                    head = head->next;
                }
                temp->next = head->next;
            }
            else
                temp = temp->next;
                head = head->next;
        }
        return dummy->next;
    }
};