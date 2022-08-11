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
  bool isValidBST(TreeNode* root) {
        return isValid(root, NULL, NULL);
    }
    
    bool isValid(TreeNode* root, int* min, int* max){
        if(!root)
            return 1;

        if(max && root -> val >= *max)
            return 0;
        if(min && root -> val <= *min)
            return 0;
        
        return isValid(root -> left, min, &(root -> val)) && isValid(root -> right, &(root -> val), max);
    }
};