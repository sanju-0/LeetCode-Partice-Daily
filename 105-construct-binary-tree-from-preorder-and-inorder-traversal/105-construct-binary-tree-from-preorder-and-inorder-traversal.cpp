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
    int idx = 0;
    /*
    int search(vector<int>& inorder, int st, int end, int curr) {
        for(int i=st;i<=end;i++) {
            if(inorder[i] == curr) {
                return i;
            }
        }
        return -1;
    }
    */
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int st, int end) {
        // static int idx = 0;
        // base case
        if(st > end) {
            return NULL;
        }
        /*int curr = preorder[idx];
        idx++; */
        TreeNode* node = new TreeNode(preorder[idx++]);
        /* if(st == end) {
            return node;
        }
        int pos = search(inorder, st, end, curr); */
        int pos;
        for(int i=st;i<=end;i++) {
            if(inorder[i] == node->val) {
                pos = i;
                break;
            }
        }
        node->left = helper(preorder, inorder, st, pos-1);
        node->right = helper(preorder, inorder, pos+1, end);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, inorder.size()-1);
    }
};