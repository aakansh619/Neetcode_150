class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        for(int i=0; i<n; i++){
            temp = temp->next;
        }
        if(temp == NULL) return head->next;
        ListNode* prev = head;

        while(temp != NULL and temp->next != NULL){
            temp = temp->next;
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return head;
    }
};
