class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode *cur = new ListNode(0);
        ListNode *temp = cur;
        while(l1 && l2) {
            if(l1->val < l2->val) {
                cur->next = l1;
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1) {
			cur->next = l1;
		}
        if(l2) {
			cur->next = l2;
		}
        return temp->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = slow->next;
        slow->next = NULL;
        return merge(sortList(head), sortList(fast));
    }
};