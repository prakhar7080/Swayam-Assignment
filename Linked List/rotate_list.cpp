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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0 || head->next == NULL) return head;
        int count = 0;
        ListNode*curr = head;
        ListNode*pre = NULL;
        while(curr){
            count++;
            curr = curr->next;
        }
        if(count == k || k%count == 0) return head;
        k=k%count;
        count-=k;
        curr = head;
        while(count--){
            pre = curr;
            curr = curr->next;
        }
        ListNode*temp = curr;
        while(temp->next!=0){
            temp = temp->next;
        }
        temp->next = head;
        pre->next = NULL;
        return curr;
    }
};
