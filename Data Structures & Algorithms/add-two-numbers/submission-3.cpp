/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        if(!l1) return l2;
        if(!l2) return l1;
        int carry = 0;
        ListNode* temp = res;

        while(l1 != NULL || l2 != NULL){
            int add = 0;

            if(l2 != NULL){
                add += l2->val;
                l2 = l2->next;
            }
            if(l1 != NULL){
                add += l1->val;
                l1 = l1->next;
            }
            add += carry;

            if(add >= 10){
                int digit = add%10;
                carry = add/10;
                res->next = new ListNode(digit);
                res = res->next;
            }else{
                res->next = new ListNode(add);
                res = res->next;
                carry = 0;
            }
        }
        if(carry != 0) res->next = new ListNode(carry);
        return temp->next;
        
    }
};
