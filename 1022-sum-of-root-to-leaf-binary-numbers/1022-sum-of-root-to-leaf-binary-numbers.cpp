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
    int sumRootToLeaf(TreeNode* root) {
        if(!root){
            return 0;
            
        }
        
        stack<pair<TreeNode*,int>> stp;
        
        stp.push({root,0});
        int sum = 0 ;
        
        while(!stp.empty()){
            auto[temp , summ] = stp.top();
            stp.pop();
            
            summ = summ * 2 + temp->val;
            
            if(!temp->left && !temp->right){
                sum = sum + summ;
            }
            
            if(temp->right != NULL){
                stp.push({temp->right , summ});
            }
            if(temp->left != NULL){
                stp.push({temp->left , summ});
            }
        }
        return sum;
    }
};