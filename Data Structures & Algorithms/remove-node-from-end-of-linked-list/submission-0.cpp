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
        int count = 0;
        ListNode *curr = head;
        while(curr){
            count += 1;
            curr = curr->next;
        }
        n = count - n;
        count = 0;
        curr = head;
        
        ListNode *prev = NULL;
        if(n == 0)return head->next;
    
        while(curr){
            if(count == n){
                prev->next = curr->next;
                break;
            }
            prev = curr;
            curr = curr->next;
            count += 1;

        }
        return head;
}
};


