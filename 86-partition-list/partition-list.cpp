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
    ListNode* partition(ListNode* head, int x) {
       ListNode*l=new ListNode(100);
       ListNode*g=new ListNode(200);
       ListNode*templ=l;
       ListNode*tempg=g;
       ListNode*temp=head;
       while(temp!=NULL){
        if(temp->val<x){
            templ->next=temp;
            templ=temp;
            temp=temp->next;
        }
        else{
            tempg->next=temp;
            tempg=temp;
            temp=temp->next;

        }
       }
       templ->next=g->next;
       tempg->next=NULL;
       return l->next;
    }
};