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
        
        vector <int> v;
        ListNode *curr = head;

        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        while(left < right){
            swap(v[left - 1], v[right - 1]);
            left += 1;
            right -= 1;
        }
        curr = head;
        int i = 0;
        while(curr){
            curr->val = v[i];
            curr = curr->next;
            i += 1;
        }
        return head;

    }
};