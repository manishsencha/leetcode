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
        int c = 0;
        for(auto node = head; node != NULL; node=node->next) c++;
        if(c == 1) return NULL;
        ListNode* node = head;
        for(int i = 0; i < c - n - 1; ++i) {
            node = node -> next;
        }
        if(c == n) return head->next;
        // cout << node -> val << endl;
        node -> next = node -> next -> next;
        return head;
    }
};