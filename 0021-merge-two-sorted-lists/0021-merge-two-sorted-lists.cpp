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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            if(list2==NULL ) return NULL;
            else return list2;
        }
        else if(list2==NULL){
            if(list1==NULL) return NULL;
            else return list1;
        }
        ListNode*tempA=list1;
        ListNode*tempB=list2;
        ListNode*c=new ListNode(100);
        ListNode*tempC=c;
        while(tempA!=NULL && tempB!=NULL){
        if(tempA->val>=tempB->val){
            tempC->next=tempB;
            tempC=tempB;
            if(tempB->next==NULL) break;
            tempB=tempB->next;
            
        }
        else if(tempB->val>tempA->val){
            tempC->next=tempA;
            tempC=tempA;
            if(tempA->next==NULL) break;
            tempA=tempA->next;
        }
        }
        if(tempA->next==NULL && tempB->next==NULL){
            if(tempA->val>=tempB->val){
                tempB->next=tempA;
            }
            else{
                tempA->next=tempB;
            }
        }
        else if(tempA->next==NULL){
            tempC->next=tempB;
        }
        else{
            tempC->next=tempA;
        }
        return c->next;
    }
};