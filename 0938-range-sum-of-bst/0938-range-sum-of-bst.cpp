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
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> st;
        
        st.push(root);
        int sum = 0;
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            
            if(temp->val >= low && temp->val <= high){
                sum = sum + temp->val;
            }
            
            if(temp->left != NULL){
                st.push(temp->left);
            }
            if(temp->right != NULL){
                st.push(temp->right);
            }
        }
        return sum;
    }
};