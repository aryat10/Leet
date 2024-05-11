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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* temp1;
        ListNode* prev;
        head=head->next;
        int cnt=0;
        while(temp!=NULL && temp->next!=NULL){
            temp1=temp->next;
            temp->next=temp1->next;
            temp1->next=temp;
            if(cnt==1){
                prev->next=temp1;
            }
            prev=temp;
            if(temp->next!=NULL){
                temp=temp->next;
            }
            cnt=1;
        }
        return head;
    }
};