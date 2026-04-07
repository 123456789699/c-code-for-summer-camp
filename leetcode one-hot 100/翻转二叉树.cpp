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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return root;
        TreeNode* tmp = new TreeNode(root->val);
        queue<TreeNode*> q;
        queue<TreeNode*> q_next;
        q.push(root);
        q_next.push(tmp);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            TreeNode* test=q_next.front();
            q_next.pop();
            if(cur->left) {TreeNode* t1=new TreeNode(cur->left->val);test->right=t1;q.push(cur->left);q_next.push(t1);}
            if(cur->right) {TreeNode* t1=new TreeNode(cur->right->val);test->left=t1;q.push(cur->right);q_next.push(t1);}
        }
        return tmp;
    }
};
