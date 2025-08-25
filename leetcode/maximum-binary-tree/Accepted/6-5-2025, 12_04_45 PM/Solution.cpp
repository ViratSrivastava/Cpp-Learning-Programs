// https://leetcode.com/problems/maximum-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Helper function to find index of the maximum element in nums[l...r]
    int findMaxIndex(vector<int>& nums, int l, int r) {
        int maxIdx = l;
        for (int i = l + 1; i <= r; ++i) {
            if (nums[i] > nums[maxIdx]) {
                maxIdx = i;
            }
        }
        return maxIdx;
    }

    // Recursive function to build the Maximum Binary Tree
    TreeNode* build(vector<int>& nums, int l, int r) {
        if (l > r) return nullptr; // base case: empty subarray

        int maxIdx = findMaxIndex(nums, l, r); // get max element index
        TreeNode* root = new TreeNode(nums[maxIdx]); // this is current root

        // Build left subtree from left side of max
        root->left = build(nums, l, maxIdx - 1);

        // Build right subtree from right side of max
        root->right = build(nums, maxIdx + 1, r);

        return root;
    }

    // Main function called by LeetCode
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};