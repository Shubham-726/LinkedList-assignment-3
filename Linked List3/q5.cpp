class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = reverse(head->next);
        head->next->next = head;
        head->next =  NULL;
        return newhead;
    }
    int getDecimalValue(ListNode* head) {
        head = reverse(head);
        int count = 0;
        int sum = 0;
        int a = 1;
        while(head){
            sum += a *(head->val);
            head = head->next;
            a*=2;
        }
        return sum;
    }
};