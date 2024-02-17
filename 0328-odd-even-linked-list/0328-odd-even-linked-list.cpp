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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *temp=head;
        vector<int>ans;
        while(temp!=nullptr and temp->next!=nullptr) //for odd indexes
        {
            ans.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp)
        ans.push_back(temp->val);

        temp=head->next;
         while(temp!=nullptr and temp->next!=nullptr) //for odd indexes
        {
            ans.push_back(temp->val);
            temp=temp->next->next;
        }
         if(temp)
        ans.push_back(temp->val);

        //now store it in temp
        temp=head;
        int i=0;
        int n=ans.size();
        while(temp!=nullptr and i<n)
        {
            temp->val=ans[i++];
            temp=temp->next;
        }
        return head;

        
    }
};