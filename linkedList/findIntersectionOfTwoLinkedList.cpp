class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // efficient approach
        int countA = 0, countB = 0;
        ListNode *temp = headA;
        while(temp) {
            countA ++;
            temp = temp->next;
        }
        temp = headB;
        while(temp) {
            countB ++;
            temp = temp->next;
        }
        
        int diff = abs(countA - countB);
        ListNode *listA = headA;
        ListNode *listB = headB;
        
        if(countB > countA) {
            swap(listA, listB);
        }
        
        int count = 0;
        while(listA && count != diff) {
            listA = listA->next;
            count++;
        }
        
        while(listA && listB) {
            if(listA == listB) {
                return listA;
            }
            listA = listA->next;
            listB = listB->next;
        }
        
        return NULL;
    }
};
