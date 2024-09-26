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
    ListNode* deleteDuplicates(ListNode* head) {
      if (!head || !head->next) return head;

        ListNode* current = head; // Start with the head of the list

        while (current->next) {
            // If the current value is the same as the next value
            if (current->val == current->next->val) {
                // Skip the next node
                current->next = current->next->next;
            } else {
                // Move to the next node
                current = current->next;
            }
        }

        return head; // Return the modified list  
    }
};