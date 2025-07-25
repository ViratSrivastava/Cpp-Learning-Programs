// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        int size = 0;
        ListNode* current = head;
        ListNode* prev = nullptr;
        while (current != nullptr) {
            size++;
            current = current->next;
        }
        int middleIndex = size / 2;
        current = head;
        for (int i = 0; i < middleIndex; i++) {
            prev = current;
            current = current->next;
        }
        if (prev != nullptr) {
            prev->next = current->next;
            delete current;
        } 
        else {
            head = head->next; 
            delete current;
        }
        return head;
    }
};        