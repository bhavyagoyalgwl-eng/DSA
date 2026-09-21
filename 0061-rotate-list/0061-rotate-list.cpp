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
        if(head==NULL || head->next==NULL) return head;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        
        k%=len;
        if(k==0) return head;
        temp=head;
    
        ListNode*temp2=head;
        int number=len-k;
        while(temp!=NULL && number>1){
            temp=temp->next;
            number--;
        }
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        ListNode* newHead=temp->next;
        temp2->next=head;
        temp->next=NULL;
        return newHead;


    }
};