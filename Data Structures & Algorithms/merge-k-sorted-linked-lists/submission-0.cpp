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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector <int> v;
        for(int i = 0; i < lists.size(); i++){
            ListNode *curr = lists[i];
            while(curr){
                v.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(v.begin(), v.end());
        ListNode *head = new ListNode();
        ListNode *curr = head;
        ListNode *prev = NULL;
        for(auto x : v){
            curr->val = x;
            curr->next = new ListNode();
            prev = curr;
            curr = curr->next;
            
        }
        if(!prev)return NULL;
        prev->next = NULL;
        return head;
        
    }
};
