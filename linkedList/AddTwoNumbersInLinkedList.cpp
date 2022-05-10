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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        int carry = 0;
        
        ListNode *temp = head;
        
        while(l1 != NULL && l2 != NULL) {
            int data = l1->val + l2->val + carry;
            carry = data/10;
            ListNode *newNode = new ListNode(data%10);
            l1 = l1->next;
            l2 = l2->next;
            temp->next = newNode;
            temp = temp->next;
        }
        
        while(l1 != NULL) {
            int data = l1->val + carry;
            carry = data/10;
            ListNode *newNode = new ListNode(data%10);
            l1 = l1->next;
            temp->next = newNode;
            temp = temp->next;
        }
        
        while(l2 != NULL) {
            int data = l2->val + carry;
            carry = data/10;
            ListNode *newNode = new ListNode(data%10);
            l2 = l2->next;
            temp->next = newNode;
            temp = temp->next;
        }
        
        if(carry != 0) {
            temp->next = new ListNode(carry);
        }
        
        return head->next;
    }
};
