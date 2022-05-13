/*
    step 1: find the middle untill the fast pointer goes to end or second end;
    step 2: reverse the entire list after the mid;
    step 3: then start the fast from head and slow from mid na dcheck it the entire list is palindrome 
*/
class Solution {
public:
    
    ListNode *reverse(ListNode *head) {
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *next = head;
        while(next) {
            next = next->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *newBeg = reverse(slow->next);
        slow->next = newBeg;
        
        slow = slow->next;
        fast = head;
        
        while(slow) {
            if(fast->val != slow->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
};
