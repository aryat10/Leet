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
    ListNode* kreverse(ListNode* h,ListNode* bef,ListNode* curr, int i){
       bef->next = curr->next;
       curr->next = h;
       h = curr;
       return h;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;        
        int m = k;
        int cout = 0;
        if(head==NULL) return head;
        while(curr!=NULL){
            cout++;
            curr = curr->next;
        }
        if(cout < k) return head;
        curr = head;
        if (k==1) return head;
        while(m>1 && curr!=NULL){
          ListNode* bef = curr;
          curr = curr->next;
          if(curr!=NULL){
              
              head = kreverse(head,bef,curr,m);
              curr = bef;              
          }
          m=m-1;        

        }

        if(curr!=NULL && curr->next!=NULL){
         curr->next = reverseKGroup(curr->next,k);   
        }
          

        return head;
    }
};









// Method 2


class Solution {
public :       
ListNode* kReverse(ListNode* head, int k) {

    // Write your code here.

    int size = 0;

    ListNode *curr = head;

    while(curr){

        curr = curr -> next;

        size++;

    }

    if(size<k){

        return head;

    }

    ListNode *prev = NULL;

    ListNode *next = head;

    curr = NULL;

    int count = 0;

    while(next && k>count){

        count++;

        curr = next;

        next = curr -> next;

        curr -> next = prev;

        prev = curr;

    }

    if(next){

        head -> next = kReverse(next, k);

    }

    return prev;
}
}
