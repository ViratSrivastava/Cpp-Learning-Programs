// https://leetcode.com/problems/reverse-linked-list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next_node = curr->next; 
            curr->next = prev;          
            prev = curr;                     
            curr = next_node;         
        }

        return prev;
    }
};
