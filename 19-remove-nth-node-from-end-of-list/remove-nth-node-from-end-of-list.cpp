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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
       ListNode* slow=head;
       ListNode* fast=head;
       int temp=n;
       if(head->next==NULL && n==1) return {};

       while(fast->next!=NULL && n>0){
        fast=fast->next;
        n--;
       }
       if(fast->next==NULL && n>0){
        return head->next;
       }
       if(slow==fast) return {};
       while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;

       }
       slow->next=slow->next->next;
       return head; 
    }
};