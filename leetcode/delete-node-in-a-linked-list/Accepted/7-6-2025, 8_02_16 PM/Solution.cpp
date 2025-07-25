// https://leetcode.com/problems/delete-node-in-a-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        while(temp->next->next!=nullptr){
            temp->val = temp->next->val;
            temp = temp->next;
        }
        temp->val = temp->next->val;
        ListNode* last = temp->next;
        temp->next = nullptr;
        delete last;
    }
};