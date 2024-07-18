class Solution {
public:
     int length(ListNode* head){
        int count = 0;
            while(head){
                count++;
                head = head->next;
            }
            return count;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = length(head);
        if(len < k || head == NULL) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy , *prev = dummy , *Next = dummy;
        while(len>=k){
            curr = prev->next;
            Next = curr->next;

            for(int i = 1; i<k; i++){
                curr->next = Next->next;
                Next->next = prev->next;
                prev->next = Next;
                Next = curr->next;
                }
        prev = curr;
        len -= k;
        }
        return dummy->next;
    }
};