class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr = head;
        ListNode* next =  NULL;
        ListNode *dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(curr){
            temp = dummy;
            next = curr->next;
            while(temp->next && temp->next->val < curr->val){
                temp = temp->next;
            }
            curr->next = temp->next;
            temp->next = curr;
            curr = next;
        }
        return dummy->next;
    }
};