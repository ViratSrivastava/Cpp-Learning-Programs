// https://leetcode.com/problems/odd-even-linked-list

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return head;
        if(head->next == nullptr || head->next->next == nullptr) return head;
        int count = 1;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenListHead = even;
        while(even && even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even -> next;
        }
        odd -> next = evenListHead;
        return head;
    }
};