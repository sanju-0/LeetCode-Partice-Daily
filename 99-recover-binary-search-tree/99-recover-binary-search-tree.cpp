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
    private:
    TreeNode* fir;
    TreeNode* prev;
    TreeNode* mid;
    TreeNode* last;
    private:
    void inorder(TreeNode* root){
       if(root == NULL) return;
        inorder(root->left);
        if(prev != NULL and (root->val < prev->val)){
            // if we get our 1st incorrect sapce we store it in fir and mid.
            if(fir == NULL){
                fir = prev;
                mid = root;
            }
            // if we get 2nd incorrect sapce also then store it into last.
            else
                last = root;
        }
        prev = root;
        inorder(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        fir = mid = last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if(fir and last) swap(fir->val, last->val);
        else if(fir and mid) swap(fir->val, mid->val);
    }
};