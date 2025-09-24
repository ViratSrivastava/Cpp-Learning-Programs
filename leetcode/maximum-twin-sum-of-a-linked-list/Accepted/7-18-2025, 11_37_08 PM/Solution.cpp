// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int pairSum(ListNode* head) {
        stack<int> topRack;
        ListNode* temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        int  i = 0;
        int val;
        temp = head;
        while(i < count/2){
            i++;
            val = temp -> val;
            topRack.push(val);
            temp = temp -> next;
        }
        int maxVal = INT_MIN;
        int stackVal, twinVal;
        while(!topRack.empty() && temp){
            val = temp->val;
            stackVal = topRack.top();
            topRack.pop();
            temp = temp->next;
            twinVal = val + stackVal;
            maxVal = max(maxVal, twinVal); 
        }
        return maxVal;
    }
};