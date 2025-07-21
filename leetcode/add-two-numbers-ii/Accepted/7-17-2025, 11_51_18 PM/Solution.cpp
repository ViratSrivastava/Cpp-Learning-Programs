// https://leetcode.com/problems/add-two-numbers-ii

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == 0 && l2 == 0) return nullptr;
        if(l1 == 0) return l2;
        if(l2 == 0) return l1;

        stack<int> s1;
        int c1 = 1, c2 = 1;
        stack<int> s2;
        ListNode* temp = l1;
        while(temp){
            s1.push(temp -> val);
            temp = temp -> next;
            c1++;
        }
        temp = l2;
        while(temp){
            s2.push(temp -> val);
            temp = temp -> next;
            c2++;
        }

        int carry = 0;
        ListNode* head = nullptr;
        
        while (!s1.empty() || !s2.empty() || carry != 0) {
            int a = 0, b = 0;
            if (!s1.empty()) {
                a = s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                b = s2.top();
                s2.pop();
            }
            int sum = a + b + carry;
            int digit = sum % 10;
            carry = sum / 10;
            
            // Create a new node and insert at head
            ListNode* newNode = new ListNode(digit);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};