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
     ListNode* List1 = new ListNode(0);
     ListNode* List2 = new ListNode(0);
     
        ListNode* ptr1 = List1;
        ListNode* ptr2 = List2;
        
        while(head) {
           if(head->val < x) {
              ptr1->next = head;
              ptr1 = ptr1->next;
           }
           else {
              ptr2->next = head;
              ptr2 = ptr2->next;  
           }
            head = head->next;
        }
        ptr1->next = List2->next;
        ptr2->next = NULL;
        
        return List1->next;
    }
};