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
    int getDecimalValue(ListNode* head) {
        int n = 0;
        for(ListNode* node = head; node != NULL; node = node -> next) n++;
        int res = 0;
        for(ListNode* node = head; node != NULL; node = node -> next) {
            res += (node -> val) * pow(2, --n);
        }
        return res;
    }
};