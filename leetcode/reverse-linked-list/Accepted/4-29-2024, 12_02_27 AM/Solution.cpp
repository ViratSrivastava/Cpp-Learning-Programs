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
            next = current->next; 
            current->next = prev;
            prev = current;       
            current = next;       
        }
        return prev; 
    }
};