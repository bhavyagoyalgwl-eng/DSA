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
    ListNode* merge(ListNode* a,ListNode*b){
        ListNode*tempA=a;
        ListNode*tempB=b;
        ListNode*c=new ListNode(100);
        ListNode*tempC=c;
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->val>=tempB->val){
                tempC->next=tempB;
                tempC=tempB;
                tempB=tempB->next;
            }
            else{
                tempC->next=tempA;
                tempC=tempA;
                tempA=tempA->next;
            }
        }
        if(tempA==NULL){
            tempC->next=tempB;
        }
        else{
            tempC->next=tempA;
        }
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*a=head;
        ListNode*temp=slow->next;
        slow->next=NULL;
        a=sortList(a);
        temp=sortList(temp);
        ListNode*c=merge(a,temp);
        return c;

    }
};