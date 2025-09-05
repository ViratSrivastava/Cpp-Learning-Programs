// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int maxDepth(TreeNode* root) {
        // If the root is null, return 0
        if (root == nullptr) {
            return 0;
        }
        
        else{
        // Calculate the depth of the left and right subtrees recursively
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        // Return the maximum depth of the subtrees plus one for the current node
        return max(left, right) + 1;
        }
    }
};