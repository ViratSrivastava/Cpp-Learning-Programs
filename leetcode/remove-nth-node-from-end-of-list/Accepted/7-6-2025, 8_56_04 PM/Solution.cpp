// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 1 & head->next == nullptr){
            delete head;
            return nullptr;
        } 
        ListNode* temp = head;
        int len = 0;
        while(temp != nullptr){
            len++;
            temp = temp->next;
        }
        if(n == len){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int pos = len - n;
        len = 1;
        temp = head;
        while(len < pos){
            temp = temp->next;
            len++;   
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};