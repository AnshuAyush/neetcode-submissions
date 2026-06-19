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

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr = head;

        vector <int> v;
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }     
        int i = 0;
        int j = k - 1;
        
        while(j < v.size()){
            int t = j;
            while(i < j){
                swap(v[i], v[j]);
                i += 1;
                j -= 1;
            }
            i = t + 1;
            j = t + k;
        }
        for(auto x : v){
            cout << x << " ";
        }
        curr = head;
        i = 0;
        while(curr){
            curr->val = v[i];
            i += 1;
            curr = curr->next;
        }
        return head;
    }
};
