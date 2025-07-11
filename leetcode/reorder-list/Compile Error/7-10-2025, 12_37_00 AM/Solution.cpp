// https://leetcode.com/problems/reorder-list

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
    void reorderList(ListNode* head) {
        if(head == nullptr || head ->next == nullptr || head->next->next == nullptr) return head;
        
        ListNode* temp = head;
        int count = 1;
        int mid = 0;
        while(temp){
            count++;
        }
        if(count%2 == 1){
            mid = (count/2) +1;
        }
        else{
            mid = count/2;
        }
        ListNode* reorderedStart = new ListNode(head, nullptr);
        count = 0
        while(count<=mid){
            count++;
            reorderedStart -> next = temp;
            temp = temp -> next;
        }








        int counterCountO = 1;
        int counterCountE = count;
        while(counterCountE > mid){
            count = 1;
            temp = head;
            while(count <counterCountE){
                temp = temp -> next;
                count++;
            }
            reordered -> next = temp;

        }
        return head;
    }
};