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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || right == left) return head;
        
        ListNode *p = head;
        ListNode *before = NULL;
        for(int i = 1; i < left; i++) { 
            before = p; 
            p = p->next;
        }
        
        ListNode *subListTail = p; 
        
        ListNode *q = NULL, *r = NULL;
        for(int i = left; i <= right; i++){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        ListNode *after = p;

        if (before != NULL) {
            before->next = q;
        } else {
            head = q;
        }

        subListTail->next = after;
    
        return head; 
    }
};