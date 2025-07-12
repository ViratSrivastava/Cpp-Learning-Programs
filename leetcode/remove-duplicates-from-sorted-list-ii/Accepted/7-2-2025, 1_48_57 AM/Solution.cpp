// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            bool preDup = false;

            // Remove all next nodes with same value
            while (curr->next != nullptr && curr->val == curr->next->val) {
                preDup = true;
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }

            if (preDup) {
                // Also delete the current (first) node in duplicate group
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
