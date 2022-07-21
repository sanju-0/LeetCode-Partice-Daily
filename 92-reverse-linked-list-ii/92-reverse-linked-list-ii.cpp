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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* left_pos=head,*right_pos=head;
        int i=1,temp,diff,j;
        while(i!=left)
        {
            left_pos=left_pos->next;
            right_pos=right_pos->next;
            i++;
        }
        while(left<right)
        {
            right_pos=left_pos;
            diff=right-left;
            j=0;
            while(j!=diff)
            {
                right_pos=right_pos->next; 
                j++;
            }
            //Swapping 
            temp=left_pos->val;
            left_pos->val=right_pos->val;
            right_pos->val=temp;
            //Updating the pointers
            left++;
            right--;
            left_pos=left_pos->next;
        }
        return head;
    }
};