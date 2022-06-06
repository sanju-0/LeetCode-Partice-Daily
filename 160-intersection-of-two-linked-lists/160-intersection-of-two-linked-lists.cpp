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
    ListNode *t1=headA,*t2=headB;
    int l1=0,l2=0;
    
    while(t1) t1=t1->next, l1++;
     while(t2) t2=t2->next,l2++;
        
    int k=abs(l1-l2);
     if(l1>l2) while(k--) headA=headA->next;
       else while(k--) headB=headB->next;
       while(headA!=headB) headA=headA->next, headB=headB->next;
    
    return headA;
    }
};