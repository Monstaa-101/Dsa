/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *p = head, *q = head;

        while(q!=NULL and q->next != NULL){
            p = p->next;
            q = q->next->next;
            
            if(p==q and p!=NULL) return true;
        }

        return false;
    }
};