// https://leetcode.com/problems/next-greater-node-in-linked-list

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> great;
        if(head->next == nullptr){
            great.push_back(0);
            return great;
        }
        ListNode* temp = head;
        ListNode* pointer = temp;
        while(temp){
            pointer = temp;
            bool done = false;
            while(pointer){
                int valR = pointer->val;
                int node = temp->val;
                if(valR>node){
                    great.push_back(valR);
                    done = true;
                    break;
                }
                pointer = pointer->next;
            }
            if(done == false){
                great.push_back(0);
            }
            temp = temp->next;
        }
        return great;
    }
};