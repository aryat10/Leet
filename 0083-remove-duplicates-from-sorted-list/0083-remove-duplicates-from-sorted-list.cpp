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
        if(head == NULL || head->next == NULL){
            return head;
        }

        int temp = head->val;
        ListNode* tempH = head->next;
        ListNode* prev = head;

        while(tempH != NULL){
            if(tempH->val != temp){
                temp = tempH->val;
                prev = tempH;
                tempH = tempH->next;
            }
            else{
                prev->next = tempH->next;
                tempH = prev->next;
            }
        }

        return head;
    }
};