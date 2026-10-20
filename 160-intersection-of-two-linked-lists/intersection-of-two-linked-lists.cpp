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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        int lenA=0;
        int lenB=0;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        int diff=abs(lenA-lenB);
        if(lenA>lenB){
            while(diff>0){
                tempA=tempA->next;
                diff--;
            }
        }
        else{
            while(diff>0){
                tempB=tempB->next;
                diff--;
            }
        }
        while(tempA!=tempB && tempA!=NULL && tempB!=NULL){
            tempA=tempA->next;
            tempB=tempB->next;
        }
    
        return tempA;
    }
};