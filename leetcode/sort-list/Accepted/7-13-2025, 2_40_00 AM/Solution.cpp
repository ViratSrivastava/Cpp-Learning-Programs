// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* del = nullptr;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            //del = temp;
            temp = temp->next;
            //delete del;
        }
        sort(arr.begin(), arr.end());

        temp = head;
        for(int val : arr){
            temp->val = val;
            temp = temp -> next;  
        }
        return head;   
    }
};