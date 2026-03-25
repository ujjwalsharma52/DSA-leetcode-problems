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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return NULL;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            // Check if duplicate sequence exists
            if (curr->next && curr->val == curr->next->val) {
                int val = curr->val;

                // Skip all nodes with this value
                while (curr && curr->val == val) {
                    curr = curr->next;
                }

                prev->next = curr; // remove duplicates completely
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};