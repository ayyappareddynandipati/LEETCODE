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
        if(!head || !head->next || k == 0) return head;
        int lengthOfHead = 1;
        ListNode* tail = head;
        while(tail->next){
            lengthOfHead++;
            tail=tail->next;
        }
        k %= lengthOfHead;
        if(k == 0) return head;
        tail->next = head;
        int stepsToNewTail = lengthOfHead - k;
        ListNode* newTail = tail;
        while(stepsToNewTail--){
            newTail=newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};