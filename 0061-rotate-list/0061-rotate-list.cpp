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
        if (!head || !head->next || k == 0) return head;

        
        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        
        k = k % length;
        if (k == 0) return head; 
        
        
        int newTailIndex = length - k;
        ListNode* newTail = head;
        for (int i = 1; i < newTailIndex; i++) {
            newTail = newTail->next;
        }

        
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        temp->next = head;

        return newHead;
    }
};
