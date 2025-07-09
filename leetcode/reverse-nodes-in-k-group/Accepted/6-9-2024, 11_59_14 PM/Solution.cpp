// https://leetcode.com/problems/reverse-nodes-in-k-group

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
        if (!head || k == 1) return head;
        
        // Count the total number of nodes in the list
        ListNode* curr = head;
        int count = 0;
        while (curr) {
            count++;
            curr = curr->next;
        }

        // Dummy node to handle edge cases easily
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* next = nullptr;
        ListNode* tail = nullptr;

        while (count >= k) {
            tail = prev->next;
            curr = tail->next;
            for (int i = 1; i < k; ++i) {
                tail->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;
                curr = tail->next;
            }
            prev = tail;
            count -= k;
        }
        return dummy.next;
    }
};