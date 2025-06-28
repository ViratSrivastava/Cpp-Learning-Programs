// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* first = head;
        ListNode* last = head ->next;
        ListNode* newHead = last;
        ListNode* prev = nullptr; 
        while(first && first->next){
            first->next = first ->next->next;
            last->next = first;
            if(prev){
                prev ->next = last;
            }
            prev = first;
            first = first->next;
            if(!first || !first->next){
                break;
            }
            last = first->next;
        }
        return newHead;
    }
};