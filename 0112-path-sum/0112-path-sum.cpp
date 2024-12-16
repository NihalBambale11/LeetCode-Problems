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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return false;
        }
        
        queue<pair<TreeNode* ,int> > q;
        q.push({root,root->val});
        
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int summ = q.front().second;
            
            q.pop();
            
            if(temp->left == nullptr && temp->right == nullptr && targetSum == summ){
                return true;
            }
            
            if(temp->left){
                q.push({temp->left , summ + temp->left->val});
            }
            if(temp->right){
                q.push({temp->right , summ + temp->right->val});
            }
        }
        
        return false;
    }
};