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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp, *prev, *next;
        prev = NULL;
        temp = head;
        next = head;
        
        while(next != NULL) {
            next = next->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        
        return prev;
    }
};
