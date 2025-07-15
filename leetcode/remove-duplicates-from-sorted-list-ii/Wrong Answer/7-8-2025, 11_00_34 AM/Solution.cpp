// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* Present = head;
        ListNode* Hold = head;
        ListNode* Del = Hold->next;
        while(head->val == head->next->val){
            Hold = head;
            Present = head->next;
            head = Present->next;
            delete Hold;
        }

        while(Present->next != nullptr){
            if(Present -> val < Present -> next -> val){
                Present = Present -> next;
            }
            else if(Present->next == nullptr){
                return head;
            }
            else{
                Hold = Present;
                while(Present -> val == Hold -> next-> val){
                    Present = Present-> next;
                }
                Present = Present-> next;
                Hold -> next = Present;
            }
        }
        return head;
    }
};
