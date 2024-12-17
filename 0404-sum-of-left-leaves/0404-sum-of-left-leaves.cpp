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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        queue<pair<TreeNode* , bool>> q;
        q.push({root,false});
        int totalSum = 0;
        
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            bool isleaf = q.front().second;
            
            q.pop();
            if(isleaf && !temp->left && !temp->right){
                totalSum = totalSum + temp->val;
            }
            
            if(temp->left){
                q.push({temp->left , true});
            }
            if(temp->right){
                q.push({temp->right , false});
            }
            
        }
        return totalSum;
    }
};