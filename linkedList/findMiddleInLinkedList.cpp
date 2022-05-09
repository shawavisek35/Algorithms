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
    ListNode* middleNode(ListNode* head) {
        ListNode *firstPointer = head;
        ListNode *secondPointer = head;
        
        while(firstPointer != NULL && firstPointer->next != NULL) {
            firstPointer = firstPointer->next->next;
            secondPointer = secondPointer->next;
        }
        
        return secondPointer;
    }
};
