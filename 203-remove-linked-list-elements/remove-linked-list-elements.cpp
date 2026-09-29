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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp, *p,*q = NULL;
        p = head;
        if(p == 0) return head;
        if(head){
            while(p and p->val==val){
                temp = p;
                p = p->next;
                delete temp;
                head = p;
            }
        }
        while(p!=NULL){
            if(p->val == val){
                if(q!=NULL){
                    q->next = p->next;
                }
                temp = p;
                p = p->next;
                delete temp;  
            }
            else{
                q = p;
                p = p->next;
            }
        }
        return head;
        
    }   
};