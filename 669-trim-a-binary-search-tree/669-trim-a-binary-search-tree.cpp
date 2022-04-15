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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // if root is null we return root.
        if(!root) return root;
        // if root value more then low and less then high.
        if(root->val >= low and root->val <= high){
            root->left = trimBST(root->left, low , high);
            root->right = trimBST(root->right, low , high);
            return root;
        }
        // if root val is less then low.
        if(root->val < low)
            return trimBST(root->right,low,high);
        return trimBST(root->left,low,high);
    }
};