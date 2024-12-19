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
    
    vector<int> getleaves(TreeNode* root){
        stack<TreeNode*> st;
        st.push(root);
        vector<int> v;
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            
            if(temp->left == NULL && temp->right == NULL){
                v.push_back(temp->val);
            }
            
            if(temp->left != NULL){
                st.push(temp->left);
            }
            if(temp->right != NULL){
                st.push(temp->right);
            }
        }
        
        return v;
    }
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       
        vector<int> v1 = getleaves(root1);
        vector<int> v2 = getleaves(root2);
        
        return v1 == v2;
         
        
    }
};