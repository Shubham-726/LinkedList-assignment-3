class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        ListNode* temp = slow;
        int maxi = 0;
        while(temp && temp->next ){
            maxi = max(maxi , temp->val + head->val);
            temp = temp->next;
            head = head->next;
        }
        return maxi;
    }
};