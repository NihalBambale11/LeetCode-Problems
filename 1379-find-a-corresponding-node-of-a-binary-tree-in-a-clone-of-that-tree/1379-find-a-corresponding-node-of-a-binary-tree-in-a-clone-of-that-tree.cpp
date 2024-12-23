/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        
        st1.push(original);
        st2.push(cloned);
        
        while(!st1.empty()){
            TreeNode* org = st1.top();
            TreeNode* clone = st2.top();
            
            st1.pop();
            st2.pop();
            
            if(org == target){
                return clone;
            }
            
            if(org->left){
                st1.push(org->left);
                st2.push(clone->left);
            }
            if(org->right){
                st1.push(org->right);
                st2.push(clone->right);
            }
        }
        return nullptr;
    }
};