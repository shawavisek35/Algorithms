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
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = NULL;
        
        int cnt = 0;
        
        while(fast != NULL && cnt != n) {
            fast = fast->next;
            cnt ++;
        }
        
        while(fast != NULL) {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        
        if(!prev) return head->next;
        
        prev->next = slow->next;
        return head;
    }
};
