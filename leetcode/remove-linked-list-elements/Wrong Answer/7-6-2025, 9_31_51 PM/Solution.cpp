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
        while(head->next != nullptr && head->val == val){
            ListNode* temp = head;
            head = head-> next;
            delete temp;
        }
        if(head == nullptr){
            return nullptr;
        }

        ListNode* temp = head;
        while(temp != nullptr && temp -> next != nullptr){
            if(temp ->next -> val == val){
                ListNode* del = temp->next;
                temp->next = temp->next-> next;
                delete del;
            }
            else{ 
                temp = temp -> next;
            }
        }
        return head;
    }
};