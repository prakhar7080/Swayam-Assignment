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
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *head = new ListNode(0);
        ListNode *ptr = head;
        int carry = 0;
        int base;
        while(temp1 || temp2){
            int add = 0;
            if(temp1){
                add += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2){
                add += temp2->val;
                temp2 = temp2->next;
            }
            if(carry) add += carry;
            ptr->next = new ListNode(add%10);
            ptr = ptr->next;
            carry = add/10;
        }
        if(carry) ptr->next = new ListNode(carry);
        return head->next;
    }
};
