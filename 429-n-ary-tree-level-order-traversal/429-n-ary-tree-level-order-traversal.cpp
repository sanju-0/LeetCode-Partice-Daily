/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        // Base case.
        if(root == NULL) {
            return {};
        }
        // We make our quere here 
        queue<Node*> q;
        q.push(root);
        
        // 2d ans vector.
        vector<vector<int>> ans;
        
        // While loop until we raech at end of queue.
        while(!q.empty()) {
            int n = q.size();
            vector<int> v;
            
            for(int i=0;i<n;i++) {
                Node *temp = q.front();
                q.pop();
                for(auto child:temp->children) {
                    q.push(child);
                }
                v.push_back(temp->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};