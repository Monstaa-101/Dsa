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
        ListNode* dummy = new ListNode(0); // Dummy node to act as the head anchor
        ListNode* curr = dummy;            // Pointer to track the current node in the result list
        int carry = 0;                     // Stores the carry-over value for the next addition
        
        // Loop as long as there are nodes to process in l1 OR l2, or a remaining carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            // 1. Extract values if nodes exist, otherwise use 0
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            // 2. Calculate the total sum for the current column
            int total = val1 + val2 + carry;
            carry = total / 10;            // Calculate new carry (e.g., 14 / 10 = 1)
            int digit = total % 10;          // Calculate digit to store (e.g., 14 % 10 = 4)
            
            // 3. Create the new node and advance the current pointer
            curr->next = new ListNode(digit);
            curr = curr->next;
            
            // 4. Move to the next input nodes if they are available
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        // The actual head of the result list is right after the dummy node
        ListNode* result = dummy->next;
        delete dummy; // Free the temporary memory allocated for dummy
        return result;
    }
};