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
    bool isUnivalTree(TreeNode* root) {
        //DFS;
        
        stack<TreeNode*> st;
        st.push(root);
        int univalue = root->val;
        
        while(!st.empty()){
            
            TreeNode* temp = st.top();
            st.pop();
            if(temp->val != univalue ){
                return false;
            }
            
            if(temp->left != NULL){
                st.push(temp->left);
            }
            if(temp->right != NULL){
                st.push(temp->right);
            }
        }
        return true;
    }
};