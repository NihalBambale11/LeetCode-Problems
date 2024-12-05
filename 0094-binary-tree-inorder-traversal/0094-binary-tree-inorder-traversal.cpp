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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* trav = root;
        vector<int> v;
        while( !st.empty() || trav != NULL){
            if(trav != NULL){
                st.push(trav);
                trav = trav -> left;
            }
            else{
                trav = st.top();
                st.pop();
                v.push_back(trav->val);
                trav = trav->right;
            }
        }
        return v;
    }
};