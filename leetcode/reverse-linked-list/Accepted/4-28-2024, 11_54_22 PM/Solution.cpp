// https://leetcode.com/problems/reverse-linked-list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr){
            next = current->next; // Save the next node
            current->next = prev; // Reverse the current node's pointer
            prev = current;       // Move prev pointer one step forward
            current = next;       // Move current pointer one step forward
        }
        return prev; // prev now points to the last node of the original list, which becomes the head of the reversed list
    }
};