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
    int gcd(int a, int b){
        if(a == 1)return a;
        if(b == 1)return b;
        if(a == b)return a;
        if(a > b)return gcd(a -b, b);
        return gcd(a, b - a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *curr = head;
        ListNode *end = curr->next;
        while(end){
            int x = gcd(curr->val, end->val);
            ListNode *newNode = new ListNode();
            newNode->val = x;
            newNode->next = end;
            curr->next = newNode;
            curr = end;
            end = end->next;
        }
        return head;
    }
};