// https://leetcode.com/problems/rotate-list

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0){
            return head;
        }
        int lenght = 1;
        ListNode* tail = head;
        while(tail->next){
            tail = tail->next;
            lenght++;
        }
        tail->next = head;
        int div = lenght - (k % lenght);
        int count = 0;
        while(count < div){
            tail = tail->next;
            count++;
        }
        ListNode* tempHead = tail->next;
        tail->next = NULL;
        return tempHead;
    }
};