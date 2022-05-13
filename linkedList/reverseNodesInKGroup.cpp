class Solution {
public:
    vector<ListNode *> reverse(ListNode *head, int k, ListNode *headPrev) {
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *nextNode = head;
        
        while(nextNode && k) {
            nextNode = nextNode->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;
            k--;
        }
        head->next = temp;
        if(headPrev) headPrev->next = prev;
        vector<ListNode *> ans;
        ans.push_back(head);
        ans.push_back(prev);
        ans.push_back(temp);
        return ans;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int totalNodes = 0;
        ListNode *temp;
        while(temp) {
            temp = temp->next;
            totalNodes++;
        }
        ListNode *ans = NULL;
        temp = head;
        ListNode *prevNode = NULL;
        while(totalNodes >= k && temp) {
            vector<ListNode *> pr = reverse(temp, k, prevNode);
            if(!prevNode) {
                ans = pr[1];
            }
            prevNode = pr[0];
            totalNodes -= k;
            temp = pr[2];
        }
        
        return ans;
    }
};
