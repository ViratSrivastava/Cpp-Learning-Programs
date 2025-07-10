// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return head;
        }
        ListNode* temp = head;

        while(temp -> next != nullptr){
            if(head -> val == val){
                head = head->next;
                delete temp;
                temp = head;
            }
            else if(temp -> next -> val = val){
                ListNode d
            }
        }
    }
};