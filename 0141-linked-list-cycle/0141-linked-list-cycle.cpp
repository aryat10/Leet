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

        ListNode* fast = head;    // We will have two pointers 
        ListNode* slow = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;          // slow will traverse for one step
            fast = fast->next->next;      // fast will traverse for two step 
            if(slow==fast)        // there will be the time while the two pointers will move and will meet at some point 
            return true;              // here it will be clear that there exsist a loop cycle
        }
 
        return false;   // and if not then we will return no cycle 
    }
};