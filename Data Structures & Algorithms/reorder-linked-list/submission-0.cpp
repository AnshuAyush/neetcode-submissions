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
    void reorderList(ListNode* head) {
        vector <int> v;
        ListNode *curr = head;
    
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0;
        int j = v.size() - 1;
        vector <int> ret;
        while(i <= j){
            ret.push_back(v[i]);
            ret.push_back(v[j]);
            i += 1;
            j -= 1;
        }
        
        curr = head;
        i = 0;
        while(curr){
            curr->val = ret[i];
            i += 1;
            curr = curr->next;
        }
    }
};
